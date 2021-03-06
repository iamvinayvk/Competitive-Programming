/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/24/2020 12:59:27 AM
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
			vector<int> a(n);
			for(int i=0;i<n;i++)
				cin>>a[i];
			int left_0=0,right_0=0,mid_0=0;
			for(int i=0;i<n;i++)
			{
				if(a[i]==1)
					break;
				left_0++;
			}
				for(int i=n-1;i>=0;i--)
			{
				if(a[i]==1)
					break;
				right_0++;
			}
				for(int i=0;i<n;i++)
			{
				if(a[i]==0)
					mid_0++;
			}

			cout<<((mid_0-left_0)-right_0)<<"\n";

		}


	return 0;
}



