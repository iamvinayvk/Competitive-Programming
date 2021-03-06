/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/8/2020 4:35:41 PM
  *
  */

#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define w(t) int t;cin>>t;while(t--)
#define mod 1000000007
#define all(x) x.begin(),x.end()
#define F first
#define S second
#define vi vector<int> 
#define vll vector<long long>
#define FOR(start,end,increment) for(ll i=start;i<end;i+=increment)

ll gcd(ll a, ll b)
{
	if(a==0)
		return b;
	return gcd(b%a,a);
}



int main(){
	
		fast
		w(t)
		{
			string s;
			cin>>s;
			unordered_set<string> sub;
			for(int i=0;i<s.size();i++)
			{
				string store="";
				ll count1=0,pos=0;
				for(int j=i;j<s.size();j++)
				{
					// string fake=s.substr(i,j);
					// cout<<"fake: "<<fake<<"\n";
					char curr=s[j];
					
					
					if(curr=='1')
					{
						count1++;
						if(count1==1)
						{
							store.insert(pos,"1");
							pos++;
						
						}

						else
							store.insert(store.end()-store.begin(),"1");


					}
					else
					{
						// cout<<"cout: "<<count1<<"\n";
						if(count1%2==0)
						{
							// cout<<store<<"\n";
							store.insert(0,"0");
							pos++;
						}
						else
						{
							// cout<<"pos: "<<pos<<"\n";
							store.insert(pos,"0");
						}
					}
					// cout<<store<<"\n";
					sub.insert(store);

				}
			}
			cout<<sub.size()<<"\n";
		}


	return 0;
}



