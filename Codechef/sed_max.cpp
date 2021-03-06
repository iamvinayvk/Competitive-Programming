#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<math.h>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    set<long long, greater<long long> > s1;
    long long n,p;
    bool flag=true;
    set<long long , greater<long long> >::iterator itr;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        s1.insert(p);
    }
    if(s1.size()>3)
        flag =false;
    if(s1.size()==3)
    {
        itr =s1.begin();
        if (*(itr+((long long)2+itr))%2==0)
        {
           if(*(itr+((long long)2+itr))/2==*((long long)1+itr))
           flag=true;
        }
        else
            flag=false;
    }
    if (flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}