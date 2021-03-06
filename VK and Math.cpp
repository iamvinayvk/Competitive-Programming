/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 2/11/2021 5:25:26 PM
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
		ll x,y,z;
		cin>>x>>y>>z;
		ll val=x+y+z;
		ll a=-1,b=-1,c=-1;
		for(ll i=0;i<=val;i++)
		{
			for(ll j=0;j<=val;j++)
			{
				for(ll k=0;k<=val;k++)
				{
					ll eq1=3*i+2*j+k;
					ll eq2=4*i+3*j+k;
					ll eq3=7*i+j+11*k;
					// cout<<i<<" "<<j<<" "<<k<<"\n";
					// cout<<eq1<<" "<<eq2<<" "<<eq3<<"\n";
					if((eq1==x)&&(eq2==y)&&(eq3==z))
					{
						a=i,b=j,c=k;
					}
				}
			}
		}
		if((a!=-1)&&(b!=-1)&&(c!=-1))
		{
			cout<<a<<" "<<b<<" "<<c<<"\n";
		}
		else
		{
			cout<<"No Solution\n";
		}
		


	return 0;
}



