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

int a[105][105],b[105][105],c[105][105];

int main(){
	
		fast
		ll n,m,k;
		cin>>n>>m>>k;
		
		for(int i=0;i<n;i++)
		{
			string s;
			cin>>s;
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j]>>b[i][j]>>c[i][j];
			}
		}
		int ans=0;
		vector<pair<int,int>> best;
		for(int i=0;i<n;i++)
		{
			
			for(int j=0;j<n;j++)
			{
				best.clear();
				for(int x=0;x<m;x++)
				{
					if(a[i][x]<b[j][x])
					{
						best.push_back(make_pair((b[j][x]-a[i][x]),c[i][x]));
					}
				}
					sort(all(best));
					reverse(all(best));
				
			int a=0,size=k;
			for(int x=0;x<best.size()&&size>0;x++)
		{
			if(best[x].S<size)
			{

			a+=(best[x].F*best[x].S);
			size-=best[x].S;

			}

			else
			{
				a+=best[x].F*size;
				size=0;
			}


		}
		if(ans<a)
			ans=a;
			
			}
			
		}
		
		cout<<ans;

	return 0;
}



