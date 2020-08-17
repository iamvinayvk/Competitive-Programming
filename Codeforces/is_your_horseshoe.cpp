#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		int s[4];
		cin>>s[0]>>s[1]>>s[2]>>s[3];
		int times=0;
		map<int,int> m;
		for(int i=0;i<4;i++)
		{
			m[s[i]]++;
			if(m[s[i]]>1)
			{
				times++;
			}
		}
		cout<<times;



	return 0;
}



