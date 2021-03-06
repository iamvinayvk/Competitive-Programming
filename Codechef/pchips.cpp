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

ll gcd(ll a, ll b)
{
	if(a==0)
		return b;
	return gcd(b%a,a);
}



int main(){
	
		fast
		w(t)
		{
			ll n;
			cin>>n;
			vi a(n);
			ll ans=INT_MAX;
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
			ll s=0;
			s=accumulate(all(a),s);

			for(int i=0;i<=s;i++)
			{
				vi b(n);
				b[0]=i;
				ll sum=0;
				sum=b[0];
				for(int j=1;j<n;j++)
				{
					b[j]=b[j-1]+1;
					sum+=b[j];
				}
				
				if(sum==s)
				{
					ll res=0;
					for(int j=0;j<n;j++)
					{
						if(b[j]<a[j])
						{
							res+=(a[j]-b[j]);
						}
					}
					ans=min(ans,res);
				}

			}
			if(ans!=INT_MAX)
			cout<<ans<<"\n";
		else
			cout<<"-1\n";
		}


	return 0;
}



