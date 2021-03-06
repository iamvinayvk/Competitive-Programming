/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 3/6/2021 5:31:38 PM
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
		ll a,b;
		cin>>a>>b;
		if((a+b)>=15&&b>=8)
			cout<<"1\n";
		else if((a+b)>=10&&b>=3)
			cout<<"2\n";
		else if((a+b)>=3)
			cout<<"3\n";
		else 
			cout<<"4\n";


	return 0;
}



