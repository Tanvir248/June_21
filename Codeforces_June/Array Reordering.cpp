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
vi odd, eve, add;
    ll n, num;
    ll t;
    cin>>t;
    while (t--){
    cin>>n;
    for (ll i = 0; i < n; i++)
    {
        cin>>num;
        if(num%2 ==0){
            eve.pb(num);
        }else{
            odd.pb(num);
        }
    }
    for (ll i = 0; i < eve.sz; i++){
        add.pb(eve[i]);
    }
    for (ll i = 0; i < odd.sz; i++){
        add.pb(odd[i]);
    }
    ll cnt =0, ans =0;
    for (ll i = 0; i < add.sz; i++)
    {
        for (ll j = i+1; j < add.sz; j++)
        {
            ans = __gcd(add[i], add[j]*2);
               if(ans>1) cnt++;     
        }
        
    }
    cout<<cnt<<endl;
    add.clear();
    odd.clear();
    eve.clear();
    }
    
}
int main(){
     
       solve();  
     
     return 0;
}