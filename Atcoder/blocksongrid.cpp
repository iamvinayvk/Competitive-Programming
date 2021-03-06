/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/19/2020 5:36:06 PM
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
		ll h,w;
		cin>>h>>w;
		int mat[h][w];
		int mino=INT_MAX;
		for(ll i=0;i<h;i++)
		{
			for(ll j=0;j<w;j++)
			{
				cin>>mat[i][j];
				mino=min(mino,mat[i][j]);
			}
		}
		ll diff=0;
		for(ll i=0;i<h;i++)
		{
			for(ll j=0;j<w;j++)
				diff+=(mat[i][j]-mino);
		}
		cout<<diff;


	return 0;
}



