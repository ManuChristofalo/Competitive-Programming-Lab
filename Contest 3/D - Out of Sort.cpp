#include <bits/stdc++.h>
using namespace std;

int busca_binaria(vector<int> &sequencia, int begin, int end, int item){
    int i=(begin+end)/2;

    if(begin>end) return -1;

    if(sequencia[i]==item) return i;

    if(sequencia[i]<item) return busca_binaria(sequencia, i+1, end, item);

    else return busca_binaria(sequencia, begin, i-1, item);
}
 
int main(){
    ios_base::sync_with_stdio(false);
    long long int n, m, a, c, x0, loop, count=0;
    vector<int> sequencia;

    cin >> n >> m >> a >> c >> x0;
    for(loop=0; loop<n; loop++){
        if(loop==0) sequencia.push_back((a*x0+c)%m);
        else sequencia.push_back((sequencia[loop-1]*a+c)%m);
    }

    for(loop=0; loop<n; loop++){
        if(busca_binaria(sequencia, 0, n-1, sequencia[loop])!=-1) count++;
    }
    
    cout << count << endl;

    return 0;
}