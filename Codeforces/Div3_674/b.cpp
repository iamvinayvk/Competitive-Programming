#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		w(t)
		{
			ll n,m;
			cin>>n>>m;
			int flag=0;
			for(int i=0;i<n;i++)
			{
				ll a,b,c,d;
				cin>>a>>b>>c>>d;
				if(b==c)
				{
					flag=1;
				}
			}
			if(flag&&(m%2==0))
				cout<<"YES\n";
			else
				cout<<"NO\n";
		}


	return 0;
}



