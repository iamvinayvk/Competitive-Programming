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
		int k;
		cin>>k;
		vi a(12);
		int sum=0;
		for(int i=0;i<12;i++)
		{
			cin>>a[i];
			
		}
		int count=0;
		sort(all(a));
		reverse(all(a));
		while(sum<k&&count<12)
		{
			sum+=a[count];
			count++;
		}
		if(count<12||sum>=k)
		cout<<(count);
		else 
			cout<<-1;


	return 0;
}



