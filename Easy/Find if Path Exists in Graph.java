//https://leetcode.com/problems/find-if-path-exists-in-graph/description/
class PathFind{
    private int [] id;
    private int [] sz;
    public PathFind(int n){
        id  = new int[n];
        sz = new int[n];
        for(int i = 0;i<n;i++){
            id[i] = i;
            sz[i] = 1;
        }
    }
    private int root (int i){
        while(i != id[i]){
            id[i] = id[id[i]];
            i = id[i];
        }
        return i;
    }
    public void path(int [] arr){
        int i = root(arr[0]);
        int j = root(arr[1]);
        if (i==j) return;
        if(sz[i] < sz[j]){
            id[i] = j;
            sz[j] += sz[i];
        }
        else{
            id[j] = i;
            sz[i] += sz[j];
        }
    }
    public boolean connected(int p, int q){
        return (root(p) == root(q));
    }
}
class Solution {
    public boolean validPath(int n, int[][] edges, int source, int destination) {
        PathFind pf = new PathFind(n);

        for(int i=0;i<edges.length;i++){
            pf.path(edges[i]);
        }
        return (pf.connected(source, destination));
    }
}
