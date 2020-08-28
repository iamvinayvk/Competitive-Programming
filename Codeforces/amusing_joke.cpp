#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		string s1,s2,s3;
		cin>>s1>>s2>>s3;
		map<char,int> m1;
		map<char,int> m2;
		for(int i=0;i<s1.size();i++)
			m1[s1[i]]++;
		for(int i=0;i<s2.size();i++)
			m1[s2[i]]++;
		for(int i=0;i<s3.size();i++)
			m2[s3[i]]++;
		int c=0;
		for(auto x:m2)
		{
			if(m1[x.first]!=x.second){
				c=1;
				break;
			}
		}
		for(auto x: m1)
		{
			if(m2[x.first]!=x.second)
			{
				c=1;
				break;
			}
		}
		if(c)
		{
			cout<<"NO";
		}
		else
			cout<<"YES";



	return 0;
}



