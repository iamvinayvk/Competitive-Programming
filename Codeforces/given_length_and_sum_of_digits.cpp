/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/9/2020 8:56:54 PM
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
		int m,s;
		cin>>m>>s;
		if(s>9*m||(s==0&&m!=1))
			cout<<"-1 -1";
		else
		{
			int a=s,b=s;
			int index=m-1;
			while(index>=0)
			{
				int pos=max(0,a-9*index);
				if(index==m-1&&a&&pos==0) pos=1;
				cout<<pos;
				a-=pos;
				index--;
			}
			index=m-1;
			cout<<" ";
			while(index>=0)
			{
				int pos=min(9,b);
				// if((index!=m-1)&&b&&pos==b) pos=0;
				index--;
				b-=pos;
				cout<<pos;
			}
		}
		
		


	return 0;
}



