#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    int n, loop, aux;
    vector<int> vetor;

    cin >> n;
    if(n<=3 && n>1) cout << "NO SOLUTION" << endl;
    else if(n==1) cout << "1" << endl;

    else{
        if(n%2==0){
            for(loop=2; loop<=n; loop+=2) vetor.push_back(loop);
            for(loop=1; loop<n; loop+=2) vetor.push_back(loop);
        }

        else if(n%2==1){
            for(loop=2; loop<=n-1; loop+=2) vetor.push_back(loop);
            for(loop=1; loop<=n; loop+=2) vetor.push_back(loop);
        }
        for(loop=0; loop<vetor.size()-1; loop++) cout << vetor[loop] << " ";
        cout << vetor[vetor.size()-1] << endl;
    }

    
    return 0;
}