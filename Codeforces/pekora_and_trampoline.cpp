/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 2/28/2021 8:23:41 PM
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

void add(vll& arr, int N, int lo, int hi, int val)
{
	arr[lo] += val;
	if (hi != N - 1)
	arr[hi + 1] -= val;
}
ll updateArray(vll& arr, int N)
{
	// convert array into prefix sum array
	for (int i = 2; i <N; i++)
	{

		arr[i] += arr[i - 1];
		// if(arr[i-1]<=0)
		// 	arr[i-1]=1;
		
	}
	ll sum=0;
	for(int i=1;i<N;i++)
	{
		if(arr[i]<=0)
			arr[i]=1;
		sum+=arr[i];
		cout<<arr[i]<<" :arr: i:"<<i<<"\n";
	}
	// cout<<sum<<":sum \n";
	return sum;

}

int main(){
	
		fast
		w(t)
		{
			ll n;
			cin>>n;
			vll a(n+5);
			ll sum=0;
			for(ll i=1;i<=n;i++)
			{
				cin>>a[i];
				sum+=a[i];
			}
			ll ans=0;
			int i=1;
			while(sum>n&&i<=n)
			{
				// while(a[i]==1)
				// 	i++;
				// if(i>n)
				// 	break;
				ll moving=a[i];
				ll index=i;
				while(index<=n)
				{
					if((moving+index)<=n)
					{
						add(a,n+1,index,moving+index,-1);
						
						sum-=(moving);
					}
					else
					{
						add(a,n+1,index,n,-1);
						sum-=(n-index);
					}

					index=(moving+index);
					// cout<<"main chala\n";
					if(index<=n)
					moving=a[index];
					else
					break;
				}
				// cout<<"manchala\n";
				ll sum1=updateArray(a,n+1);
				ans++;
				
			}
			cout<<ans<<'\n';

		}


	return 0;
}



