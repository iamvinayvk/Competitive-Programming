#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		w(t)
		{
			int n,k;
			cin>>n>>k;
			vector<int> a(n);
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
			int count=0;
			sort(a.begin(),a.end());
			for(int i=1;i<n;i++)
			{
				count+=((k-a[i])/a[0]);
			}
			cout<<count<<"\n";
		}


	return 0;
}



