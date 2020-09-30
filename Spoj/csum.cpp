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
		vector<int> prefix_sum(n);
		for(int i=0;i<n;i++)
		{
			int input;
			cin>>input;
			if(i==0)
				prefix_sum[i]=input;
			else
				prefix_sum[i]=prefix_sum[i-1]+input;
		}
		int q;
		cin>>q;
		for(int k=0;k<q;k++)
		{
			int i,j;
			cin>>i>>j;
			if(i==0)
				cout<<prefix_sum[j]<<"\n";
			else
				cout<<prefix_sum[j]-prefix_sum[i-1]<<"\n";
		}


	return 0;
}



