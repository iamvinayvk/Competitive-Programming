#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int s=0,p=0;
		while(n!=0||m!=0)
		{
			if(n%2!=m%2)
			{
				s+=pow(2,p);
			}
			p++;
			n/=2;
			m/=2;
		}
		cout<<s<<endl;
	}
}