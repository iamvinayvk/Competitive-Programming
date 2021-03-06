#include <bits/stdc++.h>
using namespace std;
#define maxsize 100100
int n;
vector<int> edges[maxsize];
vector<int> vertex_cover(maxsize, 0);
vector<int> visited(maxsize, 0);
 
void dfs(int current, int prev)
{
	visited[current] = 1;
	// leaf node, add its parent to vertex cover
	if(edges[current].size() == 1 and edges[current][0] == prev)
	{
		vertex_cover[prev] = 1;
		return;
	}
	// internal node
	for(auto u: edges[current])
	{
		if(!visited[u])
			dfs(u, current);
	}
	// check if any of the children are marked already
	int flag = 0;
	for(auto u: edges[current])
	{
		if(u != prev and vertex_cover[u] == 1)
			flag = 1;
	}
	// none of its children are marked, mark the current node
	if(flag == 0)
		vertex_cover[current] = 1;
}
int main() {
	// Fast I/O
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int i, u, v;
    cin>>n;
    for(i=1;i<n;i++)
    {
    	cin>>u>>v;
    	edges[u].push_back(v);
    	edges[v].push_back(u);
    }	
    dfs(1, 0);
    int count = 0;
    for(i=1;i<=n;++i)
    {
    	if(vertex_cover[i] == 1)
    		count++;
    	// cout<<i<<" "<<vertex_cover[i]<<"\n";
    }
    cout<<count<<"\n";
	return 0;
}