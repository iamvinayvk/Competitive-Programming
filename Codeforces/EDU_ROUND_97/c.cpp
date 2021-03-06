/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 10/27/2020 9:01:29 PM
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
			vll time(n);
			vll visited(1000005,0);
			ll ans=0;
			map<int,int> m;
			for(ll i=0;i<n;i++)
			{
				cin>>time[i];
				m[time[i]]++;
				if(m[time[i]]==1)
				{
					visited[time[i]]=1;
					time[i]=-1;
				}

				
			}
			sort(all(time));
			reverse(all(time));
			visited[0]=1;
			

			for(int i=0;i<n;i++)
			{
				// cout<<time[i]<<" ";
				if(visited[time[i]]==0&&time[i]>=0)
				{
					visited[time[i]]=1;

				}
				else if(time[i]>=0)
				{
					int start=time[i],end=time[i];
					
					while(1)
					{
						start--;
						end++;
						if(visited[max(start,0)]==0||visited[end]==0)
						{
							ans+=abs(abs(end)-time[i]);
							if(visited[end]==0)
								visited[end]=1;
							else if(visited[max(start,0)]==0)
								visited[max(start,0)]=1;
							break;

						}
					}
				}
			}
			cout<<ans<<"\n";
		}


	return 0;
}



