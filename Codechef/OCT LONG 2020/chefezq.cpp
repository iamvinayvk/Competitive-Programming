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
		w(t)
		{
			ll n,k;
			cin>>n>>k;
			ll previous_day=0;
			ll days=-2;
			vll a(n);
			for(int i=0;i<n;i++)
			{
				ll input;
				cin>>input;
				a[i]=input;
				a[i]+=previous_day;
				if(a[i]<k&&(days==-2))
					days=i+1;
				a[i]-=k;
				previous_day=(a[i]>0)?(a[i]):0;
			}
			if(days!=-2)
			cout<<days<<"\n";
			else
			{
				cout<<((ll)a[n-1]/k)+n+1<<"\n";
			}
		}


	return 0;
}



