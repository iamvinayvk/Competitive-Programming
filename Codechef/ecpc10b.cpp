/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/3/2020 8:15:32 PM
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
			vll a(n);
			for(ll i=0;i<n;i++)
			{
				cin>>a[i];
			}
			ll mino_pos=min_element(all(a))-a.begin();
			ll mino=*min_element(all(a));
			ll ans1=ceil((float)n/mino);
			cout<<max(ans1,mino)<<"\n";
			
		}


	return 0;
}



