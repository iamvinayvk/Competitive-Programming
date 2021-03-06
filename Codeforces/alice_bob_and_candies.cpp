/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/24/2020 2:37:30 AM
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
				cin>>a[i];
			ll i=0,j=n-1,move=0,alice=0,bob=0,prev=0;
			while(i<=j)
			{
				if(move%2==0)
				{
					// cout<<"mainchala\n";
					move++;
					ll temp=0;
					while(temp<=prev)
					{
						if(i>j)
							break;
						temp+=a[i];
						i++;
					}
					alice+=temp;
					prev=temp;
				}
				else
				{
					move++;
					ll temp=0;
					while(temp<=prev)
					{
						if(i>j)
							break;
						temp+=a[j];
						j--;
					}
					bob+=temp;
					prev=temp;
				}
			}
			cout<<move<<" "<<alice<<" "<<bob<<"\n";
		}


	return 0;
}



