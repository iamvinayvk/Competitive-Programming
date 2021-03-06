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
			ll n_sum=0;
			for(int i=1;i*i<=n;i++)
			{
				if(n%i==0)
				{
					if(i*i==n||i==1)
					{
						n_sum+=i;
					}
					else 
						n_sum+=(i+n/i);
				}
			}
			// cout<<"n_sum: "<<n_sum<<"\n";
			if(n_sum==n&&n!=1)
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}


	return 0;
}



