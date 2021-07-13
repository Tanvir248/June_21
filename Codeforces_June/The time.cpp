#include<bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using lln = long long;
using ls = string;
using ch = char;
//using lld = long double;
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
int main()
{
    lln m, x, y, n;

      lln cnt=0,ans=0;

      scanf("%lld:%lld ",&x,&y);
      cin>>n;


      m=x*60+y+n;

      lln h1=m/60;
      lln m1=m%60;
      h1%=24;

    printf("%.02lld:%.02lld\n", h1,m1);



return 0;
}