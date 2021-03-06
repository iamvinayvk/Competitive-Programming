/*
                                                                     __..----._
                                                                 .--'          `-.
                                                               .'                 `\
                                                              /          \--.._____/
                                                            _/          .' ___    _|
                                                          ./  /\  _ _.-'     _`  (_\
                                                         /    \ \/. \       (_)  \  \
                                                        |      \ \:;             _)_/-.__._
                                                       |       |  \--'            | | | | .\
                                                       |       |   |  \         .=-\| | |/ |
                                                       |       |   | -.`-.      \\   \|\|  |
                                                       \       |  /     `-`-___.--`._      |
                                                        \      | /                   `\    |
                                                         |     //                      \   |
                                                         \    //                       |    \
                                                          \   /                        |\    \
                                                           \ /                         | \    \
                                                            `\                         | |     \
                                                             |                \        |\|
                                                             \                |        | \      \
                                                              |               |        |  )      \
                                                              \   /           |        | /       |
                                                               \  |           |        |/-._____/
                                                                |  \          |        |
                                                                \             \        |
                                                                 \   \         |       |
                                                                  \            \        \
                                                                   \  |         |       |
                                                                   |            |        \
                                                                 .'   |         |         \
                                                                /                \        |
                                                              .'\    /            \       `
                                                            .'   \  /             `        \        _______
                                                           /      `.               \       `   .---'       `\
                                                          /         `--.___        _\       \-'              \
                                                        .|                 `------'  \      `                 \
                                                       | |                            \      \          .---  |
                                                      /  \                             \     `        .'     /
                                                    .' `- \                           .-\     \    .-'     .'
                                                   /      /\                         /   \     \.-'      .'
                                                 _/      / `\                       /     \     \      .'
                                                /. `  ' `    \                    /'       \     \   .'
                                                U',-.-. /     `-                 /   .--.-' \     ``\..--.__
                                                 'UU(__)        `-.__         _.'   /        \        `\) )_)
                                                                     `-------'-.___| _-'    .-`-.   \ \/-'
                                                                                 _-'     .-'    `\_\_\'
                                                                            _.--'      .'
                                                                           ( `  ,.. .-'
                                                                            `'-Uuu-'
 
 
                                                           Bhosdike code dekhlo ab neche...   .<*_*>
*/
#include <algorithm>
#include <iostream>
#include <cstring>
#include <climits>
#include <cstdlib>
#include <cstdio>
#include <bitset>
#include <vector>
#include <cmath>
#include <ctime>
#include <queue>
#include <stack>
#include <map>
#include <set>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define vi vector<int>
#define fi first
#define se second
#define db double
#define U unsigned
#define P pair<int,int>
#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) x.begin(),x.end()
#define CLR(i,a) memset(i,a,sizeof(i))
#define fo(i,a,b) for(int i = a;i <= b;++i)
#define ro(i,a,b) for(int i = a;i >= b;--i)
#define DEBUG(x) std::cerr << #x << '=' << x << std::endl

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int a[3];
    for(int i=0;i<3;i++) 
     cin>>a[i];
      ll sum=a[0]+a[2]+a[1];
      int k=sum/9;
      bool t=false;
      if(a[0]-k>-1 && a[1]-k>-1 && a[2]-k>-1)
        t=true;
      if(sum%9==0 && t)
      cout<<"YES\n";
      else 
        cout<<"NO\n";
         
   

    
    }
    return 0;
}