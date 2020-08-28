#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		ll n,x;
		cin>>n>>x;
		ll total=x,distressed=0;
		for(ll i=0;i<n;i++)
		{
			char sign;
			ll value;
			cin>>sign>>value;
			if(sign=='+')
				total+=value;
			else
			{
				if(value>total)
					distressed++;
				else
					total-=value;
			}
		}
		cout<<total<<" "<<distressed;


	return 0;
}



