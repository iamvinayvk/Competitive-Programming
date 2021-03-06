/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/29/2020 2:47:37 PM
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
			vll a(n+1);
			map<int,int> m;
			for(ll i=1;i<=n;i++)
			{
				cin>>a[i];
				m[a[i]]++;


			}
			queue<int> q;
			vll ans;
			vll visited(n+1);
			for(ll i=1;i<=n;i++)
			{

				q.push(i);
			}
			int f=1;
			for(int i=1;i<=n;i++)
			{
				m[a[i]]--;
				if(visited[a[i]]==0)
				{
					visited[a[i]]=1;
					ans.push_back(a[i]);
				}
				else
				{
					while(1)
					{
					int val=q.front();
					q.pop();
					if(val<a[i]&&visited[val]==0)
					{
						visited[val]=1;
						ans.push_back(val);
						break;
					}
					else if(val>=a[i])
					{
						f=0;
						break;
					}
				}

				}
				if(f==0)
					break;
			}
			if(f)
			{
				for(ll i=0;i<ans.size();i++)
					cout<<ans[i]<<" ";
				cout<<"\n";
			}
			else
				cout<<"-1\n";

		}


	return 0;
}



