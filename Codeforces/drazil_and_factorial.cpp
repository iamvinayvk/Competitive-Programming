/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/20/2020 12:31:44 AM
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
		ll n;
		cin>>n;
		ll a;
		cin>>a;
		map<int,string> mp;
		for(int i=2;i<=9;i++)
		{
			if(i==2||i==3||i==5||i==7)
				mp[i]=to_string(i);
			else if(i==4)
				mp[i]="322";
			else if(i==6)
				mp[i]="53";
			else if(i==8)
				mp[i]="7222";
			else if(i==9)
				mp[i]="7332";
		}
		string ans;
		while(a>0)
		{
			int dig=a%10;
			a/=10;
			if(dig!=0&&dig!=1)
			ans+=mp[dig];
		}
		sort(all(ans));
		reverse(all(ans));
		cout<<ans<<"\n";


	return 0;
}



