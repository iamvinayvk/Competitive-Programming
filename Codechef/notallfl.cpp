/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/17/2020 11:50:49 PM
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
			ll n,k;
			cin>>n>>k;
			vector<int> a(n);
			unordered_set<int> stopper;
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
				stopper.insert(a[i]);
			}
			
			queue<int> q;
			int size=0,maxo=0;
			if(stopper.size()<k)
			{
				cout<<n<<"\n";
			}
			else if(k==n){
				cout<<n-1<<"\n";
			}
			else
			{
				stopper.clear();
			for(int i=0;i<n;i++)
			{
				q.push(a[i]);
				stopper.insert(a[i]);
				
				if(stopper.size()==k)
				{

					int topo=q.front();
					stopper.erase(topo);
					while((topo==q.front())&&(!q.empty()))
					{
						// cout<<q.front()<<" \n";
						q.pop();
					}
					maxo=max((int)q.size(),maxo);

				}
				maxo=max((int)q.size(),maxo);
				
				

			}
			maxo=max((int)q.size(),maxo);
			cout<<maxo<<"\n";
		}
		}


	return 0;
}



