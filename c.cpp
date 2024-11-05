#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
bool isprime(ll n){
    if(n==1) return false;
    for(int i=2;i*i<=n;i++) if(n%i==0) return false;
    return true;
}   

int main() { 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);   
    int t;cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        for(ll i=m;i<=n;i++){
            if(isprime(i)) cout<<i<<endl;
        }
        cout<<endl;

    }
}
