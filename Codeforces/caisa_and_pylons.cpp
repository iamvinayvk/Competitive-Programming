/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 2/24/2021 9:00:17 PM
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
		ll n;
		cin>>n;
		vll a(n);
		for(ll i=0;i<n;i++)
			cin>>a[i];
		ll cost=0,power=0;
		for(ll i=0;i<n-1;i++)
		{
			if((a[i]-a[i+1])<0)
			{
				if(power<a[i+1]-a[i])
				{
				cost+=(abs(a[i]-a[i+1])-power);
				power=0;
				}
				else
					power-=abs(a[i]-a[i+1]);
				// cout<<a[i]<<" "<<a[i+1]<<" "<<power<<"\n";
			}
			else{
				power+=(a[i]-a[i+1]);
			}
		}
		cout<<cost+a[0]<<"\n";


	return 0;
}



