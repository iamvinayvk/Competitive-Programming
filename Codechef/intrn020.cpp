#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007

bool isprime(ll  n)
{
    for(ll i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}


int main(){
	
		fast
		ll n;
		cin>>n;
		// ll j=2;
		// bool prime[1000005];
		// fill(prime,prime+1000005,true);
		// for(ll i=2;i*i<=1000000;i++)
		// {
		// 	if(prime[i])
		// 	{
		// 		for(ll k=i*i;k<=1000000;k+=i)
		// 		{
		// 			prime[k]=false;
		// 		}
		// 	}
		// }
		ll k=2;
			while(n>0)
			{
				if(isprime(k))
				{
					cout<<k<<"\n";
					n--;
				}
				k++;
			}			
		


	return 0;
}



