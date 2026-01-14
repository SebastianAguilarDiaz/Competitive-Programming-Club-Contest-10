#include<iostream>
#include<cmath>
#include<random>
#include<time.h>
#include<chrono>
#include<string.h>
#include<set>
#include <algorithm>

using namespace std;

// Title:     			  Is it a tree
// Author(s):  			  Sebastian Aguilar
// Creation Date:		  01/13/26
// Last update:			  01/13/26
// Version:				  1.0.0



void dfs(vector<vector<int>> &edges, vector<bool> &visited, int node, vector <int> &path){
    if (visited.at(node))   return;

    visited.at(node)=true;
    // path.push_back(node);
    // for(int n:path){
    //     cout<<n<<" ";
    // }
    // cout<<endl;

    for(int n:edges.at(node)){
        dfs(edges, visited, n, path);
    }
    // path.erase(--path.end());
}

int main(){
    vector <int> path;

    int number_of_nodes,number_of_edges;

    cin>>number_of_nodes>>number_of_edges;

    vector <bool> visited(number_of_nodes,false);


    if (number_of_edges+1!=number_of_nodes){

        cout<<"NO";
        return 0;
    }

    vector <vector<int>> edges(number_of_nodes);

    int node1,node2;

    while (number_of_edges--){
        cin>>node1>>node2;
        node1--;
        node2--;
        edges.at(node1).push_back(node2);
        edges.at(node2).push_back(node1);




    }
    dfs(edges, visited, 0, path);
    for(bool n:visited){
        if (!n) {
            cout<<"NO"<<endl;
            return 0;
        }

    };
    cout<<"YES";


    return 0;
}