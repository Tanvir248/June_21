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
   lln n, cnt = 0, a;
    cin>>n;
    for(ll i=0; i<n; i++){
        cin>>a;
        if(i == 0){
            cout<<a<<" ";
            cnt = a;
        }
        else{
            cout<<a+cnt<<" ";
            cnt = max(cnt,(a+cnt));
        }
    }
    cout<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}
/*vi add, ans;
	lln n, num;
	cin>>n;
	for (ll i = 0; i < n; i++){
		cin>>num;
		add.pb(num);
	}
	ll cnt=0, sum =0;
	for (ll i = 0; i < add.sz; i++){
		sum+= add[i];
	//	cout<<sum<<" ";
		ans.pb(sum);
	}
	for (ll i = 0; i < ans.sz; i++)
	{
		if(ans[i]>ans[i+1]){
			ans[i+2] = ans[i]+ans[i+2];
		}
		cout<<ans[i]<<" ";
	}
	
	
	
    cout<<endl;*/