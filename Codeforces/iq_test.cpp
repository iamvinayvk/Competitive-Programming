/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/2/2020 3:10:19 PM
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
		ll n;
		cin>>n;
		vll a(n);
		for(int i=0;i<n;i++)
			cin>>a[i];
		int ans=0,f=0;
		for(int i=1;i<n-1;i++)
		{
			int p1=a[i-1],p2=a[i+1],c=a[i];
			p1=p1%2;
			p2=p2%2;
			c=c%2;
			if(p1==p2)
			{
				if(c!=p1)
				{
					f=1;
					ans=i+1;
					break;
				}
			}
		}
		if(f)
		cout<<ans;
	else
	{
		int p1=a[0],c=a[1],c1=a[n-1],p2=a[n-2];
		p1=p1%2;
		c=c%2;
		c1=c1%2;
		p2=p2%2;
		if(p1!=c)
			cout<<"1";
		else if(p2!=c1)
			cout<<n;

	}


	return 0;
}



