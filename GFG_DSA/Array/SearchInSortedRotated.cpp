//aroach one
/*
very childish approach do linear traversal and return the index
time -O(N)
space- O(1)
*/

#include <bits/stdc++.h>
using namespace std;
int search_Rot(vector<int>&v,int ser){
    //do linear search
    for(int i=0;i<v.size();i++){
        if(v[i]==ser)
          return i+1;
    }
    return -1;
}
int main()
{
   vector<int>v={4,5,6,7,1,2,3};
   int n=v.size();
   for(auto i:v){
       cout<<i<<" ";
   }
   
   int p =search_Rot(v,6);
   cout<<"element found at "<<p;
    return 0;
}

