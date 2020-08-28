#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		int n;
		cin>>n;
		int total=0;
		for(int i=0;i<n;i++)
		{
			int k;
			cin>>k;
			total+=k;
		}
		int nums=0;
		for(int i=1;i<=5;i++)
		{
			if((total+i)%(n+1)!=1)
			{
				// cout<<i<<"\n";
				nums++;
			}
		}
		cout<<nums;


	return 0;
}



