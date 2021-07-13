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
    int add[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>add[i];
    }
    sort(add, add+n);
    ll flag = false;
    for (ll i = 1; i < n-1; i++)
    {
        if(add[i-1]+add[i]>add[i+1]){
        yes
        return;
        }
    }
   no
}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);cout.tie(0);

       solve();  
     
     return 0;
}