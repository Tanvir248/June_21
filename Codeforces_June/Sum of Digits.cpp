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
	ls s;
	cin>>s;
	ll sum =11;
	if(s.length()<2){
		cout<<0<<endl;
		return;
	}
		ll  cnt =0;
		while(sum >= 10){
			sum =0;
			for (ll i = 0; i < s.sz; i++)
			{
				sum+= (s[i]-'0');
			}
			s = to_string(sum);
		cnt++;
		}
		cout<<cnt<<endl;
	
}
int main(){
     
       solve();  
     
     return 0;
}