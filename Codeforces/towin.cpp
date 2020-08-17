#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		w(t)
		{
			ll n;
			cin>>n;
			int flag=0;
			ll first=0,second=0;
			vector<ll> a(n);
			for(ll i=0;i<n;i++)
			{
				cin>>a[i];
			}
			sort(a.begin(),a.end());
			reverse(a.begin(),a.end());
			ll j=0;
			for(ll i=0;i<n;i++)
			{	
				if(i==0)
				{
					first+=a[j];

				}
				else if(i==1||i==2)
				{
					second+=a[j];
				}
				else if(i%2==1)
				{
					first+=a[j];
					
				}
				else{
					second+=a[j];

				}
				j++;

			}
			if(first>second)
				cout<<"first\n";
			else if(second>first)
				cout<<"second\n";
			else
				cout<<"draw\n";
		}


	return 0;
}



