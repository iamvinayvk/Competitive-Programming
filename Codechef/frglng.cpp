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
			vector<string> s(n);
			for(int i=0;i<n;i++)
			{
				cin>>s[i];
			}
			int c=0;
			for(int i=0;i<k;i++)
			{
				int numbers;
				cin>>numbers;
				for(int i=0;i<numbers;i++)
				{
					string s1;
					cin>>s1;
					for(int i=0;i<n;i++)
					{
						if(s1==s[i])
						{
							s[i]="YES";
						}

					}
				}
			}
			for(int i=0;i<n;i++)
			{
				// cout<<s[i]<<"\n";
				cout<<(s[i]=="YES"?"YES":"NO")<<" ";
			}
			cout<<"\n";
		}


	return 0;
}



