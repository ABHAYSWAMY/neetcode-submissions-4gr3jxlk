class Solution {
private:
    int N;
    vector<vector<int>> graph;
    vector<bool> visited;
    int count = 0;
    void dfs(int vertex){
        visited[vertex]=true;
        for(auto child : graph[vertex]){
            if(visited[child]) continue;
            dfs(child);
        }
    }
    
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        graph.resize(n);
        visited.assign(n, false); 
        for(int i=0;i<edges.size();i++){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        for(int i=0;i<n;i++){
            if(!visited[i]){
                dfs(i);
                count++;
            }
        }
    return count;
    }
};
