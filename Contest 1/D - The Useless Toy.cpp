#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    char inicial, fim;
    int rotacoes, auxi, auxf, n;
    bool cw=0, ccw=0;

    cin >> inicial >> fim;
    cin >> rotacoes;
    switch(inicial){
        case 'v':
            auxi=0;
            break;
        case '>':
            auxi=3;
            break;
        case '^':
            auxi=2;
            break;
        case '<':
            auxi=1;
            break;
    }

    switch(fim){
        case 'v':
            auxf=0;
            break;
        case '>':
            auxf=3;
            break;
        case '^':
            auxf=2;
            break;
        case '<':
            auxf=1;
            break;
    }
    
    if((auxi+rotacoes)%4==auxf) cw=1;
    if(((auxi-rotacoes)%4+4)%4==auxf) ccw=1;

    if((cw==1 && ccw==1) || (cw==0 && ccw==0)) cout << "undefined";
    else if(cw==1 && ccw==0) cout << "cw";
    else if(cw==0 && ccw==1) cout << "ccw";
    cout << endl;

    return 0;
}