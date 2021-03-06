/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 10/31/2020 11:14:34 AM
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
		ll t,s1,s2,e1,e2;
		cin>>t>>s1>>s2>>e1>>e2;
		string s;
		cin>>s;
		int diff_x=e1-s1;
		int diff_y=e2-s2;
		int ans=0;
		for(int i=0;i<s.size();i++)
		{
			if(diff_x<0&&s[i]=='W')
			{
				ans=i+1;
				diff_x++;
			}
			if(diff_x>0&&s[i]=='E')
			{
				ans=i+1;
				diff_x--;
			}
			if(diff_y<0&&s[i]=='S')
			{
				ans=i+1;
				diff_y++;
			}
			if(diff_y>0&&s[i]=='N')
			{
				ans=i+1;
				diff_y--;
			}
		}
		if(diff_x==0&&diff_y==0)
			cout<<ans;
		else
			cout<<"-1";

	return 0;
}



