#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		int n;
		cin>>n;
		int days=0;
		vector<int> p_per_w(7);
		for(int i=0;i<7;i++)
			cin>>p_per_w[i];
		while(n>0)
		{
			days++;
			if(days==8)
				days=1;
			n-=p_per_w[days-1];
			

		}
		cout<<days;



	return 0;
}



