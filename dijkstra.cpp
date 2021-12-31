

vector <pair<int,int>> adj[10000];

void dijkstra(int src){
	dist[src] = 0;
	priority_queue <pair<int,int>,vector<pair<int,int>> , greater<pair<int,int>>> pq;
	pq.push({0,src}); // (distance , node)
	while(!pq.empty()){
		pair <int,int> curr = pq.top();
		pq.pop();
		int u = curr.second;
		int d = curr.first;
		if(visited[u]) continue;
		visited[u] = true;

		for(pair <int,int> next : adj[u]){
			int v = next.first;
			int w = next.second;
			if(dist[v] > dist[u] + w){
				dist[v] = dist[u] = w;
				pq.push({dist[v],v});
			}
		}
	}
}