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
    ll n, m, num, sum =0, st = -1, ans;
    cin>>n>>m;
    vi add;
    for(int i=0;i<n;i++)
    {
        cin>>num;
	add.pb(num);
        if(i<m){
		sum+=add[i];
		}
        else if(i>=m){
            if(sum<=st || st==-1){
			ans=i+1,st=sum;
			}
            sum=sum-add[i-m]+add[i];
        }
    }
    if(sum<=st || st==-1){
	ans=n+1;
	}
    cout<<ans-m<<endl;
    return;
}
int main(){
      ios::sync_with_stdio(0);
	  cin.tie(0);cout.tie(0);
       solve();  
     
     return 0;
}