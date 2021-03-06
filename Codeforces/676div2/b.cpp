/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 10/18/2020 2:52:07 PM
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
			ll n;
			int inversions=0;
			vector<string> s(n);
			for(int i=0;i<n;i++)
			{
				cin>>s[i];
			}
			vector<pair<int,int>> ans;
			if(s[0][1]=='1')
			{
				inversions+=1;
				ans.push_back(make_pair(1,2));
			}
			if(s[1][0]=='1')
			{
				inversions+=1;
				ans.push_back(make_pair(2,1));
			}
			if(s[n-1][n-2]=='0')
			{
				inversions+=1;
				ans.push_back(make_pair(n,n-1));
			}
			if(s[n-2][n-1]=='0')
			{
				inversions+=1;
				ans.push_back(make_pair(n-1,n));
			}
			if(s[1][0]=='0'&&s[0][1]=='0'&&s[n-2][n-1]=='1'&&s[n-1][n-2]=='1')
				inversions=0;
			if(s[1][0]=='1'&&s[0][1]=='1'&&s[n-2][n-1]=='0'&&s[n-1][n-2]=='0')
				inversions=0;

		}


	return 0;
}




