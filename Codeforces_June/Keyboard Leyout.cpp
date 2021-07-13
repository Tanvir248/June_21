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
        string s1,s2;

    map<char,char> ans;

    cin>>s1>>s2;

    for(ll i=0;i<s1.length();i++)
        ans[s1[i]]=s2[i];

    cin>>s1;

    char ch;
    for(ll i=0;i<s1.length();i++)
    {
        if(isdigit(s1[i]))
        {
            cout<<s1[i];
            continue;
        }

        if(ans[s1[i]])
            cout<<ans[s1[i]];
            
        else
        {
            if(isupper(s1[i]))
            {
                ch=ans[s1[i]+32]-32;
                cout<<(ch);
            }

            else
            {
                ch=ans[s1[i]-32]+32;
                cout<<ch;
            }
        }
    }

    

    cout<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}