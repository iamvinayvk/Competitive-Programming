/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/10/2020 7:41:39 PM
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

bool prime(ll n)
{
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}

int main(){
	
		fast
		int n;
		cin>>n;
		vll a(n);
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
		double sq=sqrt(a[i]);
		if((sq-floor(sq)==0)&&prime(ceil(sqrt(a[i])))&&a[i]!=1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}


	return 0;
}



