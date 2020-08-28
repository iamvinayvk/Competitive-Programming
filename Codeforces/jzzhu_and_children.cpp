#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		int n,m;
		cin>>n>>m;
		int max=0,last=n;
		vector<int> a(n);
		
		for(int i=0;i<n;i++){
			cin>>a[i];
			a[i]=ceil((float)a[i]/m);

			if(a[i]>=max)
			{
				max=a[i];
							last=i+1;
			}
		}
		cout<<last;

	return 0;
}



