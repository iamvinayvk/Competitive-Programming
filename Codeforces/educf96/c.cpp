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
			vector<pair<int,int>> a_b;
			ll previous=n;
			n--;
			while(n>0)
			{
				a_b.push_back(make_pair(previous,n));
				previous=ceil((float)(previous+n)/2);
				n--;


			}
			cout<<previous<<"\n";
			for(int i=0;i<a_b.size();i++)
			{
				cout<<a_b[i].first<<" "<<a_b[i].second<<"\n";
			}


		}


	return 0;
}



