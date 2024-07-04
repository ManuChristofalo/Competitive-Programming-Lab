#include <bits/stdc++.h>
using namespace std;
  
vector<long long> histograma;


long long CalculaArea(vector<long long> histograma, int n){
    stack<int> pilha;
    long long maiorArea=0, topo, areaTopo;
                      
    int i = 0;
    while(i<n){
        if (pilha.empty() || histograma[pilha.top()]<=histograma[i]) pilha.push(i++);
  
        else{
            topo=pilha.top();
            pilha.pop();
  
            areaTopo=histograma[topo]*(pilha.empty() ? i : i - pilha.top() - 1);
  
            if(maiorArea<areaTopo) maiorArea=areaTopo;
        }
    }
  
    while(pilha.empty()==false){
        topo=pilha.top();
        pilha.pop();
        areaTopo=histograma[topo]*(pilha.empty()?i:i-pilha.top()-1);
  
        if(maiorArea<areaTopo) maiorArea=areaTopo;
    }
  
    return maiorArea;
}

int main(){
    int n, loop, a;
    cin >> n;

    for(loop=0; loop<n; loop++){
        cin >> a;
        histograma.push_back(a);
    }

    cout << CalculaArea(histograma, n) << endl;

    return 0;
}