/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/19/2020 6:13:25 PM
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
	    vector<ll> a(n);
	    vector<ll> prefix(n+5);
    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    sort(all(a));
	   for(int i=0;i<n;i++)
	   {
	       prefix[i+1]=a[i]+prefix[i];
	       
	    }
    	ll s=0;
    	for(int i=n-1;i>0;i--)
   	 	{
        s+=abs(i*a[i]-prefix[i]);
       
    	}
    

		// ll diff=0;
		// for(ll i=0;i<n;i++)
		// {
		// 	diff+=(abs((n-i-1)*a[i]-suffix[i+1]));
		// 	cout<<"a[i]: "<<a[i]<<"suffp[: "<<suffix[i+1]<<"\n";
		// }
		cout<<s;


	return 0;
}



