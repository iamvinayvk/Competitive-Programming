
#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		ll n,x,m;
		cin>>n>>x>>m;
		ll sum=x;
		for(ll i=2;i<=n;i++)
		{
			if(x*x==m)
			{
				break;
			}
			else{
				x=(x%mod)*(x%mod);
				sum=(sum%mod)+(x%mod);
			}
		}
		cout<<x;


	return 0;
}



