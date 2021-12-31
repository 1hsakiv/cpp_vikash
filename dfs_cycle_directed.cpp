
bool dfs(int u){
	visited[u] = 1;
	for(int v : adj[u]){
		if(visited[v] == 1){
			return true;
		}
		if(visited[v] == 0){
			if(dfs(v)){
				return true;
			}
		}
	}
	visited[u] = 2;
	return false;
}