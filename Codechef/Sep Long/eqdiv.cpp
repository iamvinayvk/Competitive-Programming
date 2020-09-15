#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		//for sub-task-1
		ll k;
		cin>>k;
		w(t)
		{
			ll n;
			cin>>n;
			ll total_sum=0;
			
			ll sum1=0,sum2=0;
			vector<ll> v(n+5);
			vector<ll> a(n+5);
			for(int i=1;i<=n;i++)
			{
				a[i]=ceil(pow(i,k));
				total_sum+=a[i];
				cout<<"a[i]: "<<a[i]<<"\n";
			}
			ll half_sum=total_sum/2;
			if(total_sum%2)
			{
				
				for(int i=n;i>=1;i--)
				{
					if(half_sum-a[i]>=0)
					{
						v[i]=1;
						half_sum-=a[i];
						sum1+=a[i];
					}
					else
					{
						v[i]=0;
						sum2+=a[i];
						
					}
				}
				
				
				
			}
			else
			{
				
				for(int i=n;i>=1;i--)
				{
					if(half_sum-a[i]>=0)
					{
						v[i]=1;
						half_sum-=a[i];
						sum1+=a[i];
					}
					else
					{
						v[i]=0;
						sum2+=a[i];
					}
					// cout<<"sum1: "<<sum1<<" sum2: "<<sum2<<" half_sum: "<<half_sum<<"\n";

				
						}
													
					}
					// cout<<"sum1: "<<sum1<<" sum2: "<<sum2<<"\n";
					cout<<abs(sum2-sum1)<<"\n";
					for(int i=1;i<=n;i++)
					{
						cout<<v[i];
					}
					cout<<"\n";
		}


	return 0;
}



