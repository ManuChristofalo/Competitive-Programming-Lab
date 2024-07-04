#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    int testes, loop, pos, loop2;
    char a;
    string entrada;
    vector<char> str, aux;

    cin >> testes;
    for(loop=0; loop<testes; loop++){
        getline(cin, entrada);
        getline(cin, entrada);

        for(loop2=0; loop2<entrada.size(); loop2++){
            a=entrada[loop2];
            cout << a;
            if(a!='[' && a!=']' && a!='<'){
                str.push_back(a);
                pos++;
                cout << a;
            }

            else if(a=='<' && pos>0){
                str.pop_back();
                pos--;
            }

            else if(a=='['){
                aux.insert(aux.end(), str.begin(), str.end());
                str.clear();
            }

            //else if(a=="]")
        }

        for(loop2=0; loop2<aux.size(); loop2++){
            cout << aux[loop];
        }


    }   
    
    return 0;
}