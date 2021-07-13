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
	cin>>n;
	ll ans =0, cnt0 = 0, cnt2 =0, cnt3=0, cost =0;
	for (ll i = 0; i < n; i++)
	{
		cin>>num;
		if(num == 0){
			cnt0++;
		}else if(num>0){
			cnt2+=num-1;
		}else if(num<0){
			num = abs(num);	
			cnt3+= num-1;
			ans++;
		}
	}
	if(ans%2 ==0 || cnt0){
		cost = cnt0+cnt2+cnt3;
	}else{
		cost = cnt2+cnt3+2;
	}
	cout<<cost;
    cout<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}