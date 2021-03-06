/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/19/2020 6:51:45 PM
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
			ll n,s,k;
			cin>>n>>s>>k;
			// vll vis;
			ll pos=0,ans=0,f=1;
			while(pos!=0||f)
			{
				
				if(pos==s)
					break;
					pos+=k;
					pos=pos%n;
					f=0;
				
					ans++;
			}
			cout<<ans<<"\n";

		}


	return 0;
}



