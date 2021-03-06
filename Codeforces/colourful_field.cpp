/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 2/27/2021 3:06:37 PM2/27/2021 3:06:38 PM
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
		int n,m,k,t;
		cin>>n>>m>>k>>t;
		// vector<vector<int>> mat(n+5,vector<int>(m+5,0));
		// for(int i=1;i<=n;i++)
		// {
		// 	for(int j=1;j<=m;j++)
		// 		mat[i][j]=0;
		// }
		vector<pair<int,int>> storeJ;
		while(k--)
		{
			int a,b;
			cin>>a>>b;
			storeJ.push_back(make_pair(a,b));
		}
		// int s=1;
		// for(int i=1;i<=n;i++)
		// {
		// 	for(int j=1;j<=m;j++)
		// 	{
		// 		if(mat[i][j]!=-1)
		// 		{
		// 			mat[i][j]=s;
		// 			s++;
		// 		}
		// 		if(s==4)
		// 			s=1;
		// 		// cout<<mat[i][j]<<" ";
		// 	}
		// 	// cout<<"\n";
		
		while(t--)
		{
			int a,b;
			cin>>a>>b;
			int j=0,f=0;
			int i=(a-1)*m+(b-1);
			for(int i=0;i<storeJ.size();i++)
			{
				if(storeJ[i].F<a||(storeJ[i].F==a&&storeJ[i].S<b))
					j++;
				if(a==storeJ[i].F&&b==storeJ[i].S)
				{
				cout<<"Waste\n";
				f=1;
				break;
				}
			}
			if(f==1)
				continue;
			int sol=(i-j)%3;
			if(sol==0)
				cout<<"Carrots\n";
			else if(sol==1)
				cout<<"Kiwis\n";
			else if(sol==2)
				cout<<"Grapes\n";

		}


	return 0;
}



