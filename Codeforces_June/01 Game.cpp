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
    ll n;
    cin>>n;
    ls s;
    for (ll i = 0; i < n; i++)
    {
      cin>>s;
      ll cnt0 =0;
      ll cnt1 = 0;
      for (ll i = 0; i < s.sz; i++)
      {
        if(s[i]=='0'){
          cnt0++;
        }else
        cnt1++;
      }
      ll x = min(cnt0, cnt1);
      if(x%2==0){
        cout<<"NET";
      }else{
        cout<<"DA";
      }
      s.clear();
      cout<<endl;
    }
    
}
int main(){
     
       solve();  
     
     return 0;
}