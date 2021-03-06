/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/19/2020 8:26:11 PM
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
			ll sum=0;
			for(ll i=0;i<n;i++)
			{

				cin>>a[i];
				
			}
			ll maxo=*max_element(all(a));
			for(int i=0;i<n;i++)
			{
				sum+=(maxo-a[i]);
			}
			cout<<abs(sum-maxo)<<"\n";

		}


	return 0;
}



