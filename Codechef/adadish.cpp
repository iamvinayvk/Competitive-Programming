/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/9/2020 12:52:07 AM
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
			vll c(n);
			for(int i=0;i<n;i++)
				cin>>c[i];
			sort(all(c));
			// reverse(all(c));
			if(n==1)
			cout<<c[0]<<"\n";
			else if(n==2)
				cout<<max(c[0],c[1])<<"\n";
			else if(n==3)
			{
				
				cout<<max(c[0]+c[1],c[2])<<"\n";
			}
			else
			{
				ll ans1=0,ans2=0;
				ans1=max(c[0]+c[3],c[2]+c[1]);
				ans2=max(c[0]+c[1]+c[2],c[3]);
				cout<<min(ans1,ans2)<<"\n";
			}
		}


	return 0;
}



