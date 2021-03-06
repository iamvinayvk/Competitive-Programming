/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 10/30/2020 1:22:57 AM
  *
  */

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

ll gcd(ll a, ll b)
{
	if(a==0)
		return b;
	return gcd(b%a,a);
}



int main(){
	
		fast
		string s;
		cin>>s;
		unordered_map<char,int> m;
		for(ll i=0;i<s.size();i++)
		{
			m[s[i]]++;
		}
		ll flag=0;
		ll odd=0;
		for(auto x: m)
		{
			if(x.second%2)
				odd++;
		}
		if(odd<=1)
		{
			cout<<"First";
		}
		else if(odd%2==0)
		{
			cout<<"Second";
		}
		else if(odd%2)
			cout<<"First";
		
		
		


	return 0;
}



