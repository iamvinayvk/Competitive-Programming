/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 3/1/2021 1:06:06 AM
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
			vll a(n);
			if((n/2)%2==0)
			{
				ll sum=0;
				for(ll i=0;i<n/2;i++)
				{
					a[i]=(i+1)*2;
					sum+=a[i];
				}
				ll j=1;
				for(ll i=n/2;i<n;i++)
				{
					if(i==n-1)
					{
						a[i]=sum;
						continue;
					}
					a[i]=(j);
					j+=2;
					sum-=a[i];
				}
				cout<<"YES\n";
				for(ll i=0;i<n;i++)
					cout<<a[i]<<" ";
				cout<<"\n";
			}
			else
				cout<<"NO\n";
		}


	return 0;
}



