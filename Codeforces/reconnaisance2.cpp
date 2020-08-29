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
		int min=999999,i1=0,i2=0;
		vector<int> a(n);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{	

			
				if(i==n-1)
				{
					if(abs(a[0]-a[n-1])<min)
					{
						min=abs(a[0]-a[n-1]);
						i1=1;
						i2=n;
					}
				}
					else if(abs(a[i]-a[i+1])<min)
					{
						min=abs(a[i]-a[i+1]);
						i1=i+1;
						i2=i+2;
					}

					
		}
		cout<<i1<<" "<<i2;


	return 0;
}



