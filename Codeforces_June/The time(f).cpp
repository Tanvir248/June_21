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
	ls s;
	cin>>s;
	vi add1, add2;
	ll n;
	cin>>n;
	ls s1, s2;
	for (ll i = 0; i < 2; i++)
	{
		s1.pb(s[i]);
	}
	for (ll i = 3; i < 5; i++)
	{
		s2.pb(s[i]);
	}
   for (ll i = 0; i < 2; i++)
   {
	   add1.pb(s1[i]-'0');
		  add2.pb(s2[i]-'0');
   }
   ld ans =(double) n/(double)60;
   ll  ans1 = n%60;
// 	for (ll i = 0; i < 2; i++)
//    {
// 	   cout<<add2[i]<<" ";
// 	//	   add2.pb(s2[i]);
//    }
if(ans>=1){
	 ans = add1[1]+(int)ans;
	 cout<<ans<<endl;
	if(add1[0]==0 && ans<9){
		cout<<0<<ans;
	}else if(add1[0]==0 && ans>9){
		cout<<ans;
	}else if(add1[0]==1){
		if(add1[0]==1 && ans<9){
		cout<<1<<ans;
	}else if(add1[0]==1 && ans>9){
		cout<<2<<ans-10;
		}
	}else if(add1[0]==2){
		if(add1[0]==2 && ans<4){
		cout<<2<<ans;
	}else if(add1[0]==1 && ans>3){
		cout<<0<<ans-4;
		}
	}
	}

    cout<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}