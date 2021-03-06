/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/14/2020 11:30:27 PM
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
			ll ans=-1;
			ll sum=0;
			vll a(n);
			for(ll i=0;i<n;i++)
				cin>>a[i];
			ll flag=0;
			for(ll i=0;i<n;i++)
			{
				ll input=a[i];
				// cout<<a[i]<<"\n";
				
				if(input>k)
				{
					flag=1;
					break;
				}
				else if(input+sum>k)
				{
					sum=input;
					ans++;
				}
				else
				{
				sum+=input;

			
				}
				if(ans==0||ans==-1)
					ans=1;
			}
			if(flag)
			cout<<"-1"<<"\n";
		else
		{
			if(ans==-1)
				cout<<"1\n";
			else
				cout<<ans<<"\n";
		}
		}


	return 0;
}



