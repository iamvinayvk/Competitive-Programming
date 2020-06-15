#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		int n;
		cin>>n;
		int final_count=0;
		while(n--)
		{	int count=0;
			for(int i=0;i<3;i++)
			{
				int input;
				cin>>input;
				count+=input;

			}
			if(count>=2)
			{
				final_count+=1;;
			}
		}
		cout<<final_count;


	return 0;
}



