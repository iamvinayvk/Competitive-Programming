#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		int t;
		
		cin>>t;
		int k=1;
		while(k<=t)
		{

			ll n,x;
			cin>>n>>x;
			
			vector<pair<ll,ll>> time_interval(n);
			for(ll i=0;i<n;i++)
			{
				ll start,end;
				cin>>start>>end;
				
				time_interval[i]=(make_pair(start,end));
			
			}
			sort(time_interval.begin(),time_interval.end());
			// for(ll i=0;i<n;i++)
			// {
			// 	cout<<time_interval[i].first<<" "<<time_interval[i].second<<"\n";
				
			// }
			int number_of_robots=1;
			int current_interval=time_interval[0].first+x;
			for(ll i=0;i<n;i++)
			{
				if(current_interval>=time_interval[i].second)
				{
			       continue;
				}
				else if((time_interval[i].second-time_interval[i].first)<=x)
				{
					current_interval=time_interval[i].first+x;
					number_of_robots++;
				}
				else
				{

					if(i==0)
					{
						number_of_robots-=1;
					}
					if((time_interval[i].first+x)>(current_interval+x))
					{
					current_interval=((((time_interval[i].second-time_interval[i].first)/x)*x));

					current_interval+=x;
					current_interval+=time_interval[i].first;
					// cout<<current_interval<<" =";
					number_of_robots+=ceil((float)(time_interval[i].second-time_interval[i].first)/x);
					}
					else{
						number_of_robots+=ceil((float)(time_interval[i].second-current_interval)/x);
					current_interval+=((((time_interval[i].second-time_interval[i].first)/x)*x));
					current_interval+=x;
				
					}


					
				}
				
			}
		
			cout<<"Case #"<<k<<": "<<number_of_robots;
			

			cout<<"\n";
			k++;
		
		}


	return 0;
}



