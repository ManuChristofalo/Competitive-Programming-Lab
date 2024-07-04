#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    string cadeia;
    int n=1, aux=1, loop;

    getline(cin, cadeia);
    for(loop=1; loop<cadeia.size(); loop++){
        if(cadeia[loop]==cadeia[loop-1]){
            n++;
            if(n>=aux) aux=n;
        }
        else n=1;
    }

    cout << aux << endl;
    
    return 0;
}