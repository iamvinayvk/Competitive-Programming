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
			int n,m;
			cin>>n>>m;
			int a[n+5][m+5];
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<m;j++)
				{
					cin>>a[i][j];
				}
			}
			ll changes=0;
			for(int i=0;i<n/2;i++)
			{
				for(int j=0;j<m/2;j++)
				{
					vi med;
					med.push_back(a[i][j]);
					med.push_back(a[i][m-j-1]);
					med.push_back(a[n-i-1][j]);
					med.push_back(a[n-i-1][m-j-1]);
					sort(all(med));
					ll median=(med[1]+med[2])/2;
					ll x1=abs(a[i][j]-median);
					ll x2=abs(a[i][m-j-1]-median);
					ll x3=abs(a[n-i-1][j]-median);
					ll x4=abs(a[n-i-1][m-j-1]-median);

					changes+=(x1+x2+x3+x4);
				}
			}
			if(n%2)
			{
				for(int j=0;j<m/2;j++)
				{
					int maxi=((a[(n/2)][j]+a[(n/2)][m-j-1])/2);
					// if(maxi!=a[(n/2)+1][j])
						changes+=abs(maxi-a[(n/2)][j]);
					changes+=abs(maxi-a[(n/2)][m-j-1]);
					// cout<<"maxi: "<<maxi<<"\n";
				}
			}
			if(m%2)
			{
				for(int i=0;i<n/2;i++)
				{
					int maxi=((a[i][(m/2)]+a[n-i-1][(m/2)])/2);
					// if(maxi!=a[i][(m/2)+1])
						changes+=abs(maxi-a[i][(m/2)]);
					changes+=abs(maxi-a[n-i-1][(m/2)]);
				}
			
			}
			cout<<changes<<"\n";
		}


	return 0;
}



