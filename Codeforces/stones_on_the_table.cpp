#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		int n;
		cin>>n;
		string s;
		cin>>s;
		char previous;
		int s_to_c=0;
		for(int i=0;i<n;i++)
		{
			if(i>0&&previous==s[i])
			{
				s_to_c++;
			}
			previous=s[i];
		}
		cout<<s_to_c;


	return 0;
}



