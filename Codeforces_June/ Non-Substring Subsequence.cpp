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
   ll t;
   cin>>t;
   for (ll i = 0; i < t; i++)
   {
       
   ll a, b; ls c;
   cin>>a>>b>>c;
   while (b--)
   {
       ll x, y;
       cin>>x>>y;  --x; --y;
       bool flag = true;
    for (ll i = 0; i < x and flag; i++)
    {
        if(c[i]==c[x]) flag = false;
    }
    for (ll i = y+1; i < a and flag; i++)
    {
        if(c[i]==c[y]) flag = false;
    }
    if(flag)
    no
    else
    yes
   }
   }
}
int main(){
     
       solve();  
     
     return 0;
}