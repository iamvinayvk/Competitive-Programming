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
			ll n,k,l;
			cin>>n>>k>>l;
			if(k*l<n||((n!=1)&&(k==1)))
				cout<<-1<<"\n";
			else
			{
				ll index_player=1;
				for(ll i=1;i<=n;i++)
				{
					cout<<index_player<<" ";
					if(index_player==k)
						index_player=1;
					else
						index_player++;

				}
				cout<<"\n";
			}
		}


	return 0;
}



