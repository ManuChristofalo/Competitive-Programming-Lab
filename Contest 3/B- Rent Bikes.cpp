#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    long long int alunos, bikes, reais, a, begin, end, mid, total, aux, maximo, minimo;
    int loop, count;
    bool flag;
    vector<long long int> dinheiro, preco;

    cin >> alunos >> bikes >> reais;
    for(loop=0; loop<alunos; loop++){
        cin >> a;
        dinheiro.push_back(a);
    }
    for(loop=0; loop<bikes; loop++){
        cin >> a;
        preco.push_back(a);
    }

    sort(dinheiro.begin(), dinheiro.end());
    sort(preco.begin(), preco.end());
    begin=0; end=alunos;

    while(begin<=end){
        total=0; aux=reais; count=0; flag=1;
        mid=(begin+end)/2;

        for(loop=alunos-mid; loop<alunos; loop++){
            if(count>=preco.size() || preco[count]>dinheiro[loop]+aux){
                end=mid-1;
                flag=0;
                break;
            }

            else{
                if(dinheiro[loop]<preco[count]) aux=aux+dinheiro[loop]-preco[count];
                total+=preco[count];
                count++;
            }
        }

        if(flag==1){
            begin=mid+1;
            minimo=total-reais;
            maximo=mid;
        }
    }

    cout << maximo << " " << max(minimo, 0LL) << endl;

    
    return 0;
}