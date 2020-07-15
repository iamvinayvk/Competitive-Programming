#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		string s;
		cin>>s;
		vector<char> v;
		for(int i=0;i<s.size();i+=2)
		{
			v.push_back(s[i]);
		}
		sort(v.begin(),v.end());
		for(int i=0;i<s.size();i+=2)
		{
			s[i]=v[(i+1)/2];
		}
		cout<<s;


	return 0;
}



