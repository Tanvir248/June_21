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
   ll n, num;
    cin>>n;
    
   while(n--){
        cin>>num;
        ll arr[num+2];
        for (ll i = 1; i <= num; i++)
        {
            arr[i] = i;
        }
          if(num%2 == 0){
              for (ll i = 1; i <=num; i+=2){
                  swap(arr[i], arr[i+1]);
             }
              
          }else{
              for (ll i = 1; i < num-3; i+=2){
                  swap(arr[i], arr[i+1]);
              }
              
          }
          ll a = arr[num];
          ll b = arr[num-1];
          ll c = arr[num-2];
          
           arr[num-2]= a;
           arr[num-1] = c;
            
           arr[num] = b;
           for (ll i = 1; i <= num; i++){
               cout<<arr[i]<<" ";
           }
           cout<<endl;
    }
    

}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);cout.tie(0);
       solve();  
     
     return 0;
}