#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		int k,l,m,n,d;
		cin>>k>>l>>m>>n>>d;
		int c=0;
		for(int i=1;i<=d;i++)
		{
			if(i%k==0||i%l==0||i%m==0||i%n==0)
			{
				continue;
			}
			else
				c++;
		}
		cout<<d-c;

	return 0;
}



