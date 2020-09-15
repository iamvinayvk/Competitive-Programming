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
			string s;
			cin>>s;
			
			
			ll l=0;
			int compiler=0;
			for(int i=0;i<s.size();i++)
			{
				if(s[i]=='<')
				{
					compiler++;
				}
				else
				{
					
					compiler--;
				}
				if(compiler==0)
					l=max(l,(ll)i+1);
				if(compiler<0)
					break;
			}
			
			cout<<l<<"\n";
		}


	return 0;
}



