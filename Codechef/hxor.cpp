/**
  *
  * @Author     : Vinay Kushwaha (iamvinayvk)
  *
  * @DateTime   : 12/6/2020 1:04:17 PM
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
// void initialize()  
// {    
//     // To initially generate the  
//     // table algorithmically  
//     BitsSetTable256[0] = 0;  
//     for (int i = 0; i < 256; i++) 
//     {  
//         BitsSetTable256[i] = (i & 1) +  
//         BitsSetTable256[i / 2];  
//     }  
// } 
// int countSetBits(int n)  
// {  
//     return (BitsSetTable256[n & 0xff] +  
//             BitsSetTable256[(n >> 8) & 0xff] +  
//             BitsSetTable256[(n >> 16) & 0xff] +  
//             BitsSetTable256[n >> 24]);  
// } 
int setBitNumber(int n) 
{ 
  
    // To find the position 
    // of the most significant 
    // set bit 
    int k = (int)(log2(n)); 
  
    // To return the the value 
    // of the number with set 
    // bit at k-th position 
    return (int)pow(2,k); 
}

int main(){
	
		fast
		w(t)
		{
			ll n,x;
			cin>>n>>x;
			vll a(n);
			// cout<<(1<<2)<<"\n";
			vector<vector<ll>> bitsarray(33);
			for(int i=0;i<n;i++)
			{
				cin>>a[i];
				for(int j=0;j<32;j++)
				{
					if((a[i]&(1<<j))&&i!=n-1&&i!=0)
					{
						// bitsarray[j]+=(pow(2,j));
						bitsarray[j].push_back(i);
						// cout<<i<<" "<<j<<"\n";
					}

				}
			}
			// for(int i=0;i<32;i++)
			// {
			// 	cout<<i<<"\n";
			// 	for(int j=0;j<bitsarray[i].size();j++)
			// 	{
			// 		cout<<"bitsarray: "<<bitsarray[i][j]<<"j: "<<j<<" ";
			// 	}
			// 	cout<<"\n";
			// }
			vector<ll> fre(33);
			int i;
			for(i=0;i<n-1;i++)
			{
				
				// ll countBits=__builtin_popcount(a[i]);
				// cout<<"countBits: "<<countBits<<"\n";
					// ll msb_i=setBitNumber(a[i]);
					// cout<<"MSB: "<<msb_i<<"\n";
					for(int j=31;j>=0;j--)
					{
						// if(fre[j]<bitsarray[j].size())
						// cout<<"bitsarray[j][fre[j]]: "<<bitsarray[j][fre[j]]<<"a[i]: "<<a[i]<<" j:"<<j<<"fre[j]: "<<fre[j]<<"\n";
						while((fre[j]<bitsarray[j].size())&&(bitsarray[j][fre[j]]<=i))
							fre[j]++;
						if((a[i]&(1<<j))&&(fre[j]<bitsarray[j].size())&&(bitsarray[j][fre[j]]>i))
						{
							// cout<<j<<"\n";
							// cout<<"msb_i: "<<msb_i<<"\n";
							// cout<<"fre[j]: "<<fre[j]<<"\n";
							// cout<<"j: "<<j<<"\n";
							a[bitsarray[j][fre[j]]]^=(1<<j);
							a[i]^=(1<<j);
							// msb_i=setBitNumber(a[i]);
							fre[j]++;
							x--;
							// cout<<"a[i]: "<<a[i]<<"\n";
							// cout<<"a[j]: "<<a[bitsarray[j][fre[j]]]<<"\n";
							// countBits--;
			// 					for(int i=0;i<n;i++)
			// 	cout<<a[i]<<" ";
			// cout<<"\n";
						}


						if(x==0)
							break;
					}
					ll count=__builtin_popcount(a[i]);
					if(count<=x)
					{
						a[n-1]^=a[i];
						a[i]=0;
						x-=count;
					}
					else if(count>x&&x>0)
					{
						int msb_i;
						while(x>0&&a[i]>0)
						{
							msb_i=setBitNumber(a[i]);
							a[i]^=msb_i;
							a[n-1]^=msb_i;
							x--;
						}
					}
			// 		cout<<"x: "<<x<<"\n";
			// 		for(int i=0;i<n;i++)
			// 	cout<<a[i]<<" ";
			// cout<<"\n";
				if(x==0)
					break;
			}
			if(x>0&&(x%n==1))
			{
			// 	cout<<"x: "<<x<<"\n";
			// 			for(int i=0;i<n;i++)
			// 	cout<<a[i]<<" ";
			// cout<<"\n";
				a[n-1]^=1;
				a[n-2]^=1;
			}

			for(int i=0;i<n;i++)
				cout<<a[i]<<" ";
			cout<<"\n";

			

		}


	return 0;
}



