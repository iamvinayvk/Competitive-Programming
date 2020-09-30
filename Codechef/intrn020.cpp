#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		ll n;
		cin>>n;
		int j=2;
		bool prime[100005];
		fill(prime,prime+100005,true);
		for(int i=2;i*i<=100000;i++)
		{
			if(prime[i])
			{
				for(int k=i*i;k<100000;k+=i)
				{
					prime[k]=false;
				}
			}
		}
		while(n>0)
		{
			for(int i=j;i<100005;i++)
			{
				if(prime[i])
				{
					cout<<i<<"\n";
					n--;
					j=i+1;
					break;
				}
			}			
		}


	return 0;
}



