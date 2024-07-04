#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    int barras, comprimento, aux=1, maiorAltura=1, total=1, loop;
    vector<int> blocos;

    cin >> barras;
    for(loop=0; loop<barras; loop++){
        cin >> comprimento;
        blocos.push_back(comprimento);
    }


    sort(blocos.begin(), blocos.end());
    for(loop=1; loop<barras; loop++){
        if(blocos[loop]==blocos[loop-1]){
            aux++;
            if(maiorAltura<=aux) maiorAltura=aux;
        }
        else{
            aux=1;
            total++;
        }
    }

    cout << maiorAltura << " " << total << endl;
    
    
    return 0;
}