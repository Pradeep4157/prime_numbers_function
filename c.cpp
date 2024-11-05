#include <bits/stdc++.h>
#define ll int64_t
using namespace std;
vector<ll>primenumbers(int n){
    vector<ll>res;
    vector<bool>isprime(n+1,true);
    isprime[0]=false;
    isprime[1]=false;
    for(int i=2;i*i<=n;i++){
        if(isprime[i]){
            for(int j=i*i;j<=n;j+=i){
                isprime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(isprime[i]) res.push_back(i);
    }
    return res;
}
bool isprime(ll n){
    for(int i=2;i<n;i++) if(n%i==0) return false;
    return true;
}   

int main() { 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);   
    int t;cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        for(ll i=m;i<n;i++){
            if(isprime(i)) cout<<i<<endl;
        }
        cout<<endl;

    }
}
