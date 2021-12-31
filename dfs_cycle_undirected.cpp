
bool dfs(int u , int p){
	visited[u] = true;
	for(int v : adj[u]){
		if(v == p){
			continue;
		}

		if(v!=p){
			if(visited[v] == 1){
				return true;
			}
			if(dfs(v,u)){
				return true;
			}
		}
	}
	return false;
}