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
			vector<int> cum_1;
			int sum=0;
			
			for(int i=0;i<s.size();i++)
			{
				if(s[i]=='1')
				{
					sum+=1;
				}
				else if(s[i]=='0'&&sum>0)
				{	
					cum_1.push_back(sum);
					sum=0;
				}
				 if(i==s.size()-1)
				{
					cum_1.push_back(sum);
				}
			}
			int alice=0;
			sort(cum_1.begin(),cum_1.end());
			reverse(cum_1.begin(),cum_1.end());
			for(int i=0;i<cum_1.size();i+=2)
			{
				alice+=cum_1[i];
			}
			cout<<alice<<"\n";
			
		}


	return 0;
}



