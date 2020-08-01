#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		int n;
		cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++)
		{
			int k;
			cin>>k;
			v.push_back(k);
		}
		sort(v.begin(),v.end());
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}


	return 0;
}



