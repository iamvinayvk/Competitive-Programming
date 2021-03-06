/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 3/4/2021 11:51:07 AM
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
ll n,m,x;


int main(){
	
		fast
		cin>>n>>m>>x;
		char mat[n+5][m+5];
		map<char,ll> ma;
		for(ll i=1;i<=n;i++)
		{
			for(ll j=1;j<=m;j++)
			{
				cin>>mat[i][j];
			}
		}
		ll q;
		cin>>q;
		string s;
		cin>>s;
		ll ans=0,f=0;
		for(ll i=1;i<=n;i++)
		{
			for(ll j=1;j<=m;j++)
			{
				if(mat[i][j]=='S')
				{
					f=1;
					for(ll k=1;k<=n;k++)
					{
						for(ll l=1;l<=m;l++)
						{
							double b=(l-j);
							double p=(k-i);
							b*=b;
							p*=p;
							if((p+b)<=(x*x)&&mat[k][l]!='S')
							{
								ma[(char)(mat[k][l]-32)]++;
								// cout<<(char)(mat[k][l])<<"\n";
							}
						}
					}
				}
				else
				{
					ma[mat[i][j]]++;
					// cout<<"sam;::"<<mat[i][j]<<"\n";
				}
			}
		}
		for(ll i=0;i<q;i++)
		{
			// cout<<"s[i]:"<<s[i]<<" siii: "<<s[i]+32
			if(ma[s[i]])
			{
				continue;
			}
			else if(ma[(char)(s[i]+32)]&&ma[s[i]]==0&&f)
			{
				// cout<<"under: "<<s[i]<<"\n";
				ans++;
			}
			else
			{
				// cout<<s[i]<<"\n";
				cout<<"-1";
				return 0;
			}
		}
		cout<<ans;
		
		
		


	return 0;
}



