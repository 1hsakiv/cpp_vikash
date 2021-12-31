

int main(){
	// minimum spanning tree
	int cost = 0;
	vector <pair<int,pair<int,int>>> edges;
	sort(edges.begin(),edges.end());
	for(int i=0;i<edges.size();i++){
		int x = edges[i].second.first;
		int y = edges[i].second.second;
		int wt = edges[i].first;

		if(fx != fy){
			father[fy] = fx;
		}
		else{
			cost += wt;
		}
	}
}