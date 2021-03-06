/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 3/1/2021 1:20:13 AM
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

ll reverse(ll n)
{
	ll rev=0;
	while(n>0)
	{
		rev=rev*10+(n%10);
		n/=10;
	}
	return rev;
}

int main(){
	
		fast
		w(t)
		{
			ll n,k;
			cin>>n>>k;
			n=reverse(n);
			k=reverse(k);
			n=n+k;
			cout<<reverse(n)<<"\n";
		}


	return 0;
}



