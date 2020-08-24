#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		ll n;
		cin>>n;
		ll lucky=0;
		while(n>0)
		{
			if (n%10==4||n%10==7)
			{
				lucky++;
			}
			n=n/10;
		}
		if(lucky==4||lucky==7)
			cout<<"YES";
		else
			cout<<"NO";


	return 0;
}



