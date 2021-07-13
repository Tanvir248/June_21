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
bool comp(pair<int,int> p1,pair<int ,int>p2){
		return p1.second>p2.second;
	}
void solve(){   
   //freopen("input.txt", "r", stdin);
    ll n, m,i;
    pair<ll, ll >pr[101];
     cin>>n>>m;
    
        for (i = 0; i < m; i++)
        {
            cin>>pr[i].first>>pr[i].second;
        }
        sort(pr,pr+sizeof pr/sizeof *pr, comp);
        //reverse(pr, pr+m);
        // for ( i = 0; i < m; i++)
        // {
        //     cout<<pr[i].first<<" "<<pr[i].second<<endl;
        // }
        ll ans =0;
        for ( i = 0; i < m && n>0; i++)
        {
            if(pr[i].first<=n){
                ans+=(pr[i].first*pr[i].second);
                n -= pr[i].first;
            }else{
                ans+= n*(pr[i].second);
                n -= n;
            }
            
        }
        cout<<ans<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}