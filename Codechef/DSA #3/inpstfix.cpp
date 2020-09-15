#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007
int precise(char s)
{
	if(s=='^')
		return 3;
	else if((s=='/')||(s=='*'))
		return 2;
	else if((s=='-')||(s=='+'))
		return 1;
	else
		return -1;
}

string infixToRNP(string s)
{
	stack<char> t;
	t.push('0');
	string op;
	for(ll i=0;i<s.size();i++)
	{
		if((s[i]>='A')&&(s[i]<='Z'))
			op+=s[i];
		else if(s[i]=='(')
		{
			t.push(s[i]);
		}
		else if(s[i]==')')
		{
			while((t.top()!='0')&&(t.top()!='('))
			{
				op+=t.top();
				t.pop();
			}
			if(t.top()=='(')
			{
				t.pop();
			}
		}
		else
		{
			while((t.top()!='0')&&(precise(s[i])<=precise(t.top())))
			{
				op+=t.top();
				t.pop();
			}
			t.push(s[i]);
		}
	}
	while(t.top()!='0')
	{
		op+=t.top();
		t.pop();
	}
	return op;
}

int main(){
	
		fast
		w(t)
		{
			int n;
			cin>>n;
			string s;
			cin>>s;
			cout<<infixToRNP(s)<<"\n";
			// cout<<"1";
		}


	return 0;
}



