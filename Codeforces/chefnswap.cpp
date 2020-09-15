#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		w(t)
		{
			ll n;
			cin>>n;
			ll m=1;
			ll partial_sum1=0,partial_sum2=0;
			ll total_sum=(n*(n+1))/2;
			ll nice_swaps=0;
			if(total_sum%2==1)
			{
				cout<<0<<"\n";

			}
			else{
				m=(sqrt(1+4*total_sum)-1)/2;
				partial_sum1=(m*(m+1))/2;
				partial_sum2=(total_sum-partial_sum1);
				ll diff=(partial_sum2-partial_sum1)/2;
				
				while((diff)<n&&(partial_sum2-partial_sum1)>=0&&m>0)
				{
					partial_sum1=(m*(m+1))/2;
					partial_sum2=(total_sum-partial_sum1);
					diff=(partial_sum2-partial_sum1)/2;
					

					if(partial_sum1==partial_sum2)
					{
							nice_swaps+=((m*(m-1))/2);
							nice_swaps+=(((n-m)*((n-m)-1))/2);
					}
						else{
					// for(int i=1;i<=m;i++)
					// {
						
							
						nice_swaps+=min(min(n-diff,n-m),diff);
						
						
					
					// }
					}
					// cout<<"m: "<<m<<" nice_swaps: "<<nice_swaps<<"\n";
					m--;
					partial_sum1=(m*(m+1))/2;
					partial_sum2=(total_sum-partial_sum1);
					diff=(partial_sum2-partial_sum1)/2;
			
			}
			
			
				
			
			cout<<nice_swaps<<"\n";
		}
		}

	return 0;
}



