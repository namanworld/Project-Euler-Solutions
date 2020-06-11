#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int n;
    cin>>n;
    int ans = 0;
    for(int i=1; i<n; i++){
        if(i%3==0 || i%5==0) ans+=i;
    }
    cout<<ans;
    return 0;
}

ANSWER: 233168
