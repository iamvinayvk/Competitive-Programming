/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 10/15/2020 12:21:12 AM
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
		int n;
		cin>>n;
		while(n)
		{
			int sum=0,max=0;
			for(int i=0;i<n;i++)
			{
				int input;
				cin>>input;
				sum+=input;
				if(sum>max)
				{
					max=sum;
				}
				if(sum<0)
					sum=0;
			}
			if(max>0)
			{
				cout<<"The maximum winning streak is "<<max<<".\n";
			}
			else
			{
				cout<<"Losing streak.\n";
			}
			cin>>n;
		}


	return 0;
}



