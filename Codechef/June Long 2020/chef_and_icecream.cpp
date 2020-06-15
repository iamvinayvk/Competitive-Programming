#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast

		w(t)
		{
			int n;
			cin>>n;
			int c=0;
			map<int,int> coins;
			for(int i=0;i<n;i++)
			{
				int input;
				cin>>input;
				coins[input]++;
				if(input==15&&coins[10]>0)
				{
					c+=1;
					
					coins[10]--;

				}
				else if(input==15&&coins[5]>1)
				{
					c+=1;
					coins[5]-=2;

				}
				else if(input==10&&coins[5]>0)
				{
					c+=1;
					coins[5]--;

				}
				else if(input==5)
				{
					c+=1;
				}
				
			}
			if(c==n)
			{
				cout<<"YES\n";
			}
			else{
					
					cout<<"NO\n";
					
				}

		}
			
			


		


	return 0;
}



