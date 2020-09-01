//
//  main.cpp
//  code
//
//  Created by 徐嘉宏 on 1/9/2020.
//  Copyright © 2020 徐嘉宏. All rights reserved.
//
#include <iostream>
#include "dfs.h"
#include "dfs_subtree.h"
using namespace std;

vector<int> START(100000,-1);
vector<int> END(100000,-1);
vector<int> DFS_TRAV;
int TIME = 0;

/*
int main(int argc, const char * argv[]) {
    
    vector<vector<int>> graph; // graph example in slide
    
    vector<int> node_0{1,2}; graph.push_back(node_0);
    vector<int> node_1{0}; graph.push_back(node_1);
    vector<int> node_2{0,3}; graph.push_back(node_2);
    vector<int> node_3{2,4,5}; graph.push_back(node_3);
    vector<int> node_4{3,5}; graph.push_back(node_4);
    vector<int> node_5{3,4,6}; graph.push_back(node_5);
    vector<int> node_6{5}; graph.push_back(node_6);
    
    bool visited[7] = {}; // initialized 0
    
    dfs(3,visited,graph);
    
    for (int i=0; i<7; i++){
        if (visited[i]) cout << "Node " << i << ": visited" << endl;
    }
    
    return 0;
}
*/

int main(int argc, const char * argv[]) {
    
    vector<vector<int>> tree; // graph example in slide
    
    vector<int> node_0{1,2,3}; tree.push_back(node_0);
    vector<int> node_1{0}; tree.push_back(node_1);
    vector<int> node_2{0,4,5,6}; tree.push_back(node_2);
    vector<int> node_3{0,7}; tree.push_back(node_3);
    vector<int> node_4{2}; tree.push_back(node_4);
    vector<int> node_5{2}; tree.push_back(node_5);
    vector<int> node_6{2}; tree.push_back(node_6);
    vector<int> node_7{3}; tree.push_back(node_7);
    
    dfs_subtree(0,-1,tree);
    
    for (int i=0; i<8; i++)
        print_subtree(i);
    
    return 0;
}

