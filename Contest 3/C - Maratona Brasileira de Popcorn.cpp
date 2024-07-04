#include <bits/stdc++.h>
using namespace std;

/*Ideia: calcula se é possível que o número que está no meio da busca binária em questão
seja o "delimitador" dos sacos de pipoca. 
*/
bool possivel(int k, long long int sacos, vector<int> &pipocas, long long int competidores){
    int count=1, soma=0, loop;

    for(loop=0; loop<sacos; loop++){
        if(pipocas[loop]>k) return 0;
        if(pipocas[loop]+soma>k){
            count++;
            soma=pipocas[loop];
        }

        else if(pipocas[loop]+soma<=k) soma+=pipocas[loop];
    }

    if(count<=competidores) return 1;
    else return 0;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    long long int sacos, competidores, aproveitamento, loop, begin, mid, end;
    int num, total=0, resp;
    vector<int> pipocas;

    cin >> sacos >> competidores >> aproveitamento;
    for(loop=0; loop<sacos; loop++){
        cin >> num;
        pipocas.push_back(num);
        total+=num; //Calcula o total de pipocas a serem comidas
    }

    //Busca binaria:
    begin=1; end=total; resp=0;
    while(begin<=end){
        mid=(begin+end)/2;
        if(possivel(mid, sacos, pipocas, competidores)==1){
            resp=mid; 
            end=mid-1;
        }
        else begin=mid+1;
    }

    cout << (resp-1)/aproveitamento+1 << endl;
    
    return 0;
}
