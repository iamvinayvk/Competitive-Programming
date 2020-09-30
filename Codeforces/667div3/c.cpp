#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007

ll divisor(ll x, ll y, ll n)
{
	for(int i=1;i<=(y-x);i++)
	{
		if(((y-x)%i==0)&&((x+(n-1)*i)>=y))
			return i;
	}


}



int main(){
	
		fast
		w(t)
		{
			ll n,x,y;
			cin>>n>>x>>y;
			ll d=divisor(x,y,n);
			// cout<<d<<"= divisor\n";
			vector<ll> a(n);
			ll y1=y;
			a[0]=y1;
			for(int i=1;i<n;i++)
			{
				if((y-d)>=1)
				{
				a[i]=(y-d);
				y=y-d;
			}
				else
				{
					a[i]=(y1+d);
					y1=y1+d;
				}
				cout<<a[i]<<" ";
			}
			cout<<a[0]<<" ";
			cout<<"\n";

		}


	return 0;
}



