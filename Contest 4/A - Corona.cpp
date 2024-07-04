#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    int testes, pessoas, posicao, loop, loop2, pos, count;
    int respMin, respMax;
    vector<int> vetor;
    cin >> testes;

    for(loop=0; loop<testes; loop++){
        vetor.clear(); 
        cin >> pessoas;
        respMin=pessoas; respMax=1;

        for(loop2=0; loop2<pessoas; loop2++){
            cin >> posicao;
            vetor.push_back(posicao);
        }

        for(loop2=0; loop2<pessoas; loop2++){
            pos=loop2;
            count=1;

            while(pos>0){
                if(vetor[pos]-vetor[pos-1]<=2){
                    count++;
                    pos--;
                }
                else break;
            }
            pos=loop2;

            while(pos<pessoas-1){
                if(vetor[pos+1]-vetor[pos]<=2){
                    count++;
                    pos++;
                }
                else break;
            }

            if(count>=respMax) respMax=count;
            if(count<=respMin) respMin=count;
        }

        cout << " " << respMin << " " << respMax << endl;
    }
    
    
    return 0;
}