/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/19/2020 4:15:29 PM
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
			vll time(n);
			for(int i=0;i<n;i++)
			{
				cin>>time[i];
			}
			sort(all(time));
			ll median=time[(n+1)/2];
			ll j=(n+1)/2;
			ll sum=0;
			for(int i=0;i<n;i++)
			{
				sum+=abs(time[i]-(j));
				j++;
			}
			cout<<sum<<"\n";
		}


	return 0;
}



