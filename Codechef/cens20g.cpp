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
			map<char,int> s1;
			for(int i=0;i<s.size();i++) s1[s[i]]++;
			ll x1,y1;
			cin>>x1>>y1;
			ll q;
			cin>>q;
			while(q--)
			{	map<char,int> s2;
				ll x2,y2;
				cin>>x2>>y2;
				if((x2-x1)>0)
				{
					s2['R']=abs(x2-x1);
				}
				else if((x2-x1)<0)
				{
					s2['L']=abs(x2-x1);
				}
				if((y2-y1)>0)
				{
					s2['U']=abs(y2-y1);
				}
				else if((y2-y1)<0)
				{
					s2['D']=abs(y2-y1);
				}
				if((s2['R']<=s1['R'])&&(s2['L']<=s1['L'])&&(s2['U']<=s1['U'])&&(s2['D']<=s1['D']))
					cout<<"YES "<<(s2['R']+s2['L']+s2['U']+s2['D'])<<"\n";
				else
					cout<<"NO\n";
			}

		}


	return 0;
}



