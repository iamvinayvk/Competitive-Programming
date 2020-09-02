#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		w(t)
		{
			int n;
			cin>>n;
			vector<int> a(n);
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
			}
			int c=0,p1=0,p2=n-1;
			
				if(a[0]!=1)
					c=1;
				else{
					while(p1<p2)
					{
					 if(a[p1]!=a[p2])
						{c=1;
							break;
						}
						else if(a[p1]!=a[p1+1]&&a[p1]+1!=a[p1+1])
						{
							c=1;
							break;
						}
						p1++;
						p2--;
					}
					if(a[p1]!=7)
					{
						c=1;
					}

				}
				if(c)
					cout<<"no\n";
				else
					cout<<"yes\n";
			
		}


	return 0;
}



