#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n, atual, loop, loop2; 
    bool numPossiveis[2001]={0}; //2001 é a soma "máxima"

    cin >> n;
    for(loop=0; loop<n; loop++){
        cin >> atual;
        for(loop2=2000-atual; loop2>0; loop2--){
            if(numPossiveis[loop2]) numPossiveis[loop2+atual]=1;
        }
        numPossiveis[atual]=1;
    }


    for(loop=0; loop<1000; loop++){
        if(numPossiveis[1000+loop]){
            cout << 1000+loop << endl;
            break;
        }

        if(numPossiveis[1000-loop]){
            cout << 1000-loop << endl;
            break;
        }
    }
    
    return 0;
}