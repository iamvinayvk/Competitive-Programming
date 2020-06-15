#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		w(t)
		{
			int n,m;
			cin>>n>>m;
			int a=n,b=m;
			
			for(int i=0;i<n;i++)
			{int c=0;
				for(int j=0;j<m;j++)
				{
					int input;
					cin>>input;
					if(input==1)
					{
						
						c=1;
					}
				}
				if(c==1)
					{
						a--;
						b--;
						
					}

			}
			 if(min(a,b)%2==0)
			{
				cout<<"Vivek\n";
			}
			else{
				cout<<"Ashish\n";
			}
		}


	return 0;
}



