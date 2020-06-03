#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)


int main(){

		fast
		w(t)
		{
			string n;
			cin>>n;
			int divisor=1;
			int count=0;
			int array[10000];
			int j=0;
			for(int i=n.length()-1;i>=0;i--)
			{	divisor*=10;
				if(((int)n[i]-'0')%divisor==0)
				{
					continue;
				}

				array[j]=(((int)(n[i]-'0'))*divisor)/10;
				count++;
				j++;

				n[i]='0';


			}
			cout<<count<<"\n";
			for(int i=0;i<j;i++)
			{
				cout<<array[i]<<" ";
			}
			cout<<"\n";

		}


	return 0;
}



