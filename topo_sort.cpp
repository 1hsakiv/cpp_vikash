
stack <int> stk;
void dfs(int u){
	visited[u] = true;
	for(int v : adj[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
	stk.push(u);
}

int main(){
	memset(visited , -1 , sizeof(visited));
	for(int i=1;i<=n;i++){
		if(visited[i]){
			continue;
		}
		dfs(i);
	}
	while(!stk.empty()){
		cout<<stk.top()<<" ";
		stk.pop();
	}
	return 0;
}