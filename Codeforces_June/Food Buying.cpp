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
	for (ll i = 0; i < t; i++) {
		ll s;
		cin >> s;
		int ans = 0;
		int power = 1000 * 1000 * 1000;
		while (s > 0) {
			while (s < power) power /= 10;
			ans += power;
			s -= power - power / 10;
		}
		cout << ans << endl;
	}

}
int main(){
     
       solve();  
     
     return 0;
}