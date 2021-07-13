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
#define SIZE 102
 char s[SIZE][SIZE];
void solve(){   
   freopen("input.txt", "r", stdin);
	
	ll i, j, k,n, m;
	char ch1;

	cin >> n >> m >> ch1;

	for (i = 0; i <= SIZE; i++)
	{
		for (j = 0; j <= SIZE; j++)
			s[i][j] = '.';
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
			cin >> s[i][j];
	}

	set<char> st;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= m; j++)
		{
			if (s[i][j] == ch1)
			{
				st.insert(s[i + 1][j]);
				st.insert(s[i - 1][j]);
				st.insert(s[i][j + 1]);
				st.insert(s[i][j - 1]);
			}
		}
	}

	st.erase('.');
	st.erase(ch1);

	cout << st.sz << endl;
}
int main(){
     
       solve();  
     
     return 0;
}