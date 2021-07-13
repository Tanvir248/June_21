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
#define r(x) reverse(x.begin(), x.end())
#define s(x) sort(x.begin(), x.end())
#define vi vector<int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
#define SIZE 100
void solve(){   
    ll n, num;
    cin>>n;
    vi add, ans;
    vi ::iterator it;
    set<ll>s;
    for (ll i = 0; i < n; i++)
    {
        cin>>num;
        add.pb(num);
    }
    for (ll i = n-1; i >=0 ; i--)
    {
        if(s.find(add[i])== s.end()){
            ans.pb(add[i]), s.insert(add[i]);
        }
    }
    cout<<ans.sz<<endl;
    reverse(ans.B, ans.E);

    for(it = ans.B; it<ans.E; it++){
            cout<<*it<<" ";
    }
    
    cout<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}