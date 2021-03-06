/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/26/2020 10:18:10 PM
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
			string s,p;
			cin>>s>>p;
			queue<ll> ans;
			ll sz=0,pz=0;
			for(ll i=0;i<n;i++)
			{
				if(s[i]=='0')
				{
					ans.push(i);
					sz++;
				}
				if(p[i]=='0')
					pz++;
			}
			if(sz==pz)
			{
				ll f=0;
				for(ll i=0;i<n;i++)
				{
					if(s[i]!=p[i]&&s[i]=='1')
					{
						f=2;
						while(!ans.empty())
						{
							ll index=ans.front();
							if(index>i)
							{
								swap(s[i],s[index]);
								ans.pop();
								f=1;
								break;
							}
							else
							{
								ans.pop();
							}
						}
					}
					if(s[i]!=p[i]&&s[i]=='0')
					{
						f=2;
						break;
					}

				}
				if(f==1||f==0)
				{
					cout<<"Yes\n";
				}
				else
				{
					cout<<"No\n";
				}
			}
			else
			{
				cout<<"No\n";
			}
		}


	return 0;
}



