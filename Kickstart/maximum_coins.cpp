/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 10/18/2020 6:08:30 PM
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
		int t;
		cin>>t;
		int x=1;
		while(x<=t)
		{
			ll n;
			cin>>n;
			ll a[n+5][n+5];
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					cin>>a[i][j];
				}
			}
			ll maxo=0,score=0;
			int u=0,v=0,stand=n;
			for(int j=0;j<n;j++)
			{
				u=0;
				v=j;
				stand=n-j;
				while(stand>0)
				{
					score+=(a[u][v]);
					u++;
					v++;
					stand--;
				}
				maxo=max(maxo,score);
				score=0;
			}
			for(int i=0;i<n;i++)
			{
				u=i;
				v=0;
				stand=n-i;
				while(stand>0)
				{
					score+=(a[u][v]);
					u++;
					v++;
					stand--;
				}
				maxo=max(maxo,score);
				score=0;
			}


			cout<<"Case #"<<x<<": "<<maxo<<"\n";
			x++;


		}


	return 0;
}



