/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/15/2020 12:49:45 AM
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
		ll n,m;
		cin>>n>>m;

    ll max_pairs = ((n - m + 1) * (n - m)) / 2; 
  
    ll min_pairs = m * (((n - m) / m + 1) * ((n - m) / m)) / 2 + 
                    ceil((n - m) / double(m)) * ((n - m) % m);
        cout<<min_pairs<<" "<<max_pairs;


	return 0;
}



