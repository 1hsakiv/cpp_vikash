
unordered_map <int,int> father;
for(int i=1;i<=n;i++){
	father[i] = i;
}

int _find(int x){
	return x == father[x] ? x : father[x] = _find(father[x]);
}

void _union(int x ,int y){
	int fx = _find(x);
	int fy = _find(y);

	if(fx != fy){
		father[fy] = fx;
	}
}