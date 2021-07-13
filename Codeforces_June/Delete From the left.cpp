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
    ls s1, s2;
    cin>>s1>>s2;
    ll x = s1.sz;
    ll y = s2.sz;
    ll store =0;
    ll l = 0;
    if(x>y){
        l = y;
        store = x-y;
    }else{    store = y-x;
    l= x;}
    ll cnt =0;
    //cout<<l;
    reverse(s1.B, s1.E);
    reverse(s2.B, s2.E);
    for (ll i = 0; i<l; i++)
    {
        //cout<<s1[i]<<" ";
        if(s1[i]== s2[i]){
            cnt++;
        }else{
            break;
        }
    }
    cout<<(x-cnt)+(y-cnt);
    cout<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}