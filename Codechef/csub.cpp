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
			int n;
			cin>>n;
			string s;
			cin>>s;
			int ones=0;
			for(int i=0;i<n;i++)
			{
				if(s[i]=='1')
					ones++;

			}
			cout<<(ones*(ones+1))/2<<"\n";
		}


	return 0;
}



