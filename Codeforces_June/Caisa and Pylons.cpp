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
	ll a, b=0, c=0, ans =0;
	cin>>n;
	for (ll i = 1; i <= n; i++)
	{
		cin>>a;
		c += b-a;
		if(c<0){
			ans+= abs(c);
		//cout<<abs(c)<<endl;
			c = 0;
		}	
		b = a;
	}
	cout<<ans<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}