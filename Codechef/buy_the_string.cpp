/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/17/2020 8:09:35 PM
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
			ll n,c0,c1,h;
			cin>>n>>c0>>c1>>h;
			string s;
			cin>>s;
			ll count0=0,count1=0;
			for(int i=0;i<n;i++)
			{
				if(s[i]=='0')
					count0++;
				if(s[i]=='1')
					count1++;
			}
			ll ans1=((c0*count0)+(c1*count1));
			ll ans2=((count0*h)+(n*c1));
			ll ans3=((count1*h)+(n*c0));
			cout<<min(ans1,min(ans2,ans3))<<"\n";
		}


	return 0;
}



