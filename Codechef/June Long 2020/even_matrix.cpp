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
			if(n%2!=0)
			{	int count=0;
				
				for(int i=0;i<n;i++)
				{
					for(int j=0;j<n;j++)
					{
						cout<<++count<<" ";
					}
					cout<<"\n";
				}
			}
			else{
				int count=0;
				
				for(int i=0;i<n;i++)
				{   if(i%2==0)
					{
					for(int j=0;j<n;j++)
					{   
						
						cout<<++count<<" ";
					    
					}
				}
				else{
					count=count+n;
					for(int j=0;j<n;j++)
					{   
						
						cout<<count--<<" ";
					    
					}
					count=count+n;


				}

					cout<<"\n";
				
				}

			}
		}


	return 0;
}



