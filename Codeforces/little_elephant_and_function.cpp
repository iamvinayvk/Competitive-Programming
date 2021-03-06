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
		for(int i=0;i<n;i++)
		{
			if(i==0)
				cout<<n<<" ";
			// else if(i==n-1)
			// 	cout<<n-1<<" ";
			else
				cout<<i<<" ";
		}


	return 0;
}



