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
   ll n, ans=0;
   
   cin>>n;
   int add[n+1];
	for (ll i = 1; i <= n; i++)
	{
	    cin>>add[i];	
	}
	
	for (ll i = 1; i <= n; i++)
	{
		ll cnt1 = 0, cnt2 =0;
		for (ll j = i; j < n; j++){
			if(add[j]<add[j+1]){
				break;
			}else{
				cnt1++;
			}
		}
		for (ll k = i; k > 1; k--){
			if(add[k]<add[k-1]){
				break;
			}else{
				cnt2++;
			}
		}		
		ans = max(ans, cnt1+cnt2+1);
	}
	
	cout<<ans<<endl;
	
}
int main(){
     
       solve();  
     
     return 0;
}