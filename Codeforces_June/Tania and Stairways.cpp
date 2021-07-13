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
   ll n, num;
     cin>>n;
    vi add, ans;
    for (ll i = 0; i < n; i++)
    {
        cin>>num;
        add.pb(num);
    }
    for (ll i = 0; i < add.sz; i++)
    {
        if(add[i]==1){
         ans.pb(add[i-1]);   
        }
    }
    cout<<ans.sz<<endl;
    for (ll i = 1; i < ans.sz; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<add[n-1]<<endl;
}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);cout.tie(0);
       solve();  
     
     return 0;
}