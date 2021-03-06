/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/30/2020 1:49:23 PM
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
			ll n,m;
			cin>>n>>m;
			vll vis(n+1);
			for(ll i=0;i<m;i++)
			{
				ll input;
				cin>>input;
				vis[input]=1;
			}
			ll p=1;
			vll ans1,ans2;
			for(ll i=1;i<=n;i++)
			{
				if(vis[i]==0)
				{
					if(p%2)
					{
						ans1.push_back(i);
					}
					else
					{
						ans2.push_back(i);
					}
					vis[i]=1;
					p++;
				}
			}
			for(ll i=0;i<ans1.size();i++)
				cout<<ans1[i]<<" ";
			cout<<"\n";
			for(ll i=0;i<ans2.size();i++)
			{
				cout<<ans2[i]<<" ";
			}
			cout<<"\n";
		}


	return 0;
}



