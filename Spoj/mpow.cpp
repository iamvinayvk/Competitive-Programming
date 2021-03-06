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

long long a[100][100],I[100][100];
void mul(ll a[][100],ll b[][100],int m)
{
	long long res[100][100];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			res[i][j]=0;
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			for(int k=0;k<m;k++)
			{
				res[i][j]=((res[i][j]%mod)+(((a[i][k]%mod)*(b[k][j]%mod))%mod)%mod);
				res[i][j]=res[i][j]%mod;

			}
			// cout<<res[i][j]<<" ";
		}
		// cout<<"\n";
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
		{
			a[i][j]=res[i][j];
		}
	}
}

int main(){
	
		fast
		w(t)
		{
			ll m,n;
			cin>>m>>n;
			for(int i=0;i<m;i++)
			{
				for(int j=0;j<m;j++)
				{
					cin>>a[i][j];
				}
			}
			for(int i=0;i<m;i++)
			{
				for(int j=0;j<m;j++)
				{
					if(i==j) I[i][j]=1;
					else 	 I[i][j]=0;
				}
			}
			while(n>0)
			{
				if(n%2==0)
				{
					mul(a,a,m);
					 n/=2;
				}
				else
				{
					mul(I,a,m);
					 n--;
				}
			}
			for(int i=0;i<m;i++)
			{
				for(int j=0;j<m;j++)
				{

					cout<<I[i][j]<<" ";
				}
				cout<<"\n";
			}


		}


	return 0;
}



