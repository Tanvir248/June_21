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
    ull n,m, num;
    cin>>n>>m;
    vi add;
    for (ll i = 0; i < n; i++)
    {
        cin>>num;
        add.pb(num);
    }
   if(m>1){
       m = 2+m%2;
   }while(m--){
       ll mx = -1000000000;
       for(int i = 0; i < n; i++) {
				mx = max(mx, add[i]);
			}
            for(int i = 0; i < n; i++) {
				add[i] = mx - add[i];
			}
   }for(ll i = 0; i < n; i++) {
			cout << add[i] << (i + 1 == n ? '\n' : ' ');
		}
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