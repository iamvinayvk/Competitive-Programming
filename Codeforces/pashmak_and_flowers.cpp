/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 10/26/2020 7:14:08 PM
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
		ll n;
		cin>>n;
		vll b(n);
		for(ll i=0;i<n;i++)
		{
			cin>>b[i];
		}
		ll maxo=*max_element(all(b));
		ll mino=*min_element(all(b));
		ll counto1=0,counto2=0;
		for(ll i=0;i<n;i++)
		{
			if(maxo==b[i])
				counto1++;
			if(mino==b[i])
				counto2++;
		}
		if(maxo!=mino)
		cout<<maxo-mino<<" "<<counto2*counto1;
		else
			cout<<maxo-mino<<" "<<(counto2*(counto1-1))/2;



	return 0;
}



