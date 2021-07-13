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
 set<ls>st;
    ll n;
    cin>>n;
    ls s, ans;
    cin>>s;
    int cnt = 0;
    string str;
    for(int i=0;i<n-1;i++){
        int ans = 1;
        for(int j=i+1;j<n-1;j++)
            if(s[j] == s[i] && s[j+1] == s[i+1])
                ans++;
        if(ans > cnt){
            cnt = ans;
            str.clear();
            str.push_back(s[i]);
            str.push_back(s[i+1]);
        }
    }
    cout << str << endl;
}
int main(){
     
       solve();  
     
     return 0;
}