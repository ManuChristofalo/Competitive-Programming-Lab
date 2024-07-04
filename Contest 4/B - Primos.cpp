#include <bits/stdc++.h>
using namespace std;

bool primo(int n){
    for(int loop=2; loop<n; loop++) if(n%loop==0) return false;
    return true;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    int numero, prox, loop;
    bool flag=0;
    vector<int> primos;

    for(loop=2; loop<50; loop++) if(primo(loop)==true) primos.push_back(loop);

    cin >> numero >> prox;
    for(loop=0; loop<primos.size(); loop++){
        if(primos[loop]==numero && primos[loop+1]==prox){
            flag=1;
            break;
        }
        if(primos[loop]==numero && primos[loop+1]!=prox) break;
    }

    if(flag==1) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    return 0;
}