/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 2/23/2021 2:51:30 PM
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
			// vll p(n);
			ll find=n;
			vector<int> p(n);
			vector<vector<int>> ans;
			for(ll i=0;i<n;i++)
			{
				cin>>p[i];
			}
			int max=p[0];
			vector<int> temp;
			for(int i=0;i<n;i++)
			{
				if(max>=p[i])
				{
					temp.push_back(p[i]);
				}
				else
				{
					ans.push_back(temp);
					temp.clear();
					max=p[i];
					temp.push_back(p[i]);
				}
			}
			if(temp.size()>0)
				ans.push_back(temp);
		
			for(int i=ans.size()-1;i>=0;i--)
				{
					for(int j=0;j<ans[i].size();j++)
						cout<<ans[i][j]<<" ";
				}
			cout<<"\n";

		}


	return 0;
}



