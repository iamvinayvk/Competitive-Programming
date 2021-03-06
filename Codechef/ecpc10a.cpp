/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/3/2020 8:03:41 PM
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
			for(ll i=0;i<n;i++)
			{
				cin>>a[i];
			}
			ll pair=0;
			for(ll i=0;i<n;i++)
			{
				for(ll j=i+1;j<n;j++)
				{
					if((a[i]^a[j])>max(a[i],a[j]))
						pair++;
				}
			}
			cout<<pair<<"\n";
		}


	return 0;
}



