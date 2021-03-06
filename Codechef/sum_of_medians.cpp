/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/17/2020 8:21:23 PM
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
			ll n,k;
			cin>>n>>k;
			vector<ll> a(n*k);
			for(int i=0;i<n*k;i++)
			{
				cin>>a[i];
			}
			ll medo=ceil((float)n/2);
			ll sumo=0;
			ll d=n-medo;
			d++;
			reverse(a.begin(),a.end());
			int count=0;
			for(int i=d-1;i<(n*k);i+=d)
			{
				// cout<<a[i]<<" ";
				sumo+=a[i];
				count++;
				if(count==k)
					break;
			}
			cout<<sumo<<"\n";
		}


	return 0;
}



