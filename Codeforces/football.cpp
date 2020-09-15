#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007



int main(){
	
		fast
		string one,two;
		int goal=0;
		w(t)
		{
			if(goal!=0)
			{
				cin>>one;
				if(one==two)
				{
					goal+=1;
				}
				else
					goal-=1;
			}
			else
			{
				cin>>two;
				goal=1;
			}
		}
		cout<<two;


	return 0;
}



