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
		int l1=0,l2=0,r1=0,r2=0;
		for(int i=0;i<n;i++)
		{
			int l,r;
			cin>>l>>r;
			if(l==0)
				l1++;
			if(r==0)
				r1++;
			if(l==1)
				l2++;
			if(r==1)
				r2++;
		}
		int ans=0;
		if(l1<l2)
		{
				ans+=l1;
		}

		else
			ans+=l2;
		if(r1<r2)
			ans+=r1;
		else
			ans+=r2;
		cout<<ans;


	return 0;
}



