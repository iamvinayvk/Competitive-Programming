#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007
#define all(x) x.begin(),x.end()
#define F first
#define S second
#define vt(x) vector<x> 
#define FOR(start,end,increment) for(ll i=start;i<end;i+=increment)




int main(){
	
		fast
		int n,m;
		cin>>n>>m;
		int count=0;
		for(int i=0;i<=n+m;i++)
		{
			for(int j=0;j<=n+m;j++)
			{
				// cout<<"i: "<<i<<" j: "<<j<<" "<<(i<<1)+j<<" "<<(j<<1)+i<<"\n";
				if((((i*i)+j==n)&&((j*j)+i)==m))
					count++;
			}
		}
		cout<<count;


	return 0;
}



