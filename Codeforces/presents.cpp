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
		vector<int> ans(n);
		for(int i=0;i<n;i++)
		{
			int input;
			cin>>input;
			ans[input-1]=i+1;
		}
		for(int i=0;i<n;i++)
		{
			cout<<ans[i]<<" ";
		}


	return 0;
}



