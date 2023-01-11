void makeGraph(vector<vector<int>>& edges, vector<vector<int>>& graph){
  int n = graph.size();
  for(int i=0; i<n-1; i++){
    graph[edges[i][0]].push_back(edges[i][1]);
    graph[edges[i][1]].push_back(edges[i][0]);
  }
  return;
}
