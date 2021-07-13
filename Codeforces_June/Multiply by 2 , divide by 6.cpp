#include<iostream>
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
using namespace std;
int count = 0;
bool solve(int n){
    count ++;
    if(n==1) return 0;
    if(n==0 || n<0){
        count = -1;
        return -1;
    }
 
    if(n%6 == 0){
        return solve(n/6);
    }else{
        return solve(n*2);
    }
   
}
int main(){
    // freopen("input.txt", "r", stdin);
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        count = 0;
        int n;
        cin>>n;
        solve(n);
        if(count>0){
            count -= 1;
        }
        cout<<count<<endl;
    }
 
    return 0;
}
