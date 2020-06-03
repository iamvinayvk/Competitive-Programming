#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)





int main(){
	
		fast
		w(t)
		{
			long long int n,k;
			cin>>n>>k;
			if(n%2==0)
			{
				cout<<n+2*k<<"\n";
				continue;
			}
			int d=0;
			for(ll i=3;i<=n;i+=2)
			{
				if(n%i==0)
				{
					d=i;
					break;
				}
			}
			cout<<n+2*(k-1)+d<<"\n";
		}


	return 0;
}



