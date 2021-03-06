/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 
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
			ll n,h;
			cin>>n>>h;
			vector<pair<ll,ll>> students(n);
			for(ll i=0;i<n;i++)
			{
				cin>>students[i].F;
				students[i].S=i+1;
			}
			sort(all(students));
			// reverse(all(students));
			ll sum=0;
			for(ll i=n-h;i<n;i++)
			{

				sum+=students[i].F;
			}
			cout<<sum<<"\n";
			for(ll i=n-h;i<n;i++)
			{
				cout<<students[i].S<<" ";
			}
			cout<<"\n";
		}

	return 0;
}



