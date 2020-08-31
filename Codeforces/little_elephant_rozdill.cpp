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
		vector<ll> cities(n);
		ll min =INT_MAX,index=0;
		for(int i=0;i<n;i++)
		{
			cin>>cities[i];
			if(cities[i]<min)
			{
				min=cities[i];
				index=i+1;
			}
		}
		for(int i=0;i<n;i++)
		{
			if(cities[i]==min&&index-1!=i)
			{
				cout<<"Still Rozdil";
				break;
			}
			if(i==n-1)
			{
				cout<<index;
			}


		}


	return 0;
}



