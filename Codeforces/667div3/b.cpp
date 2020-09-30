#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		w(t)
		{
			ll a,b,x,y,n;
			cin>>a>>b>>x>>y>>n;
			
			ll ans1=1e18,ans2=1e18;
			ll diffa=min(n,a-x);
			ll diffb=min(n-diffa,b-y);
			ans1=(a-diffa)*(b-diffb);
			diffb=min(n,b-y);
			diffa=min(n-diffb,a-x);
			ans2=((a-diffa)*(b-diffb));
			cout<<min(ans1,ans2)<<"\n";
					
		

		}


	return 0;
}



