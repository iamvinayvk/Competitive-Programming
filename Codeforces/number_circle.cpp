#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007
#define all(x) x.begin(),x.end()
#define F first
#define S second
#define vi vector<int> 
#define vll vector<long long>
#define FOR(start,end,increment) for(ll i=start;i<end;i+=increment)





int main(){
	
		fast
		int n;
		cin>>n;
		vll a(n);

		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(all(a));
		// vll e;
		// vll o;
		// for(int i=1;i<n;i++)
		// {
		// 	if(a[i]%2==0)
		// 		e.push_back(a[i]);
		// 	else
		// 		o.push_back(a[i]);
		// }
		// reverse(all(e));
		if(a[n-1]>=(a[n-2]+a[n-3]))
			cout<<"NO";
		else
		{
			cout<<"YES\n";
			cout<<a[n-1]<<" ";
			for(int i=n-3;i>=0;i--)
				cout<<a[i]<<" ";
			cout<<a[n-2]<<" ";
		}


	return 0;
}




