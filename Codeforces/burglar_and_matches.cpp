/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 2/21/2021 8:19:53 PM
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
		ll n,m;
		cin>>n>>m;
		vector<pair<ll,ll>> containers(m);
		for(int i=0;i<m;i++)
		{
			cin>>containers[i].second>>containers[i].first;
		}
		sort(all(containers));
		reverse(all(containers));
		ll ans=0;
		for(int i=0;i<m;i++)
		{
			if(n>=containers[i].second)
			{
				n-=containers[i].second;
				ans+=(containers[i].second*containers[i].first);

			}
			else
			{
				ans+=containers[i].first*n;
				n=0;
			}
			if(n==0)
				break;
		}
		cout<<ans;





	return 0;
}



