#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    int a, soma, max=0, loop, loop2, pos;

    for(loop=0; loop<5; loop++){
        soma=0;
        for(loop2=0; loop2<4; loop2++){
            cin >> a;
            soma+=a;
        }
        if(soma>max){
            max=soma;
            pos=loop+1;
        }
    }

    cout << pos << " " << max << endl;
    
    return 0;
}