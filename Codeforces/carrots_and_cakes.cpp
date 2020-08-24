#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		int n,t,k,d;
		cin>>n>>t>>k>>d;
		int t1=0,t2=0;
		t1=ceil((float)n/k)*t;
		
		if((d+t)<t1)
		{
			cout<<"YES";
		}
		
		else
			cout<<"NO";


	return 0;
}



