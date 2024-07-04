#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    int loop, produtos, preco;
    long long desconto;
    vector<int> vetor;

    desconto=0;
    vetor.clear();
    
    cin >> produtos;
    for(loop=0; loop<produtos; loop++){
        cin >> preco; 
        vetor.push_back(preco);
    }

    if(produtos<3) cout << 0 << endl;

    else{
        sort(vetor.begin(), vetor.end());
        reverse(vetor.begin(), vetor.end());
        for(loop=2; loop<produtos; loop+=3){
            if(loop<produtos) desconto+=vetor[loop];
        }

        cout << desconto << endl;
    }

    return 0;
}