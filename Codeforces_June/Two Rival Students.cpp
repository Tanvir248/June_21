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
   ll t;

    cin>>t;
    while(t--)

    {

       ll n,x,a,b;

        cin>>n>>x>>a>>b;
        int ans1,ans2;

        ans1=x+abs(a-b);

        ans2=min(ans1,n-1);

        cout<<ans2<<endl;
    }

}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);cout.tie(0);
       solve();  
     
     return 0;
}