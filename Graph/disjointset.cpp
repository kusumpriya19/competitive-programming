// disjoint set
// union by rank and path compression

//striver

int parent[100000];
int rank[100000];

void makeSet(){
    for(int i=0; i<=n; i++){
        parent[i] = i;  // every node is its own parent
        rank[i] = 0;
    }
}

// 7->6->4->3
int findPar(int node) {

    if(node == parent[node])
    return node;

    return parent[node] = findPar(parent[node]); // path compression
    //here we make the node directly point to its parent
}

void union(int u, int v){
    u = findPar(u);
    v = findPar(v);
    //in union we joint one subtree to another so we make sure we join the
    //smaller subtree to bigger subtree so the depth doesnt increase
    if(rank[u] < rank[v])
    parent[u] = v;
    else if(rank[u] > rank[v])
    parent[v]=u;
    else {
        parent[v]=u;
        rank[u]++;
    }
}

void main(){
    makeSet();
    int m;
    cin>>m;
    while(m--){
        int u,v;
        union(u,v);
        
        
    }
}
