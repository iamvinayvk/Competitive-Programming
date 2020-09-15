#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		string s;
		cin>>s;
		
		stack<int> t;
		t.push(-1);
		
		for(int i=0;i<s.size();i++)
		{
			if(s[i]=='(')
			{
				t.push(-1);
			}
			else if(s[i]==')')
			{
				int x=0;
				while(t.top()!=-1)
				{
					x+=t.top();
					t.pop();
				}
				t.pop();
				t.push(x);
			}
			else if(s[i]>='2'&&s[i]<='9')
			{
				int x=(t.top()*(s[i]-'0'));
				t.pop();
				t.push(x);
			}
			else if(s[i]=='C')
			{
				t.push(12);
			}
			else if(s[i]=='O')
				t.push(16);
			else if(s[i]=='H')
				t.push(1);



		}
		int mass=0;
		while(t.top()!=-1)
		{
			mass+=t.top();
			t.pop();
		}
		cout<<mass;


	return 0;
}



