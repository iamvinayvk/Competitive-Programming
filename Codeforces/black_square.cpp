#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		vector<int> a(4);
		for(int i=0;i<4;i++)
		cin>>a[i];
		string s;
		cin>>s;
		int calories=0;
		for(int i=0;i<s.size();i++)
		{
		// {	cout<<s[i]-'0'<<"\n";
			calories+=a[(s[i]-'0')-1];
		}
		cout<<calories;


	return 0;
}



