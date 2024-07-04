#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    string nome1, nome2, junto;
    cin >> nome1;
    cin >> nome2;
    cin >> junto;

    nome1+=nome2;  
    sort(nome1.begin(), nome1.end());  
    sort(junto.begin(), junto.end()); 
    if(nome1==junto) cout << "YES" << endl; 
    else cout << "NO" << endl; 
    
    return 0;
}