/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 2/25/2021 1:52:26 AM
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

string sumofd(string n)
{
	ll sum=0;
	for(int i=0;i<n.size();i++)
	{

 		sum+=(n[i]-'0');
	}
	return to_string(sum);
}

int main(){
	
		fast
		string n;
		cin>>n;
		ll times=0;
		while(n.size()>1)
		{
			// cout<<n<<"\n";
			 n=sumofd(n);
			 times++;
		}
		cout<<times;


	return 0;
}



