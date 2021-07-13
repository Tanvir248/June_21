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
#define r(x) reverse(x.begin(), x.end())
#define s(x) sort(x.begin(), x.end())
#define vi vector<int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
#define SIZE 100
void solve(){   
   vector< pair<string, int>> p;
    p.pb(make_pair("Tanvir", 248));
    p.pb(make_pair("Tasir", 256));
    p.pb(make_pair("Abesh", 235));
    p.pb(make_pair("Smrity", 120));
    vector< pair<string, int>> ::iterator it;
    // for ( it = p.begin(); it < p.E; it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    for(auto &x: p){
        cout<<x.first<<" "<<x.second<<endl;
    }
    cout<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}