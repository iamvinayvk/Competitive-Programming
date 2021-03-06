/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 1/12/2021 4:11:06 PM
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
		ll ans=0;
		vector<pair<ll,ll>> store(3);
		set<char> st;
		if(s.size()<100)
		{
				for(ll i=0;i<s.size();i++)
		{
			for(ll j=0;j<s.size();j++)
			{
				if(s[i]!=s[j])
				{
					ans=max(ans,abs(i-j));
				}
			}
		}
		}
		else
		{
		for(ll i=0;i<s.size();i++)
		{
			st.insert(s[i]);
			if(s[i]=='a')
			{
				if(store[0].F==0)
					store[0].F=i+1;
				else
					store[0].S=i+1;
			}
			if(s[i]=='b')
			{
				if(store[1].F==0)
					store[1].F=i+1;
				else
					store[1].S=i+1;
			}
			if(s[i]=='c')
			{
				if(store[2].F==0)
					store[2].F=i+1;
				else
					store[2].S=i+1;
			}
		}
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(i!=j&&(store[i].F!=0)&&(store[j].F!=0))
				{

				ans=max(ans,abs(store[i].F-store[j].S));
				ans=max(ans,abs(store[i].S-store[j].F));
				// cout<<i<<" "<<j<<" ";
				}
			}
		}
		}
		cout<<ans;


	return 0;
}



