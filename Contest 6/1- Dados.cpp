#include <bits/stdc++.h>
using namespace std;

long long calcula(int soma){
    int loop, loop2;
    long long dp[soma+1];
    dp[0]=1;

    if(soma==0) return 1;

    for(loop=1; loop<=soma; loop++){
        dp[loop]=0;

        for(loop2=1; loop2<=6; loop2++){
            if(loop-loop2>=0){
                dp[loop]=(dp[loop]+dp[loop-loop2])%1000000007;
            }
        }
    }
 
    return dp[soma];
}
 

int main(){
    ios_base::sync_with_stdio(false);
    int soma;

    cin >> soma;
    cout << calcula(soma) << endl;
    
    return 0;
}