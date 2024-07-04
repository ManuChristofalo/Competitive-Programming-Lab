#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int num=1, loop, vagao, aux;
    bool flag=1
    stack<int> trens;

    while(cin >> num){
        while(flag==1){
            while(trens.empty()==0) trens.pop();
            
            aux=0;
            for(loop=0; loop<num; loop++){
                cin >> vagao;
                if(vagao==0) break;

                while(aux<num && aux!=vagao){
                    if(trens.size()>0 && trens.top()==vagao) break;
                    trens.push(++aux);
                }

                if(trens.top()==vagao) trens.pop();
            }

            if(vagao==0) flag=0;
            
            if(trens.size()==0) cout << "Yes" << endl;
            else cout << "No" << endl;
        }

        cout << endl;
    }


    return 0;
}