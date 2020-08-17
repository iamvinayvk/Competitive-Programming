#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		int n,t;
		cin>>n>>t;
		string s;
		cin>>s;
		
		for(int i=0;i<t;i++)
		{	
			
			for(int j=0;j<n-1;j++)
			{
				if(s[j]=='B'&&s[j+1]=='G')
				{
					swap(s[j],s[j+1]);
					j++;
				}
			}
		}
		cout<<s;


	return 0;
}



