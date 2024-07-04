#include <bits/stdc++.h>
using namespace std;

int estrelas;
float x[1002], y[1002], ceu[1002][1002], distMin;
bool flag[1002];

float calculaDistancia(float x1, float y1, float x2, float y2){
    float delta1, delta2;
    delta1=x1-x2;
    delta2=y1-y2;

    return sqrt(delta1*delta1+delta2*delta2);
}

void DFS(int u){
    flag[u]=0;
    for(int v=0; v<estrelas; v++) if(flag[v]==1 && ceu[u][v]<=distMin) DFS(v);
}

int main(){
    ios_base::sync_with_stdio(false);
    int testes, count;
    
    cin >> testes;
    for(int loop=0; loop<testes; loop++){
        cin >> estrelas >> distMin;

        for(int loop2=0; loop2<estrelas; loop2++){
            cin >> x[loop2] >> y[loop2];
            flag[loop2]=1;
        }

        for(int i=0; i<estrelas; i++){
            ceu[i][i]=0;

            for(int j=i+1; j<estrelas; j++){
                ceu[i][j]=calculaDistancia(x[i], y[i], x[j], y[j]);
                ceu[j][i]=ceu[i][j];
            }
        }

        count=0;
        for(int loop2=0; loop2<estrelas; loop2++){
            if(flag[loop2]==1){
                count++;
                DFS(loop2);
            }
        }
            
        cout << "Case " << loop+1 << ": " << count << endl;
    }

    return 0;
}