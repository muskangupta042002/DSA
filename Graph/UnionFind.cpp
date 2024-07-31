#include <bits/stdc++.h>
using namespace std;

vector<int> parent;

int find(int v){
    if(parent[v]==-1){
        return v;
    }
    return find(parent[v]);
}

void union_op(int fromP, int toP){
    fromP=find(fromP);
    toP=find(toP);
    parent[fromP]=toP;
}

bool isCyclic(vector<pair<int,int>>& edge_list){
    for(auto p: edge_list){
        int fromP = find(p.first);
        int toP = find(p.second);

        if(fromP == toP){
            return true;
        }
        union_op(fromP, toP);
    }
    return false;
}

int main() {
    int e;
    int v;
    cin>>e>>v;
    parent.resize(v,-1);
    vector<pair<int,int>> edge_list;
    for(int i=0;i<e;i++){
        int u, v;
        cin>>u>>v;
        edge_list.push_back({u,v});

    }

    if(isCyclic(edge_list)){
        cout<<"TRUE\n";
    }
    else{
        cout<<"FALSE\n";
    }
    return 0;
}
