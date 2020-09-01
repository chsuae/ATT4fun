//
//  dfs_subtree.h
//  week0
//
//  Created by 徐嘉宏 on 1/9/2020.
//  Copyright © 2020 徐嘉宏. All rights reserved.
//

#ifndef dfs_subtree_h
#define dfs_subtree_h

#include <iostream>
#include <vector>
using namespace std;

extern vector<int> START;
extern vector<int> END;
extern vector<int> DFS_TRAV;
extern int TIME;

void dfs_subtree(int node, int par, vector<vector<int>>& tree);

void print_subtree(int node);

#endif /* dfs_subtree_h */
