#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    int testes, loop;
    long long int tamanho, nBan, linha, mpLinha, total;
    bool flag;

    cin >> testes;
    for(loop=0; loop<testes; loop++){
        linha=1; mpLinha=2; total=1; flag=0;
        cin >> tamanho >> nBan;
        while(mpLinha>0 && total<nBan && mpLinha<=tamanho){
            total+=mpLinha;
            linha++;
            if(mpLinha==tamanho) flag=1;
            if(flag==1) mpLinha--;
            else mpLinha++;
        }

        cout << linha << endl;
    }
    
    return 0;
}