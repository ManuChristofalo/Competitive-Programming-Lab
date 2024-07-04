#include <bits/stdc++.h>
using namespace std;

bool igual(char a, char b){
    if(a=='(' && b==')') return 1;
    if(a=='[' && b==']') return 1;
    if(a=='{' && b=='}') return 1;
    return 0;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    stack<char> pilha;
    int num, loop;
    char a;
    string str;
    bool flag=1;

    cin >> num;
    getline(cin, str);
    getline(cin, str);
    for(loop=0; loop<num; loop++){
        a=str[loop];
        if(a=='(' || a=='{' || a=='[') pilha.push(a);

        else if(a==')' || a=='}' || a==']'){
            if(pilha.empty()==1){
                flag=0;
                break;
            }

            else{
                if(igual(pilha.top(), a)==1) pilha.pop();
                else{
                    flag=0;
                    break;
                }
            }
        }
    }

        if(flag==1) cout << "ok so far";
        else cout << a << " " << loop;
        cout << endl;
    
    
    return 0;
}