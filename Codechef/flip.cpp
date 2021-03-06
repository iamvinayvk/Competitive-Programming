/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/22/2020 9:41:48 PM
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
			string a,b;
			cin>>a>>b;
			// ll flag_e=0,flag_o=0;
			ll ans=0,o_f=0,o_e=0;
			for(int i=0;i<a.size();i++)
			{
				if(i%2==1)
				{
					if(a[i]!=b[i])
					{
						if(o_f==0)
							ans++;
						o_f=1;
					}
					else
						o_f=0;
				}
				if(i%2==0)
				{
					if(a[i]!=b[i])
					{
						if(o_e==0)
							ans++;
						o_e=1;
					}
					else
						o_e=0;
				}
				
			}
			cout<<ans<<"\n";

		}


	return 0;
}



