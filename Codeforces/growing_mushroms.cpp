/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 3/1/2021 5:24:45 PM
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

bool mysort(pair<double,int> a,pair<double,int> b)
{
	if(a.F==b.F)
	{
		if(a.S<b.S)
			return true;
		else
			return false;
	}
	else if(a.F>b.F)
		return true;
	else
		return false;
}

int main(){
	
		fast
		double n,t1,t2,k;
		cin>>n>>t1>>t2>>k;
		vector<pair<double,int>> ans(n);
		for(ll i=0;i<n;i++)
		{
			ll a,b;
			cin>>a>>b;
			
				double ans2=((double)b*t1*((double)(100-k)/100))+a*t2;
			
				double ans1=((double)a*t1*((double)(100-k)/100))+(double)b*t2;
				ans[i].F=max(ans2,ans1);
				ans[i].S=i+1;
			
			// cout<<"ans[]i"<<ans[i]<<"\n";
		}
		// for(ll i=0;i<n;i++)
		// 	cout<<"Aaa: "<<ans[i]<<"\n";
		sort(all(ans),mysort);
		// reverse(all(ans));
		for(ll i=0;i<n;i++)
		{
			
			std::cout << std::fixed;
    		std::cout << std::setprecision(2);
    		cout<<ans[i].S<<" "<<ans[i].F<<"\n";
		}



	return 0;
}



