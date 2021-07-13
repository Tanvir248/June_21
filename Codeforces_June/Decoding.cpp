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
    ll n;
    cin>>n;
    ls s, ans;
    cin>>s;
    if(n==2 || n==1){
        cout<<s<<endl;
    }else{
       if(n%2 != 0){
         cout<<s[s.sz-2];
         reverse(s.B, s.end()-2);
            for (ll i = 0; i < s.sz-2; i++)
            {
                if(i%2!= 0){
                    cout<<s[i];
                }
            }
            reverse(s.B, s.end()-2);
            for (ll i = 0; i < s.sz-2; i++)
            {
                if(i%2 == 0){
                    cout<<s[i];
                }
            }
            cout<<s[s.sz-1]<<endl;
            }else{
                cout<<s[s.sz-2];
                reverse(s.B, s.end()-2);
                 for (ll i = 0; i < s.sz-2; i++){
                if(i%2!= 0){
                    cout<<s[i];
                }
            }reverse(s.B, s.end()-2);

            for (ll i = 0; i < s.sz-2; i++)
            {
                if(i%2 != 0){
                    cout<<s[i];
                }
            }
                cout<<s[s.sz-1]<<endl;
           }
    }
}
int main(){
     
       solve();  
     
     return 0;
}