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
			vll collector;
			ll cnt1=0,cnt2=0;
			
			for(int i=0;i<n;i++)
			{
				if(s[i]=='1')
				{
					cnt1++;
					if(cnt2!=0)
						collector.push_back(cnt2);
					cnt2=0;
				}
				else
				{
					cnt2++;
					if(cnt1!=0)
						collector.push_back(cnt1);
					cnt1=0;
				}
				if(i==n-1)
				{
					if(cnt1!=0)
						collector.push_back(cnt1);
					else
						collector.push_back(cnt2);
				}

			}
			ll ans=0;
			// for(int i=0;i<collector.size();i++)
			// {
			// 	cout<<collector[i]<<" ";
			// }
			// cout<<"\n";
			for(int i=0;i<collector.size();i++)
			{

				if(collector[i]>1)
				{
					ans++;
					collector[i]--;
					collector.erase(collector.begin());
					i--;

				}
				
			}

			cout<<ans+(collector.size()+1)/2<<"\n";
		}


	return 0;
}



