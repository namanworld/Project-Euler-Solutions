#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int n;
    cin>>n;
    int maxPrime = -1;
    while(n%2==0) {
        maxPrime = 2;
        n>>=1;
    }
    for(int i=3; i<=sqrt(n); i+=2){
        while(n%i==0){
            maxPrime = i;
            n = n/i;
        }
    }

    if(n>2){
        maxPrime = n;
    }

    cout<<maxPrime;

    return 0;
}

ANSWER: 6857
