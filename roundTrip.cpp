#include<iostream>
#include<cmath>
#include<random>
#include<time.h>
#include<chrono>
#include<string.h>
#include<set>
#include <algorithm>

using namespace std;

// Title:     			  Round Trip
// Author(s):  			  Sebastian Aguilar
// Creation Date:		  01/16/26
// Last update:			  01/16/26
// Version:				  1.0.0



void dfs(int actual_node, int target_node,vector<vector<int>> &graph, vector<bool> &visited,vector <int> &path, vector <int> &final_path){
    if (final_path.size()> 0) return;
    if (actual_node==target_node && path.size()>3) {final_path=path; final_path.push_back(target_node);}

    if (visited[actual_node])   return;

    visited[actual_node]=true;
    path.push_back(actual_node);
    for (int n:graph[actual_node]){
        dfs(n,target_node,graph,visited,path,final_path);
    }
    path.erase(--path.end());

}

int main(){
    
    int cities,roads;
    cin>>cities>>roads;

    vector<vector<int>> graph(cities+1);
    vector<int> final_path;
    int node1,node2;
    while (roads--){
        cin>>node1>>node2;
        graph.at(node1).push_back(node2);
        graph.at(node2).push_back(node1);

    }
    while(cities){
        for(int n:graph.at(cities)){
            vector<bool> visited(graph.size(),false);
            vector<int> path;
            path.push_back(cities);
            visited.at(cities)=true;
            dfs(n,cities,graph,visited,path,final_path);
            path.push_back(cities);
            // for (int k:final_path) cout<<k<<"\t";
            // cout<<endl;
        }
        cities--;
    }
    for (int n: final_path){
        cout<<n<<"\t";
    }



    return 0;
}