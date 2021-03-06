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
			ll n,x,p,k;
			cin>>n>>x>>p>>k;
			vll a(n);
			int flag=1;
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
				if(a[i]==x)
					flag=0;
			}
			sort(all(a));
			if(flag==1)
			{
				a[k-1]=x;


			}
			sort(all(a));
			auto upper=(upper_bound(all(a),x));
			int upper1=(upper-a.begin());
			auto lower=(lower_bound(all(a),x));
			int lower1=(lower-a.begin());
			lower1+=1;
						
			// cout<<"upper1: "<<upper1<<" lower1: "<<lower1<<"\n";

			 if(x==a[p-1])
			{
				cout<<flag<<"\n";
			}
			// else if(k==p)
			// 	cout<<"1\n";
			
			else
			{
				if((a[p-1]>x)&&(k<p))
				{
					cout<<"-1\n";
				}
				else if((a[p-1]<x)&&(k>p))
				{
					cout<<"-1\n";
				}
				else if((a[p-1]>x)&&(k>=p))
					cout<<abs(upper1-p)+flag<<"\n";
				else if((a[p-1]<x)&&(k<=p))
					cout<<abs(lower1-p)+flag<<"\n";
			}



		}


	return 0;
}



