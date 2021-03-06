/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 2/27/2021 4:01:37 PM
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
		string s="ROYGBIV";
		for(int i=1;i<=n/7;i++)
		{
			cout<<s;
		}
		int rem=n%7;
		vector<string> arr;
		arr.push_back("");
		arr.push_back("G");
		arr.push_back("GB");
		arr.push_back("YGB");
		arr.push_back("YGBI");
		arr.push_back("OYGBI");
		arr.push_back("ROYGBI");
		cout<<arr[rem];


	return 0;
}



