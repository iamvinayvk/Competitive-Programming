/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/27/2020 11:15:03 PM
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

// bool dfs(vector<string> m,int n,int i,int j)
// {
// 	cout<<"m[i: "<<m[i][j]<<"\n";
// 	if(i+1<n&&j+1<n&&m[i][j+1]=='0'&&m[i+1][j]=='0'&&m[i][j]=='1')
// 	{
// 		cout<<"mainaaya\n";
// 		return false;
// 	}
// 	cout<<"mainaaya\n";
// 	if(i==n&&j==n)
// 		return true;
// 	m[i][j]='0';
// 	if(i+1<n)
// 	dfs(m,n,i+1,j);
// 	if(j+1<n)
// 	dfs(m,n,i,j+1);
// 	return true;
// }


int main(){
	
		fast
		w(t)
		{
			ll n;
			cin>>n;
			vector<string> m(n);
			pair<int,int> first;
			for(int i=0;i<n;i++)
				cin>>m[i];
			int f=1;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<n;j++)
				{
					if(m[i][j]=='1')
					{
						if(i+1<n&&j+1<n&&m[i+1][j]=='0'&&m[i][j+1]=='0')
						{
							f=0;
							break;
						}

					}
				}
			}
			if(f)
			{
				cout<<"YES\n";
				
			}
			else
			{
				cout<<"NO\n";
			}

		}


	return 0;
}



