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
    ll n,a = 0, g = 0, c = 0, t = 0;
	cin>>n;
	ls s, anss;
	cin>>s;
	ll cnt=0;
	
	
	if(n%4 !=0){
		cout<<"==="<<endl;
		return;
	}else{
		for(int j = 0; j < n; j++){
			if(s[j] == '?') continue;
			if(s[j] == 'A') a++;
			else if(s[j] == 'C') c++;
			else if(s[j] == 'G') g++;
			else if(s[j] == 'T') t++;
	}
	}
	ll v = n/4;
	if(c > v || a > v || g > v || t > v){
			cout<<"==="<<endl;
			return;
		}
	else{

	for(int j = 0; j < n; j++){
				if(s[j] == '?'){
					if(a < v){
						s[j] = 'A';
						a++;
					} else if(c < v){
						s[j] = 'C';
						c++;
					} else if(g < v){
						s[j] = 'G';
						g++;
					} else if(t < v){
						s[j] = 'T';
						t++;
					}
				}
			}
			cout<<s;
		
	}
    cout<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}