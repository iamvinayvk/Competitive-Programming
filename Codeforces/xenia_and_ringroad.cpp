#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		ll n,m;
		cin>>n>>m;
				ll initial=1;
		
		ll time=0;
		for(ll i=0;i<m;i++)
		{
			int a;
			cin>>a;
		
			 if(initial>a)
			{
				time+=(n-initial);
				time+=(a);
				initial=a;
			}
			else
			{
				time+=(a-initial);
				initial=a;
			}
		}
		cout<<time<<"\n";

	return 0;
}



