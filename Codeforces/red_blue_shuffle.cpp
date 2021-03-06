/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/19/2020 3:09:55 PM
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
			ll bl=0,re=0;
			string r,b;
			
				cin>>r;
		
				cin>>b;
			
			for(ll i=0;i<n;i++)
			{
				if(r[i]<b[i])
					bl++;
				if(r[i]>b[i])
					re++;
				else if(r[i]==b[i])
				{
					re++;
					bl++;
				}
			}
			if(re>bl)
				cout<<"RED\n";
			else if(bl>re)
				cout<<"BLUE\n";
			else
				cout<<"EQUAL\n";


		}


	return 0;
}



