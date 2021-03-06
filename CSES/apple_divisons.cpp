/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 2/18/2021 2:38:17 PM
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

ll ans(ll i,ll part_sum,ll sum,vll a_w)
{
	if(i==0)
		return abs((sum-part_sum)-part_sum);
	return min(ans(i-1,part_sum+a_w[i-1],sum,a_w),ans(i-1,part_sum,sum,a_w));
}


int main(){
	
		fast
		ll n;
		cin>>n;
		vll a_w(n);
		ll sum=0;
		ll part_sum=0;
		for(ll i=0;i<n;i++)
		{
			cin>>a_w[i];
			sum+=a_w[i];
		}
		cout<<min(ans(n-1,part_sum+a_w[n-1],sum,a_w),ans(n-1,part_sum,sum,a_w));


	return 0;
}



