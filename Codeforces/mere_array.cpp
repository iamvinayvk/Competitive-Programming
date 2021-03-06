/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/29/2020 12:44:27 AM
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
			vll a(n),b(n);
			ll m=INT_MAX;
			for(ll i=0;i<n;i++)
			{
				cin>>a[i];
				b[i]=a[i];
				m=min(a[i],m);
			}
			sort(all(b));
			int f=0;
			for(ll i=0;i<n;i++)
			{
				if(a[i]!=b[i]&&a[i]%m!=0)
				{
					f=1;
					break;
				}

			}
			if(f)
				cout<<"NO\n";
			else
				cout<<"YES\n";
		}


	return 0;
}



