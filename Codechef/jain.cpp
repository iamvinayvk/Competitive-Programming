/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/8/2020 10:24:54 PM
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
		w(t)
		{
			ll n;
			cin>>n;
			int f[32];
			for(int i=0;i<32;i++)
			{
				f[i]=0;
			}
			for(int i=0;i<n;i++)
			{
				string s;
				cin>>s;
				int mask=0;
				for(auto ch:s)
				{
					if(ch=='a') 
						mask=mask|(1<<0);
					if(ch=='e')
						mask|=(1<<1);
					if(ch=='i')
						mask|=(1<<2);
					if(ch=='o')
						mask|=(1<<3);
					if(ch=='u')
						mask|=(1<<4);
				}
				f[mask]++;
			}
			ll ans=0;
			for(int i=1;i<32;i++)
			{
				for(int j=i+1;j<32;j++)
				{
					if((i|j)==31)
						ans+=(f[i]*f[j]);
				}
			}
			ans+=(f[31]*(f[31]-1))/2;
			cout<<ans<<"\n";
		}


	return 0;
}



