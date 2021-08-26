// question link https://leetcode.com/problems/flood-fill/
class Solution {
public:
    void fun(vector<vector<int>>& v, int x, int y, int newC,int prevC){
        if(x<0 || x >=v.size() || y<0 || y>=v[0].size()){
            return;
        }
        if(v[x][y]!=prevC ){
            return;
        }
        if(v[x][y]==newC)
            return ;
        v[x][y]=newC;
        fun(v,x+1,y,newC,prevC);        
        fun(v,x-1,y,newC,prevC);
        fun(v,x,y+1,newC,prevC);
        fun(v,x,y-1,newC,prevC);
        
    }
    vector<vector<int>> floodFill(vector<vector<int>>& v, int x, int y, int newC) {
        
        int prevC=v[x][y];
        if(prevC==newC)
            return v;
        fun(v,x,y,newC,prevC);
        return v;
    }
};
