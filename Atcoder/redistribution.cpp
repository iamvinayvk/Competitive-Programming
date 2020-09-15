#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		ll s;
		cin>>s;
		ll k=s;
		ll m=0;
		for(ll i=1;i<=s;i++)
		{
			if(k>=3)
			{
			ll j=pow(2,i-1);
			j=j%mod;
			
			
			m+=(j%mod);
			m=m%mod;
			k-=3;
			cout<<"m: "<<m<<" k:"<<k<<" j: "<<j<<"\n";
		}
		else {
			break;
		}
		}
		cout<<m%mod;

	return 0;
}



