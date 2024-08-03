//given qn :
//There are n pupils in Uolevi's class, and m friendships between them. 
//Your task is to divide the pupils into two teams in such a way that no two pupils in a team are friends. 
//You can freely choose the sizes of the teams.
//Input :
//The first input line has two integers n and m: the number of pupils and friendships.
//Then, there are m lines describing the friendships. Each line has two integers a and b: pupils a and b are friends.
//Every friendship is between two different pupils. You can assume that there is at most one friendship between any two pupils.
//output :
//Print an example of how to build the teams. For each pupil, print "1" or "2" depending on to which team the pupil will be assigned. You can print any valid team.
//If there are no solutions, print "IMPOSSIBLE".



/////////////////////////////Main logic of the code://////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////
//first we will create a graph to solve this qn.
//In this graph we connect nodes directly to all its friends.we create adjacency list for graph.
//Now we create an array which stores the team no for each node.
//first we take starting node if not visited give  team 1 to it now push it to the queue.
//Now we take the front element and push all its unvisited neighbours to the queue by assigning opp team to the front team. 
//If the neighbour is already visited check it is opposite to the team at the front of the queue.
//if not thenit is not possible to divide the peoplem into two teams satisfying this condition.


#include <bits/stdc++.h>
using namespace std;








int main(){
    int n, m;
    cin >> n >> m; // Read number of nodes and edges

    vector<int> adjlist[n + 1]; // Create an adjacency list for the graph
    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b; // Read each edge
        adjlist[a].push_back(b); // Add b to the adjacency list of a
        adjlist[b].push_back(a); // Add a to the adjacency list of b
    }

    bool found = true; // Variable to check if the graph is bipartite
    vector<int> visited(n + 1, 0); // Vector to keep track of visited nodes and their colors

    for(int i = 1; i < n + 1; i++) {
        if(visited[i] == 0) { // If the node is not visited
            queue<int> q;
            visited[i] = 1; // Start start assigning the node with team 1
            q.push(i); // Push the node to the queue

            while(!q.empty()) {
                int pp = q.front();
                q.pop(); // Pop a node from the queue

                for(auto it : adjlist[pp]) { // Traverse all adjacent nodes
                    if(visited[it] == 0) { // If the adjacent node is not visited
                        if(visited[pp] == 1) { visited[it] = 2; } // assign node with opposite team.
                        if(visited[pp] == 2) { visited[it] = 1; }
                        q.push(it); // Push the adjacent node to the queue
                    }
                    if(visited[it] != 0) { // If the adjacent node is visited
                        if(visited[pp] == visited[it]) { found = false; break; } // Check for the same team.
                    }
                }
            }
        }
    }

    if(found) { // If such div is possible
        for(int i = 1; i < n + 1; i++) { cout << visited[i] << " "; } // Print the teams
        cout << endl;
    }
    if(!found) { cout << "IMPOSSIBLE" << endl; } // If such div is not possible.
}
