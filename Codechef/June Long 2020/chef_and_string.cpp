#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		w(t)
		{
			string s;
			cin>>s;
			int count_x=0;
			int count_y=0;
			for(int i=0;i<s.size()-1;i++)
			{
				if(s[i]=='x'&&s[i+1]=='y')
				{
					count_x++;
					i++;
					continue;
				}
				else if(s[i]=='y'&&s[i+1]=='x')
				{
					count_y++;
					i++;
					continue;
				}
				
			}
			cout<<count_x+count_y<<"\n";
		}


	return 0;
}



