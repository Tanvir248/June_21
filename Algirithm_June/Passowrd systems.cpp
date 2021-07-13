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
#define vi vector<int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
#define SIZE 100
void solve(){  
     ls s;
     cin>>s;
     vector<char> sl, bl, num ={'0', '1','2', '3', '4', '5', '6', '7', '8', '9'};
     //cout<<num[8]<<endl;
     vector<char>add;
    
     for(char i= 'A'; i<='Z'; i++ ){
          bl.pb(i);
     }

     for(char i= 'a'; i<='z'; i++ ){
          sl.pb(i);
     }
     add.insert(add.end(), sl.B, sl.E);
     add.insert(add.end(), bl.B, bl.E);
     add.insert(add.E, num.B, num.E);
     // for(ll i =0; i<add.sz; i++){
     //      cout<<add[i]<<" ";
     // }
          
    if(s.sz<5){
         cout<<"Too weak";
    }else{
         ll cnt =0, cnt2=0, cntnum = 0;
     for(ll i=0; i<s.sz; i++){
          for(ll j=0; j<sl.sz; j++){
               if(s[i]== sl[j]){
                    cnt++;
               }
          }
     }
     for(ll i=0; i<s.sz; i++){
          for(ll j=0; j<bl.sz; j++){
               if(s[i]== bl[j]){
                    cnt2++;
               }
          }
     }
     for(ll i=0; i<s.sz; i++){
          for(ll j=0; j<num.sz; j++){
               if(s[i] == num[j]){
                    cntnum++;
               }
          }
     }
     bool flag = false;
     for(ll i=0; i<s.sz; i++){
          for(ll j=0; j<add.sz; j++){
               if(s[i] == add[j]){
                    flag = true;
                    break;
               }
          }
     }
     //cout<<cntnum;
     //cout<<cnt<<" "<<cnt2<<" "<<s.sz;
     ll x = cnt+cnt2+cntnum;
     if((cnt2 >=1) && (cnt>=1) && (cntnum >=1) && (flag == true)){
          //cout<<cnt+cnt2<<" "<<s.sz;
          cout<<"Correct"<<endl;
          return;
     }else{
          cout<<"Too weak";
     }
    }
    cout<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}