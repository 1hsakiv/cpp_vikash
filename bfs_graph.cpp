
vector <int> adj[10000];
bool visited[10000];

void bfs(int src){
	queue <int> q;
	q.push(src);
	int lvl = -1;
	while(!q.empty()){
		++lvl;
		int sz = q.size();
		while(sz--){
			int curr = q.front();
			visited[curr] = true;
			q.pop();
			cout<<curr<<" ";
			for(int v : adj[curr]){
				if(!visited[v]){
					q.push(v);
				}
			}
			cout<<"\n";
		}
	} 
	cout<<lvl<<endl;
}