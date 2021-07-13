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
    ll n, num =0;
    cin>>n;
    vi add, ans;
    vi ::iterator it;
    bool b[n] ={false};
    for (ll i = 0; i < n; i++)
    {  
        cin>>num;
        add.pb(num);
    }
    for (ll i = 0; i < n; i++)
    {
        if(!b[add[i]]){
            ans.pb(add[i]);
            b[add[i]]= true;
        }
    }
    cout<<ans.sz<<endl;
    if(ans.sz<=2){
    for (it = ans.begin(); it<ans.end(); it++)
    {
        cout<<*it<<" ";
    }
    }else{
    for (it = ans.begin()+1; it<ans.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<ans[0];
    }
    
    cout<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}