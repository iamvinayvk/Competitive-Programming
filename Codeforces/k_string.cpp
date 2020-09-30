#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007
#define all(x) x.begin(),x.end()
#define F first
#define S second
#define vi vector<int> 
#define vll vector<long long>
#define FOR(start,end,increment) for(ll i=start;i<end;i+=increment)





int main(){
	
		fast
		int k;
		cin>>k;
		string s;
		cin>>s;
		map<char,int> m;
		for(int i=0;i<s.length();i++)
		{
			m[s[i]]++;
		}
		int flag=0;
		string ans="";
		for(auto x:m)
		{
			if((x.S%k)!=0)
			{
				flag=1;
				break;
			}
			
			for(int i=0;i<x.S/k;i++)
			ans+=x.F;
			
			
		}
		if(flag)
		{
			cout<<"-1";
		}
		else
		{
			for(int i=0;i<k;i++)
				cout<<ans;
		}


	return 0;
}



