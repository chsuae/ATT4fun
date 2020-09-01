//
//  dfs_subtree.cpp
//  week0
//
//  Created by 徐嘉宏 on 1/9/2020.
//  Copyright © 2020 徐嘉宏. All rights reserved.
//

#include <stdio.h>
#include "dfs_subtree.h"

void dfs_subtree(int node, int par, vector<vector<int>>& tree){
    
    START[node] = TIME;
    TIME++;
    DFS_TRAV.push_back(node);
    
    vector<int> neighbor = tree[node];
    
    for(auto child: neighbor){
        if(child!=par){
            dfs_subtree(child, node, tree);
        }
    }
    END[node] = TIME;
};

void print_subtree(int node){
    
    int time_start = START[node];
    int time_end = END[node];
    
    cout << "Subtree of node" << node << " is/are: ";
    
    for (int i=time_start; i<time_end; i++)
        cout << DFS_TRAV[i] << " ";
    cout << endl;
    
};
