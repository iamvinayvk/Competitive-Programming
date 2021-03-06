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
			vll barrels(n);
			for(ll i=0;i<n;i++)
			{
				cin>>barrels[i];
			}
			sort(all(barrels));
			int j=0;
			for(int i=0;i<k;i++)
			{
				// cout<<"barrels: "<<barrels[n-1]<<" barrels "<<barrels[n-2]<<"\n";
				barrels[n-1]+=barrels[n-2-j];
				barrels[n-2-j]=0;
				j++;
				// sort(all(barrels));
			}
			cout<<barrels[n-1]-barrels[n-2]<<"\n";
		}


	return 0;
}



