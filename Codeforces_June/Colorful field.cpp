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
   freopen("input.txt", "r", stdin);
   int i, j, k;
    int n, m, t;
    ll x, y;

    cin>>n>>m;
    cin>>k>>t;

    set<ll> s;
    vector<ll> vec;

    while(k--)
    {
       cin>>x>>y;

        x--;
        vec.pb(x * m + y);
    }

    sort(vec.begin(), vec.end());

    ll ans;
    for (ll i = 0; i < t; i++) {
       cin>>x>>y;

        x--;
        ans = x * m + y;

        k = 0, j = 0;
        for(int e : vec)
        {
            if(e < ans)
                k++;
            else if(e == ans)
                j = 1;
            else
                break;
        }

        ans -= k;
        ans %= 3;

        if(j)
            cout<<"Waste"<<endl;
        else if(ans == 1)
            cout<<"Carrots"<<endl;
        else if(ans == 2)
            cout<<"Kiwis"<<endl;
        else
            cout<<"Grapes"<<endl;
            }

    }
    
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);cout.tie(0);
       solve();  
     
     return 0;
}