#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		string s,t;
		cin>>s>>t;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]!=t[i])
			{
				cout<<"No";
				return 0;
			}
		}
		cout<<"Yes";


	return 0;
}



