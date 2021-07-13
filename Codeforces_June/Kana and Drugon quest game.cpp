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
    ll t;
    cin>>t;
     ll x, n, m;
    for (ll i = 1; i <= t; i++)
    {
        cin>>x>>n>>m;
        while(x>0 && n && x/2+10<x){
            n--;
            x=x/2+10;
        }
        if(x<=m*10)
        yes
        else 
        no
        x= 0;
    }
    
    cout<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}