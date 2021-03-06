/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/9/2020 1:43:06 AM
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

void storeprime(vll &prime,ll n)
{
	ll c=0,divider=2;
	while(c<=n)
	{
		ll prima=1;
		for(int i=2;i*i<=divider;i++)
		{
			if(divider%i==0)
			{
				prima=0;
				break;
			}
		}
		if(prima)
		{
			prime.push_back(divider);
			c++;
		}
		divider++;

	}
	// for(int i=0;i<n;i++)
	// 	cout<<prime[i]<<" ";
}

int main(){
	
		fast
		vll prime;
		storeprime(prime,1e5);
		w(t)
		{
			ll n;
			cin>>n;
			vll b(n);
			for(int i=0;i<n;i++)
				cin>>b[i];
			for(int i=0;i<n;i++)
			{
				cout<<prime[b[i]-1]<<" ";
			}
			cout<<"\n";
		}


	return 0;
}



