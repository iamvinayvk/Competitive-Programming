/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/11/2020 8:55:24 PM
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
#define REP(i,n) for(ll i=0;i<n;i++)
#define FOR(i,a,b) for(ll i=a;i<b;i++)

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
			char a[n+1][m+1];
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=m;j++)
					cin>>a[i][j];
			}
			int sprouts=0;
			for(int i=1;i<=n;i++)
			{
				for(int j=1;j<=m;j++)
				{
					if(a[i][j]=='*')
					{
					for(int k=1;k<=n;k++)
					{
						int r=i+k-1;
						int c1=j-k+1;
						int c2=j+k-1;
						int flag=1;
						// cout<<r<<" "<<c1<<" "<<" "<<c2<<" "<<i<<" "<<j<<"\n";
						for(int z=c1;z<=c2;z++)
						{
							if(a[r][z]!='*')
							{
								flag=0;
								break;
							}
						}
						if(flag==0||r<=0||c1<=0||c2<=0||c2>m||c1>m||r>n)
							break;
						else
							sprouts++;

					}
					}
				}
			}
			cout<<sprouts<<"\n";

		}


	return 0;
}



