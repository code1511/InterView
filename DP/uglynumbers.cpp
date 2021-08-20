class Solution {
public:
    int check(int a,int b){
        while(a%b==0){
            a=a/b;
        }
        return a;
    }
    bool isUgly(int n) {
        if(n==0) return false;
        n = check(n,2);        
        n = check(n,3);
        n = check(n,5);
       
     return (n==1)?1:0;
    }
};
