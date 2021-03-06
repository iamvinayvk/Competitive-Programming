/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/26/2020 9:30:55 PM
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
		w(t)
		{
			ll n,m;
			cin>>n>>m;
			ll mat[n+5][m+5];
			for(ll i=0;i<n;i++)
			{
				for(ll j=0;j<m;j++)
				{
					cin>>mat[i][j];
				}
			}
			ll q;
			cin>>q;
			
			while(q--)
			{
				ll x,y,v;
				cin>>x>>y>>v;
				mat[x-1][y-1]=v;
			vector<pair<pair<ll,ll>,ll>> wrong;
			int f=0;
			for(int i=0;i<n;i++)
			{
				int k=0;
				ll ans=mat[i][k];
				ll move=i;
				while(k<n-i)
				{
					if(ans!=mat[move++][k++])
					{
						f=1;
						// cout<<mat[move-1][k-1]<<" "<<ans<<" \n";
						wrong.push_back(make_pair(make_pair(i+1,k),mat[i][k-1]));
						break;
					}
				}
			}
			for(int j=1;j<m;j++)
			{
				int k=0;
				ll ans=mat[k][j];
				ll move=j;
				while(k<n-j)
				{
					if(ans!=mat[k++][move++])
					{
						f=1;
						// cout<<mat[k-1][move-1]<<" "<<ans<<" \n";
						wrong.push_back(make_pair(make_pair(k,j+1),mat[k-1][j]));
						break;
					}
				}
			}
				
				if(f==0)
					cout<<"Yes\n";
				else
					cout<<"No\n";

			}









		
		}


	return 0;
}



