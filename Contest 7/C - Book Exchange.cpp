#include <bits/stdc++.h>
using namespace std;

int criancas[202];
int contagem;

int find(int pos, int aux){
    if(criancas[pos]==aux) return contagem;

    contagem++;
    return find(criancas[pos], aux);
}
 
int main(){
    ios_base::sync_with_stdio(false);
    int testes, numCriancas, resp;

    cin >> testes;
    for(int loop=0; loop<testes; loop++){   
        cin >> numCriancas;

        for(int loop2=1; loop2<=numCriancas; loop2++)  cin >> criancas[loop2];

        for(int loop2=1; loop2<=numCriancas; loop2++){
            contagem=1;
            resp=find(loop2, loop2);
            cout << resp << " ";
        }     

        cout << endl;
    }
    
    return 0;
}