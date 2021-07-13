#include<bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using lln = long long int;
using ls = string;
using ch = char;
using lld = long double;
using lf = float;
using ll= int;
using ld = double;
#define pb  push_back
#define eb emplace_back
#define B begin()
#define E end()
#define sz size()
#define vi vector<int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
#define SIZE 100
void solve(){   
  //freopen("input.txt", "r", stdin);
    ll n, m, num;
    int add[1004];
    cin>>n>>m;
    for (ll i = 1; i <= n; i++)
    {
        cin>>add[i];
        }
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
        if(add[i]){
            ll dis = i-m;
            ll j = m -dis;
            if(j<1 || j>n || add[i]==add[j])
                ans++;
            
        }
    cout<<ans<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}