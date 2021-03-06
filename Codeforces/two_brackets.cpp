/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/19/2020 8:54:09 PM
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
			string s;
			cin>>s;
			int open1=0;
			int open2=0;
			ll ans=0;
			for(int i=0;i<s.size();i++ )
			{
				if(s[i]=='(')
					open1++;
				if(s[i]==')'&&open1!=0)
				{
					open1--;
					ans++;
				}
				if(s[i]=='[')
					open2++;
				if(s[i]==']'&&open2!=0)
				{
					open2--;
					ans++;
				}
			}
			cout<<ans<<"\n";
		}


	return 0;
}



