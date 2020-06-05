#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		vector<long long int> members_money(8);
		for(int i=0;i<members_money.size();i++)
		{
			long long int input;
			cin>>input;
			members_money[i]=input;
		}
		int pairs_conflict;
		cin>>pairs_conflict;
	
		for(int i=0;i<pairs_conflict;i++)
		{
			int input1,input2;
			cin>>input1>>input2;
			members_money[input1-1]<=members_money[input2-1]?members_money[input1-1]=0:members_money[input2-1]=0;
			
		}
		int sum=0;
		for(int i=0;i<8;i++)
		{
			sum+=members_money[i];
		}
		cout<<sum;


	return 0;
}



