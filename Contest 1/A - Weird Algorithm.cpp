#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    long long int n;
    cin >> n;

    while(n!=1){
        cout << n << " ";
        if(n%2==0) n/=2;
        else n=n*3+1;
    }

    cout << n << endl;

    
    return 0;
}