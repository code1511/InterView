/*
first approach basic and very simple with O(n^2) time complexity
*/

#include <bits/stdc++.h>
using namespace std;
void rotate(vector<int>&v){
    int tmp=v[0];
    for(int i=1;i<v.size();i++){
    
        v[i-1]=v[i];
    }
    v[v.size()-1]=tmp;
}

void nrotation(vector<int>&v,int d){
    for(int i=0;i<d;i++){
        rotate(v);
    }
}
int main()
{
   vector<int>v={1,2,3,4,5,6,7};
   int n=v.size();
   
   for(auto i:v){
       cout<<i<<" ";
   }
   nrotation(v,4);
    cout<<"after rotation"<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}
/*
using O(N) extra space but the time complexity would be O(N) linear time
*/

#include <bits/stdc++.h>
using namespace std;
void nrotation(vector<int>&v,int d){
    vector<int>p(v.begin(),v.begin()+d);
    vector<int>q(v.begin()+d,v.end());
    q.insert(q.end(),p.begin(),p.end());
    v=q;
}
int main()
{
   vector<int>v={1,2,3,4,5,6,7};
   int n=v.size();
   
   for(auto i:v){
       cout<<i<<" ";
   }
   nrotation(v,4);
    cout<<"after rotation"<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}

/*
block reversal algorithm without space and most optimized approach
time- N-d+d+N
overall time -O(N)
space-O(1)
*/

#include <bits/stdc++.h>
using namespace std;
void nrotation(vector<int>&v,int d){
    reverse(v.begin(),v.begin()+d);
    reverse(v.begin()+d,v.end());
    reverse(v.begin(),v.end());
}
int main()
{
   vector<int>v={1,2,3,4,5,6,7};
   int n=v.size();
   
   for(auto i:v){
       cout<<i<<" ";
   }
   nrotation(v,4);
    cout<<"after rotation"<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}
