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
    ll n, t;
    ls s, ans;
    cin>>n;
    for (ll i = 0; i < n; i++)
    {
      cin>>t;
      cin>>s;
      for (ll i = 0; i < s.sz; i++)
      {
        if(s[i] != s[i+1]){
          ans.pb(s[i]);
        }else
        continue; 
      }
      //cout<<ans;
      sort(ans.B, ans.E);
      //cout<<ans;
      ll flag = false;
      for (ll i = 0; i <ans.sz; i++)
      {
        if(ans[i]== ans[i+1]){
          flag = true;
        }
      }
      if(flag){
        no
      }else 
      yes
      
      ans.clear();
    s.clear();
    }
    
}
int main(){
     
       solve();  
     
     return 0;
}