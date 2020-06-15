#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		w(t)
		{
			int n,m,k;
			cin>>n>>m>>k;
			int potential_cards=n/k;
			int reduced_points=0;
			int got_points=potential_cards;
			if(potential_cards>=m)
			{
				cout<<m<<"\n";
			}
			
			else{

				reduced_points=ceil((float)(m-potential_cards)/(k-1));
				if(got_points>=reduced_points)
				cout<<(got_points-reduced_points)<<"\n";
			else
				cout<<"0\n";
			}

		}


	return 0;
}



