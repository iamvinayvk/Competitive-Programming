/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 10/17/2020 6:41:42 PM
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
			ll x1,y1,x2,y2;
			cin>>x1>>y1>>x2>>y2;
			ll time=0;
			time+=(abs(x2-x1)+abs(y2-y1));
			if(time==0)
				cout<<time<<"\n";
			else
			{
			if(x1==x2||y1==y2)
			cout<<time<<"\n";
			
			else
				cout<<time+2<<"\n";
		}



		}


	return 0;
}



