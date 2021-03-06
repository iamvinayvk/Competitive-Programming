/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/2/2020 12:46:11 AM
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
		vll a(n);
		for(ll i=0;i<n;i++)
			cin>>a[i];
		sort(all(a));
		vector<vector<ll>> ans(n/3);
		int flag=0;
		for(int i=0;i<n/3;i++)
		{
			int f1=0,f2=0,f3=0;
			for(int j=i;j<n;j+=n/3)
			{
				// cout<<"j: "<<j<<"\n";
				if(a[j]==1&&f1==0)
				ans[i].push_back(a[j]),f1=1;
				else if((a[j]==2||a[j]==3)&&f2==0&&f1==1&&(a[j]%ans[i][0]==0))
				ans[i].push_back(a[j]),f2=1;
				else if((a[j]==4||a[j]==6)&&f3==0&&f2==1&&f1==1&&(a[j]%ans[i][1]==0))
				ans[i].push_back(a[j]),f3=1;
				else
				{
					flag=1;
					break;
				} 
			}
		}
		if(flag)
			cout<<"-1";
		else
		{
			for(int i=0;i<n/3;i++)
			{
				for(int j=0;j<3;j++)
					cout<<ans[i][j]<<" ";
				cout<<"\n";
			}
		}


	return 0;
}



