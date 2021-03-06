/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/24/2020 1:59:49 AM
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
			set<ll> ans;
			for(ll i=2;i*i<=n;i++)
			{
				if(n%i==0)
				{
					ans.insert(i);
					n/=i;
					break;

				}
			}
			for(ll i=2;i*i<=n;i++)
			{
				if(n%i==0&&ans.count(i)==0)
				{
					ans.insert(i);
					n/=i;
					break;
				}
			}
			if(ans.size()<2||n==1||ans.count(n)==1)
			{
				cout<<"NO\n";
			}
			else
			{
				ans.insert(n);
				cout<<"YES\n";
				for(auto k:ans)
				{
					cout<<k<<" ";
				}
				cout<<"\n";
			}
		}


	return 0;
}



