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
		vt(int) a(n);
		FOR(0,n,1)
		{
			cin>>a[i];
		}
		sort(all(a));
		int value=0;
		FOR(0,n,1)
		{
			if(a[i]<0&&i<m)
			{
				value+=(abs(a[i]));
			}
			else
				break;
		}
		cout<<value;





	return 0;
}



