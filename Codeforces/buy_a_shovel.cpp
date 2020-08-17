#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		int k,r,ans=0;
		cin>>k>>r;
		for(int i=1;i<=10;i++)
		{
			if((k*i)%10==0)
			{
				ans=i;
				break;
			}
			else if((k*i)%10==r)
			{
				ans=i;
				break;
			}
		}
		cout<<ans;


	return 0;
}



