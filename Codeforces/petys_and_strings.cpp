#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		string s1,s2;
		cin>>s1>>s2;
		transform(s1.begin(),s1.end(),s1.begin(),::tolower);
		int c=0;
		transform(s2.begin(),s2.end(),s2.begin(),::tolower);
		for(int i=0;i<s1.size();i++)
		{
			if(s1[i]<s2[i])
			{
				c=-1;
				break;
			}
			else if(s1[i]>s2[i])
			{
				c=1;
				break;
			}
		}
		cout<<c;


	return 0;
}



