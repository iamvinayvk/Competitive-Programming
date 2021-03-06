/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/2/2020 2:43:50 PM
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
		string s1,s2;
		cin>>s1>>s2;
		map<char,ll> m1,m2;
		if(s1.size()!=s2.size())
		{
			cout<<"NO";
		}
		else
		{
			int changes=0,f=0;
			for(int i=0;i<s1.size();i++)
			{
				if(s1[i]!=s2[i])
					changes++;
				m1[s1[i]]++;
				m2[s2[i]]++;
			}
			for(auto x:m2)
			{
				if(x.S!=m1[x.F])
				{
					f=1;
					break;
				}
			}
			if(f==1||(changes!=2))
				cout<<"NO";
			else
				cout<<"YES";
		}
		
	
	



	return 0;
}



