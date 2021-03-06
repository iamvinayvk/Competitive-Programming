/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/22/2020 9:33:34 PM
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
		ll n,m,k;
		cin>>n>>m>>k;
		ll ans=0;
		for(ll i=0;i<n;i++)
		{
			ll sum=0,q;
			for(ll j=0;j<=k;j++)
			{
			ll input;
			cin>>input;
			if(j!=k)
				sum+=input;
			else
				q=input;
			
			}
			if((sum>=m)&&(q<=10))
				ans++;
		}
		cout<<ans;


	return 0;
}



