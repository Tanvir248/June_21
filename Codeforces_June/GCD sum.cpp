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
long long int solve(long long int num) {
long long int tmp = num, digitsum = 0;

    while (tmp > 0) {
        digitsum += tmp % 10;
        tmp /= 10;
    }

    long long int gcd = __gcd(num, digitsum);
    return gcd;
}
int main(){

  //freopen("input.txt", "r", stdin);
     ios::sync_with_stdio(0);
	  cin.tie(0);cout.tie(0);
      
       int t;
cin >> t;

    while (t--) {
        long long int n;
        cin >> n;
        if (solve(n) != 1) {
            cout << n << endl;
        } else if (solve(n + 1) != 1) {
            cout << n + 1 << endl;
        } else if (solve(n + 2) != 1) {
            cout << n + 2 << endl;
        }
    }
     
     return 0;
}