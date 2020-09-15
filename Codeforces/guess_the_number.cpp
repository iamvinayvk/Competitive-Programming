#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		ll l=1,r=1e6;
		ll mid=l;
		while(l<r)
		{
			 mid=(l+r+1)/2;
			cout<<mid<<endl;
			string s;
			cin>>s;
			if(s=="<")
				r=mid-1;
			else
				l=mid;
		}
		cout<<"! "<<l<<endl;


	return 0;
}



