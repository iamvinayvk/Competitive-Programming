#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		int n,k;
		cin>>n>>k;
		char s[k+5];
		char inc='a';
		for(int i=0;i<k;i++)
		{
			s[i]=inc;
			inc++;
		}
		for(int i=0;i<n;i++)
		{
			cout<<s[i%k];
		}


	return 0;
}



