/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/9/2020 12:23:17 PM
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
			ll n,k;
			cin>>n>>k;
			string s;
			cin>>s;
			k++;
			queue<int> q_m,q_i;
			ll ans=0;
			for(int i=0;i<n;i++)
			{
				if(s[i]=='I')
					q_i.push(i);
				if(s[i]=='M')
					q_m.push(i);
				if(s[i]=='X'||i==n-1)
				{
					while((!q_m.empty())&&(!q_i.empty()))
					{
						ll start_m=q_m.front();
						ll end_i=q_i.front();
						ll s1,e;
						if(start_m<end_i)
						{
							s1=start_m;
							e=end_i;
						}
						if(end_i<start_m)
						{
							s1=end_i;
							e=start_m;
						}
						ll walls=0;
						for(ll j=s1;j<=e;j++)
						{
							if(s[j]==':')
								walls++;
						}
						ll power=(k-abs(start_m-end_i))-walls;
						if(power>0)
						{
							ans++;
							q_m.pop();
							q_i.pop();
						}
						else if(start_m<end_i)
							q_m.pop();
						else
							q_i.pop();

					}
					while(!q_i.empty())
						q_i.pop();
					while(!q_m.empty())
						q_m.pop();
				}
				
			}
			cout<<ans<<"\n";

		}
		return 0;
}



