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
		int s,n;
		cin>>s>>n;
		vector<pair<int,int>> a(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i].first>>a[i].second;
		}
		sort(all(a));
		for(int i=0;i<n;i++)
		{
			if(s<=a[i].first)
			{
				cout<<"NO\n";
				return 0;
			}
			else
			{
				s+=a[i].S;
			}

		}
		cout<<"YES\n";


	return 0;
}



