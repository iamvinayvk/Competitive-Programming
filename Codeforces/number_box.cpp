/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/15/2020 8:51:10 PM
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
			int mat[n][m];
			int neg=0,z=0,mino=INT_MAX;
			int sum=0;
			for(int i=0;i<n;i++)
			{
				for(int j=0;j<m;j++)
				{
					cin>>mat[i][j];
					if(mat[i][j]<0)
						neg++;
					if(mat[i][j]==0)
						z=1;
					mat[i][j]=abs(mat[i][j]);
					if(mino>mat[i][j])
						mino=mat[i][j];
					sum+=mat[i][j];


				}
			}
			if((z)||(neg%2==0))
				cout<<sum<<"\n";
			else
				cout<<sum-(2*mino)<<"\n";

		}


	return 0;
}



