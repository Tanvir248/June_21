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
 //freopen("input.txt", "r", stdin);
   string arr[3]={};
	for(int i=0;i<3;i++){
		
	cin>>arr[i];
	}
	
	map<char,int> ma;
	ma['A']=0;
	ma['B']=0;
	ma['C']=0;
	for(int i=0;i<3;i++)
	 if(arr[i][1]=='>'){
	 	++ma[arr[i][0]];
	 	--ma[arr[i][2]];
	 }else {
	 	--ma[arr[i][0]];
	 		 	++ma[arr[i][2]];

	 } 
	  if(ma['A']>ma['B']&&ma['B']>ma['C']){
	  	cout<<"CBA";
	  }
	  else if (ma['A']>ma['C']&&ma['C']>ma['B']){
	  	cout<<"BCA";
	  }
	  else if(ma['B']>ma['C']&&ma['C']>ma['A']){
	  	cout<<"ACB";
	  }
	  else if(ma['B']>ma['A']&&ma['A']>ma['C'])
	  cout<<"CAB";
	  else if(ma['C']>ma['B']&&ma['B']>ma['A'])\
	  cout<<"ABC";
	  else if(ma['C']>ma['A']&&ma['A']>ma['B'])
	  cout<<"BAC";
	  else{
	  	cout<<"Impossible";
	  	
	  }
      cout<<endl;
}
int main(){
     
       solve();  
     
     return 0;
}