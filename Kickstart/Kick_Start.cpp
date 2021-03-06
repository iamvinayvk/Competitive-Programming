/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 10/18/2020 6:08:30 PM
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
		int t;
		cin>>t;
		int x=1;
		while(x<=t)
		{
			string s;
			cin>>s;
			vector<int> kick;
			vector<int> start(s.size());
			for(int i=0;i<s.size();i++)
			{
				// cout<<"s[i++]: "<<s[i]<<"\n";
				
				if(s[i]=='K'&&s[i+1]=='I'&&s[i+2]=='C'&&s[i+3]=='K')
				{
					kick.push_back(i);
					// cout<<"kic: "<<i<<"\n";
				}
				
				if(s[i]=='S'&&s[i+1]=='T'&&s[i+2]=='A'&&s[i+3]=='R'&&s[i+4]=='T')
				{
					// cout<<s[i]<<s[i+1]<<s[i+2]<<s[i+3]<<s[i+4]<<"\n";
					start[i]=1;
				}

			}
			vector<int> prefix(s.size()+1);
			for(int i=0;i<s.size();i++)
			{
				// cout<<start[i]<<" strat \n";
				prefix[i+1]=prefix[i]+start[i];
				// cout<<prefix[i+1]<<" ";
			}
			ll sum=accumulate(all(start),0);
			ll total=0;
			for(int i=0;i<kick.size();i++)
			{
				total+=(sum-prefix[kick[i]+1]);
			}

			cout<<"Case #"<<x<<": "<<total<<"\n";
			x++;


		}


	return 0;
}



