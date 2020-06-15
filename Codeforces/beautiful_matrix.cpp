#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		int curr_i,curr_j;
		for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
				{
					int input;
					cin>>input;
					if(input==1)
					{
						curr_i=i;
						curr_j=j;
					}
				}
		}
		cout<<abs(2-curr_i)+abs(2-curr_j);


	return 0;
}



