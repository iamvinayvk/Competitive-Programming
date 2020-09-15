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
			ll n,k;
			cin>>n>>k;
			string a;
			cin>>a;
			
			int sum_k=0,index=0,c=1;
			for(int i=0;i<n;i++)
			{
				if(i%k==0&&i!=0)
				{
						if(sum_k!=k/2)
					{
						cout<<"NO\n";
						c=0;
						break;
					}
				
					sum_k-=(a[index]-'0');
					index++;
				}
				if(a[i]!='?')
				{
					sum_k+=(a[i]-'0');
				}
				else if(a[i]=='?')
				{
					if(sum_k<k/2)
					{
						a[i]='1';
						sum_k+=(a[i]-'0');
					}
					else
					{
						a[i]='0';
					}
				}
				// cout<<"sum_k: "<<sum_k<<"\n";
			}
				if(sum_k!=k/2&&c==1)
					{
						cout<<"NO\n";
						c=0;
						
					}
					else if(c)
				cout<<"YES\n";

		}


	return 0;
}


