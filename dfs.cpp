
vector <int> adj[1000];
bool visited[1000];

void dfs(int u){
	visited[u] = true;
	cout<<u<<" ";
	for(int v:adj[u]){
		if(!visited[v])
			dfs(v);
	}
}