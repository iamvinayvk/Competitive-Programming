/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/19/2020 8:09:29 PM
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
			ll x,y;
			cin>>x>>y;
			if(x==0&&y==0)
				cout<<0<<"\n";
			else if(x==y)
				cout<<x*2<<"\n";
			else
			{

			ll ans=abs(x-y);
			ans*=2;
			ans-=1;
			ans+=min(x,y)*2;
			cout<<ans<<"\n";
		}
		}


	return 0;
}



