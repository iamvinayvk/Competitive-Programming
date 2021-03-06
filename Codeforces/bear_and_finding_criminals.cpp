/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 2/21/2021 1:38:44 AM
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
		ll n,a;
		cin>>n>>a;
		vll arr(n);
		for(ll i=0;i<n;i++)
			cin>>arr[i];
		ll s=a-1,e=a-1;
		ll ans=0;
		while(s>=0&&e<n)
		{
			if(arr[s]==1&&arr[e]==1)
			{
				if(s==e)
				ans+=1;
				else
					ans+=2;
			}
			// cout<<"s:"<<s<<" e:"<<e<<"\n";
			s--;
			e++;
		}
		while(s>=0)
		{
			if(arr[s]==1)
				ans++;
			s--;
			
		}
		while(e<n)
		{
			if(arr[e]==1)
				ans++;
			
			e++;
		}
		cout<<ans<<"\n";



	return 0;
}



