#include <bits/stdc++.h>
#define int long long
#define MOD 1000000007
using namespace std;

const int N = 1e5 + 5;

signed main()
{
    int fib[N];
    fib[0] = 1;
    fib[1] = 1;
    int ans = 0;
    for(int i=2; i<N; i++){
        fib[i] = ((fib[i-1])%MOD + (fib[i-2])%MOD)%MOD;
        if(fib[i]>4000000) break;
        if((fib[i]&1)==0) ans+=fib[i];

    }
    cout<<ans;
    return 0;
}


ANSWER : 4613732
