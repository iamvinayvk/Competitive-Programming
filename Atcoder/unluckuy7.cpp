/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/19/2020 5:47:12 PM
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

bool decimal(ll i)
{
	while(i>0)
	{
		if(i%10==7)
			return true;
		i/=10;
	}
	return false;
}
string change(ll i)
{
	string ans;
	while(i>0)
	{
		
		ans+=to_string(i%8);
		i/=8;
	}
	// reverse(all(ans));
	return ans;
}
bool octal(ll i)
{
	int n=stoi(change(i));
	// cout<<n<<" "<<i<<"\n";
	while(n>0)
	{
		if(n%10==7)
			return true;
		n/=10;
	}
	return false;
}


int main(){
	
		fast
		ll n;
		cin>>n;
		ll ans=0;
		for(ll i=1;i<=n;i++)
		{
			bool dec=decimal(i);
			bool oc=octal(i);
			if(dec&&oc)
				ans++;
			else if(dec)
				ans++;
			else if(oc)
				ans++;
		}
		// cout<<to_string(0)<<"--\n";
		cout<<n-ans<<"\n";

	return 0;
}



