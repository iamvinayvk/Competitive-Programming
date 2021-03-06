/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/22/2020 1:46:31 AM
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

double dfs(ll pos,ll curr,ll t,string s)
{
	if(s[pos]=='\0')
		return curr==t;
	if(s[pos]=='+')
		return dfs(pos+1,curr+1,t,s);
	if(s[pos]=='-')
		return dfs(pos+1,curr-1,t,s);
	return 0.5*(dfs(pos+1,curr-1,t,s)+dfs(pos+1,curr+1,t,s));
}

int main(){
	
		fast
		string s1,s2;
		cin>>s1>>s2;
		ll pos1=0,pos2=0,un=0;
		for(int i=0;i<s1.size();i++)
		{
			if(s1[i]=='+')
				pos1++;
			if(s1[i]=='-')
				pos1--;
			if(s2[i]=='?')
				un++;
			if(s2[i]=='+')
				pos2++;
			if(s2[i]=='-')
				pos2--;

		}
		printf("%.10lf",dfs(0,0,pos1,s2));
		


	return 0;
}



