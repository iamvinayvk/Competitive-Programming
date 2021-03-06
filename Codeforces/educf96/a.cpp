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
			vll a(3);
			int N=n;
			int flag=1;
			for(int i=1;i<=n;i++)
			{
				if(N==0)
					break;
				if(N==7)
				{
					a[2]=1;
					break;
				}
				if(N==5)
				{
					a[1]=1;
					break;
				}
				else if(N<3&&N!=0)
				{
					flag=0;
					break;
				}
				a[0]+=1;
				N-=3;
			}
			if(flag)
				cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<"\n";
			else
				cout<<"-1\n";
		}


	return 0;
}



