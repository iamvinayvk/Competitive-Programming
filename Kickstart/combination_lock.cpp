/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 10/18/2020 7:43:03 PM
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
		int t;
		cin>>t;
		int x=1;
		while(x<=t)
		{
			
			ll w,n;
			cin>>w>>n;
			vll a(w);
			for(int i=0;i<w;i++)
				cin>>a[i];
			sort(all(a));
			// ll med=a[w/2];
			ll ans=0;
			for(int i=1;i<=n;i++)
			{
				ll maxo=0;
				for(int j=0;j<w;j++)
				{
				ll back=abs(n-i);
				ll front=abs(i-a[j]);
				ll diff=back<front?back:front;
				maxo+=diff;
				// cout<<"i: "<<i<<" diff: "<<diff<<"\n";


				}
				ans=max(maxo,ans);
			}
			cout<<"Case #"<<x<<": "<<ans<<"\n";
			x++;


		}


	return 0;
}



