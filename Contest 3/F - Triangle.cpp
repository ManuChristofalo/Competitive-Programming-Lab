#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    int soma, altura, aux=2, moedas, testes, loop;

    cin >> testes;
    for(loop=0; loop<testes; loop++){
        soma=1; altura=1; aux=2;
        cin >> moedas;

        while(soma<moedas){
            soma=soma+aux;
            aux++;
            if(soma<=moedas) altura++;
        }

        cout << altura << endl;
    }
    
    
    return 0;
}