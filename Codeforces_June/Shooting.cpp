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
    ll n, num;
    cin>>n;
    vector<pair<ll, ll>> pr;

    for (ll i = 0; i < n; i++)
    {
        cin>>num;
        pr.pb(make_pair(num, i+1));
    }
    sort(pr.rbegin(), pr.rend());
//     for (ll i = 0; i < n; i++)
//    {
//        cout<<pr[i].first<<" "<<pr[i].second<<endl;
   //}
    ll sum =0;
   for (ll i = 0; i < n; i++)
   {
       sum+=(pr[i].first*i)+1;
   }
   cout<<sum<<endl;
    for (auto &x : pr)
    {
        cout<<x.second<<" ";
    }
    
   
    
    cout<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}