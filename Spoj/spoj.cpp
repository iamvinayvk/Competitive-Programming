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
			ll n;
			cin>>n;
			vector<ll> a(n);
			for(int i=0;i<n;i++)
			{
				cin>>a[i];

			}
			int c=next_permutation(a.begin(),a.end());
			if(c)
			{
				for(int i=0;i<n;i++)
				{
					cout<<a[i];
				}
				cout<<"\n";
			}
			else
			{
				cout<<"-1\n";
			}
		}


	return 0;
}



