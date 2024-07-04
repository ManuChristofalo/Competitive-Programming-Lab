#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    int loop, n, multiplicador=1, count=0;
    string aux;

    cin >> n;
    while(count<n){
        for(loop=0; loop<multiplicador; loop++) count++;
        if(count>=n){aux="Sheldon"; break;}
        for(loop=0; loop<multiplicador; loop++) count++;
        if(count>=n){aux="Leonard"; break;}
        for(loop=0; loop<multiplicador; loop++) count++;
        if(count>=n){aux="Penny"; break;}
        for(loop=0; loop<multiplicador; loop++) count++;
        if(count>=n){aux="Rajesh"; break;}
        for(loop=0; loop<multiplicador; loop++) count++;
        if(count>=n){aux="Howard"; break;}
        multiplicador*=2;
    }
    cout << aux << endl;
    
    return 0;
}