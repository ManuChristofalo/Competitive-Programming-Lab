#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int testes, loop, pos, soma;
    long k;
    bool flag;
    vector<long> sequencia, aux;

    cin >> testes;
    for(loop=0; loop<testes; loop++){
        sequencia.clear();
        aux.clear();

        for(pos=0; pos<10; pos++){
            cin >> k;
            sequencia.push_back(k);
            aux.push_back(pos);
        }
        cin >> k;
        flag=0;

        do{
            soma=0;
            for(pos=0; pos<10; pos++){
                soma+=(aux[pos]*sequencia[pos]);
                if(soma>k) break;
            }

            if(soma<=k){
            flag=1;
            break;
            }
        }while(next_permutation(aux.begin(), aux.end()));

        if(flag==1){
            for(pos=0; pos<10; pos++){
                cout << aux[pos];
                if(pos<9) cout << " ";
                else cout << endl;
            }
        }

        else cout << -1 << endl;
    }
    
    
    return 0;
}