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
			ll n,k;

			cin>>n>>k;
			string s;
			cin>>s;
			ll score=0;
			int flag=0;
			int j=0;
			vll losses;
			int loss=0;
			int start_loss=0;
			int end_loss=0;
			int N=n;
			for(int i=s.size()-1;i>=0;i--)
			{
				if(s[i]=='W')
				{
					n=i+1;
					break;
				}
				end_loss++;
				if(i==0)
				{
					n=0;
				}
			}

			for(int i=0;i<n;i++)
			{
				if(s[i]=='W')
				{
					j=i;
					break;

				}
				start_loss++;
				if(i==n-1)
				{
					j=n;
				}
			}
			for(int i=j;i<n;i++)
			{
				if(s[i]=='W')
				{
					if(flag==0)
					{
						score+=1;

					}
					else
						score+=2;
					flag=1;

				}
				else
				{
					
				
					if(flag)
					{
						if(loss!=0)
						losses.push_back(loss);
						loss=0;
						flag=0;

					}
					loss++;
					
					
				}
				if(i==n-1)
					{
						losses.push_back(loss);
					}
			}
			// cout<<"sore: "<<score<<"\n";
			// for(int i=0;i<losses.size();i++)
			// {
			// 	cout<<losses[i]<<" ";
			// }
			// cout<<"\n";
			sort(all(losses));
			for(int i=0;i<losses.size();i++)
			{
				if(k==0)
				{
					break;
				}
				else if(losses[i]<=k&&losses[i]!=0)
				{
					score+=(2*losses[i]);
					score++;
					k-=losses[i];
				}
				else if(losses[i]!=0)
				{
					score+=(2*k);
					k=0;
				}

			}
			if(k>0)
			{
				if(end_loss>=k)
				{

					score+=(2*k);
					k=0;
					if(end_loss==N)
						score--;
				}
				else
				{
					score+=(2*end_loss);
					k-=end_loss;
				}
			}
			if(k>0)
			{
				if(start_loss>k)
				{
					score+=(2*k);
					k=0;

				}
				else
				{
					score+=(2*start_loss);
					
				}
			}

			cout<<score<<"\n";

		}


	return 0;
}



