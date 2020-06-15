#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		w(t)
		{
			int n,k;
			cin>>n>>k;
			long long int sum2=0;
			for(int i=0;i<n;i++)
			{
				int input;
				cin>>input;
				if(input>k)
				sum2+=(input-k);
				
			}
			cout<<sum2<<"\n";
		}


	return 0;
}



