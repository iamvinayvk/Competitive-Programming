/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/8/2020 5:44:08 PM
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
		for(ll i=0;i<n;i++)
			cin>>a[i];
		ll count=0,ans=0,max_count=INT_MIN;
		for(ll i=2;i<=1000;i++)
		{
			for(ll j=0;j<n;j++)
			{
				if(a[j]%i==0)
					count++;
			}
			if(count>=max_count)
			{
				ans=i;
				max_count=count;
			}
			count=0;
		}
		cout<<ans;



	return 0;
}



