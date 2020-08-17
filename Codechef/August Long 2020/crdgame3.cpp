#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)



int main(){
	
		fast
		w(t)
		{
			int pc,pr;
			cin>>pc>>pr;
			int digitsc=ceil((float)pc/9);
			int digitsr=ceil((float)pr/9);
			if(digitsr<=digitsc)
			{
				cout<<"1 "<<digitsr<<"\n";
			}
			else{
				
				cout<<"0 "<<digitsc<<"\n";
			}

		}


	return 0;
}



