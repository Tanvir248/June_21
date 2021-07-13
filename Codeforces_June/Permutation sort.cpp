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
    vi add;
        cin>>n;
        for (ll i = 0; i < n; i++)
        {
            cin>>num;
            add.pb(num-1);
        }
        bool flag = true;
        for (ll i = 0; i < add.sz; i++)
        {
            if(add[i] != i){
                flag = false;
            }
        }
        if(flag== true){
            cout<<"0"<<endl;
            return;
        }else if(add[0]==0 || add[n-1]== n-1){
            cout<<1;
        }
        else if(add[0]== n-1 && add[n-1] ==0 ){
            cout<<3;
        } else 
        cout<<2;
        cout<<endl;
        add.clear();

 
}
int main(){
     ll t;
     cin>>t;
     while (t--)
     {
       solve();
     }
       
     
     return 0;
}