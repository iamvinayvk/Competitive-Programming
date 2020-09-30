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
		int counter=0;
		int max_count=0;
		int done=0;
		for(int k=0;k<n;k++)
		{

			int i,j;
			cin>>i>>j;
			if(i==j)
			{
				counter++;
				if(counter>=3&&done==0)
			{
				max_count=counter;
				counter=0;
				done=1;
			}
			}

			else{
				counter=0;
			}
		}
		if(max_count>=3)
			cout<<"Yes";
		else
			cout<<"No";


	return 0;
}



