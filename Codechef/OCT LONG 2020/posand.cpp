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
// #define push_back pb

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
			int n;
			cin>>n;
			// vector<int> a;
			if(n==1)
			{
				cout<<"1\n";
			}
			else if((n&(n-1))==0)
			{
				cout<<"-1\n";
				continue;
			}
			
			else if(n>=3)
			{
				for(int i=3;i<=n;i++)
				{
					if(i==3)
					{
						cout<<"2 3 1 ";
						// a.push_back(2);
						// a.push_back(3);
						// a.push_back(1);


					}
					
					else
					{
						if((i&(i-1))==0)
						{
							cout<<i+1<<" "<<i<<" ";
							// a.push_back(i+1);
							// a.push_back(i);
							i++;
						}
						else
						{
							cout<<i<<" ";
							// a.push_back(i);
						}
					}

				}
				cout<<"\n";

			}
			// for(int i=0;i<a.size()-1;i++)
			// {
			// 	if((a[i]&a[i])==0)
			// 	{
			// 		cout<<"o aaya";
			// 		break;
			// 	}
			// 	cout<<(a[i]&a[i+1])<<" ";
			// }
			// cout<<"\n";
		}


	return 0;
}



