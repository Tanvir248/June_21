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
    ll t;
	cin >> t;
	while(t--){
		ll n, k, u;
		bool flag = true;
		cin >> n;
		for(int i = 1; i <= n; i++){
			cin >> k;
			if(i == 1){
				u = k % 2;
			}
			else if(u != k % 2){
				flag = false;
			}
		}
		if(flag){
			yes
		}
		else{
            no
		}
 
	}
}
int main(){
     
       solve();  
     
     return 0;
}
