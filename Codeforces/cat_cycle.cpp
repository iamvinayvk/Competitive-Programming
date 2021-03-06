/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 2/15/2021 8:36:46 PM
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
			if(n%2==0)
				cout<<((k%n)==(long long)0?n:k%n)<<"\n";
			else
			{
				k--;
				ll rep=(n)/2;
				ll change=(k)/rep;

				cout<<(k+change)%n+1<<"\n";
			}

		}


	return 0;
}



