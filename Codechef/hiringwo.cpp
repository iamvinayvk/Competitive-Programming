/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 11/22/2020 10:18:00 PM
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

void storeprime(vll &prime,ll n)
{
	ll c=0,divider=2;
	while(c<=n)
	{
		ll prima=1;
		for(int i=2;i*i<=divider;i++)
		{
			if(divider%i==0)
			{
				prima=0;
				break;
			}
		}
		if(prima)
		{
			prime.push_back(divider);
			c++;
		}
		divider++;

	}
	// for(int i=0;i<n;i++)
	// 	cout<<prime[i]<<" ";
}

int main(){
	
		fast
			vll prime;
		storeprime(prime,1e5);
		w(t)
		{
			ll k,x;
			cin>>k>>x;
			ll ans=0;
			auto f=lower_bound(all(prime),x);
			// cout<<(f-prime.begin())<<" "<<prime[f-prime.begin()]<<"\n";
			if(prime[f-prime.begin()]==x)
			{
				ll ans2=x+(k-1)*1;

				// if(k==2)
				// {
				// 	ans=x+1;		
				// }
				// else
				// {
				// 	// cout<<ans<<"\n";
				// 	for(int i=0;i<k-1;i++)
				// 		ans+=x;
				// 	ans+=1;
				// }
				ans=ans2;
			}
			else
			{
				ll key=2;
				ll ans2=0,p_f=0,p_l=0;
				ans2=x+(k-1)*1;
				
				for(int i=0;(i<=(f-prime.begin())&&key>0);i++)
				{
					
					
						
						if(x%prime[i]==0)
						{
						
							if(p_f==0)
								p_f=x/prime[i];
							else if(p_f)
							{
								p_l=x/prime[i];
							}
						key--;

						}
						
					
					// cout<<ans<<"\n";

				}
				// while(key--)
				// 		{
				// 			ans+=x;
				// 		}
				if(p_l&&p_f)
					ans=(k-1)*p_l+p_f;
				else
					ans=ans2;
						
					ans=min(ans2,ans);
			}

			cout<<ans<<"\n";



			


		}


	return 0;
}



