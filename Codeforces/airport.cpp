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
		int n,m;
		cin>>n>>m;
		// cout<<"IMRUNNING\n";
		vi seats(m);
		for(int i=0;i<m;i++)
			cin>>seats[i];
		int minimum_profit=0,maximum_profit=0;
		sort(all(seats));
		int passengers=0;
		int j=0;
		// cout<<"IMRUNNING\n";
		while(passengers<n)
		{	
			if(seats[j]<=n-passengers)
			{
			minimum_profit+=(seats[j]*(seats[j]+1)/2);
			passengers+=seats[j];
			}
			else
			{
				minimum_profit+=((seats[j]*(seats[j]+1)/2)-((seats[j]-(n-passengers))*(seats[j]-(n-passengers)+1)/2));
				passengers=n;
			}
			j++;
		}
		passengers=0;
		reverse(all(seats));
		int i=0;
		// cout<<"passengers "<<passengers<<" \n";
		// for(int j=0;j<m;j++)
		// {
		// 	cout<<seats[j]<<" ";
		// }
		// cout<<"\n";
		while(passengers<n)
		{
			if(seats[i]>0)
			{
				// cout<<seats[i]<<"\n";
			maximum_profit+=(seats[i]);
			seats[i]--;
			passengers++;
			}
			sort(all(seats));
			reverse(all(seats));
			

		}
		cout<<maximum_profit<<" "<<minimum_profit;


	return 0;
}



