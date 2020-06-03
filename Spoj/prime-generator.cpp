#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)

 vector<long long int> primes()
{	vector<long long int> prime(1000000005);
	prime[0]=1;
	prime[1]=1;
	for(long long int i=4;i<=1000000000;i+=2)
	{
		prime[i]=1;
	}
	for(long long int i=3;i<=1000000000;i+=2)
	{
		if(prime[i]!=1)
		{
			for(long long int j=i*2;j<=i*i;j+=i)
			{
				prime[j]=1;
			}
		}
	}
	return prime;
}



int main(){
	
	fast
	int t;
	cin>>t;

	vector<long long int> prime=primes();
	cout<<"I'm going fine!\n";

	while(t--)
	{
		int m,n;
		cin>>m>>n;
		for(int i=m;i<=n;i++)
		{
			if(prime[i]==0)
			{
				cout<<i<<" ";
			}
		}
	}



	return 0;
}



