/*
    Problem Link : https://www.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1
*/

/*
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        vector<int> distance(V, INT_MAX);
        int source = S;
        distance[source] = 0;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>  minimumDistanceNodes;
        minimumDistanceNodes.push(make_pair(0, source));
        while(!minimumDistanceNodes.empty()) {
            pair<int,int> nearestNodeWithDistance = minimumDistanceNodes.top();
            minimumDistanceNodes.pop();
            int node = nearestNodeWithDistance.second;
            int nodeDistance = nearestNodeWithDistance.first;
            
            for(int i=0; i< adj[node].size(); i++) {
                vector<int> neighbourWithDistance = adj[node][i];
                int neighbour = neighbourWithDistance[0];
                int neighbourDistance = neighbourWithDistance[1];
                if(nodeDistance+neighbourDistance < distance[neighbour]) {
                    distance[neighbour] = nodeDistance+neighbourDistance;
                    minimumDistanceNodes.push(make_pair(distance[neighbour], neighbour));
                }
            }
        }
        
        return distance;
    }
*/