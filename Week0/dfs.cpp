//
//  dfs.cpp
//  code
//
//  Created by 徐嘉宏 on 1/9/2020.
//  Copyright © 2020 徐嘉宏. All rights reserved.
//

#include "dfs.h"

void dfs(int node, bool visited[], vector<vector<int>>& graph){
    if (visited[node]) return;
    
    visited[node] = true;
    
    vector<int> neighbors = graph[node];
    for(auto next_node: neighbors){
        // do sth
        dfs(next_node, visited, graph);
    }
}
