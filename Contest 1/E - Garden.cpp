#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    int nbaldes, comprimento, loop, n;
    vector<int> baldes;

    cin >> nbaldes >> comprimento;
    for(loop=0; loop<nbaldes; loop++){
        cin >> n;
        baldes.push_back(n);
    }
    sort(baldes.begin(), baldes.end());

    for(loop=nbaldes-1; loop>=0; loop--){
        if(comprimento%baldes[loop]==0){
            cout << comprimento/baldes[loop] << endl;
            break;
        }
    }
    
    
    return 0;
}