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
    vector<pair<ls, int>>p;
    ls s;
    ll n, num;
    cin>>n;
    for (ll i = 0; i < n; i++)
    {
        cin>>s>>num;
        p.pb(make_pair(s, num));
    }
    cout<<endl;
    for(auto &x: p){
        cout<<x.first<<" "<<x.second<<endl;
    }
    
    cout<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}