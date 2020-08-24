#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		double n;
		cin>>n;
		double sum=0;
		for(int i=0;i<n;i++)
		{
			int k;
			cin>>k;
			sum+=k;
		}
		cout<<setprecision(12)<<fixed<<sum/n;


	return 0;
}



