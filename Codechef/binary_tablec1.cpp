/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/17/2020 9:20:25 PM
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
			vector<string> s(n);
			for(int i=0;i<n;i++)
				cin>>s[i];
			ll k=0;
			vector<vector<int>> ans;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<m;j++)
				{
					if(j+1<m&&i+1<n)
					{
						if(s[i][j]=='0')
						{
							ans.push_back({i,j+1,i+1,j,i+1,j+1});
						}
						

					}
				}
			}
		}


	return 0;
}



