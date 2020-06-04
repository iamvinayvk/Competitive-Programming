#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define MAX 100001

 vector<long long int> prime_sieve()
{	vector<long long int> prime(MAX);
	vector<long long int> prime_numbers;

	prime[0]=1;
	prime[1]=1;
	for(long long int i=4;i<MAX;i+=2)
	{
		prime[i]=1;
	}
	for(long long int i=3;i*i<MAX;i+=2)
	{
		if(prime[i]!=1)
		{
			for(long long int j=i*i;j<MAX;j+=i)
			{
				prime[j]=1;
			}
		}
	}
	prime_numbers.push_back(2);
	for(int i=3;i<MAX;i+=2)
	{
		if(prime[i]==0)
		{
			prime_numbers.push_back(i);
		}
	}
	return prime_numbers;
}
void segmented_sieve(vector<long long int> prime,long long int m,long long int n)
{
	int isprime[n-m+1]={0};
	
	for(long long int i=0;(long long )prime[i]*prime[i]<=n;i++)
	{
	long long int currPrime=prime[i];
	long long int base=(m/currPrime)*currPrime;
	if(base<m)
	{
		base=base+currPrime;
	}
	for(int j=base;j<=n;j+=currPrime)
	{
		isprime[j-m]=1;
	}
	if(base==currPrime)
	{
		isprime[base-m]=0;
	}
	}

	for(int i=0;i<=n-m;i++)
	{
		if(isprime[i]==0&&i+m>1)
		{
			cout<<i+m<<"\n";
		}
	}
}



int main(){
	
	fast
	int t;
	cin>>t;

	vector<long long int> prime=prime_sieve();
	

	while(t--)
	{
		long long int m,n;
		cin>>m>>n;
		segmented_sieve(prime,m,n);
		cout<<"\n";

		
	}




	return 0;
}



