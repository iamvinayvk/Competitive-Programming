/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 10/27/2020 8:27:38 PM
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
			cin>>n;
			string s;
			cin>>s;
			ll max0=0,max1=0,count1=0,count0=0,sum0=0,sum1=0;
			for(int i=0;i<n;i++)
			{
				if(s[i]=='1')
				{
					count1++;
					// max1=max(count1,max1);
					if(count0!=0)
						sum0+=(count0-1);
					count0=0;
				}
				if(s[i]=='0')
				{
					count0++;
					// max0=max(count0,max0);
					if(count1!=0)
						sum1+=(count1-1);
					count1=0;
				}
			}
			if(count1!=0)
						sum1+=(count1-1);
			if(count0!=0)
						sum0+=(count0-1);

			cout<<max(sum1,sum0)<<"\n";
		}


	return 0;
}



