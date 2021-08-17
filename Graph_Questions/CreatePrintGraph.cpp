#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

void add(vector<int>v[],int a,int b){
    v[a].push_back(b);
    v[b].push_back(a);
}

int main()
{
    int n=5;
    vector<int>v[n+1];
    add(v,1,2);
    add(v,2,4);
    add(v,1,3);
    add(v,3,5);
    add(v,3,4);
    for(int i=1;i<=n;i++){
        cout<<i<<" -- ";
        for(int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
        
    }
    return 0;
}
