/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 2/28/2021 7:33:22 PM
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
			ll n,u,v;
			cin>>n>>u>>v;
			vll a(n);
			for(ll i=0;i<n;i++)
			{
				cin>>a[i];
			}
			ll f=0,maxo=0;

			
			for(ll i=0;i<n-1;i++)
			{
				
				
						if(abs(a[i]-a[i+1])>1)
						{
							f=1;
							break;
						}
						else
						{
							maxo=max(maxo,abs(a[i]-a[i+1]));
						}
					
				
			}
			if(f)
				cout<<"0\n";
			else if(maxo==1)
			{
				cout<<min(u,v)<<"\n";
			}
			else if(maxo==0)
				cout<<min(u+v,2*v)<<"\n";
		
		
		}


	return 0;
}



