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
     cin>>n>>num;
     
	
	if (n > 3) puts("YES");
	else if (n == 1) puts(num == 1 ? "YES" : "NO");
	else puts(num <= 3 ? "YES" : "NO");

}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);cout.tie(0);
      
      ll t;
      cin>>t;
      while(t--)
       solve();  
     
     return 0;
}