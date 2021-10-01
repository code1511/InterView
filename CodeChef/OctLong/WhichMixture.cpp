#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long t;
	cin>>t;
	while(t--){
	    int A,B;
	    cin>>A;
	    cin>>B;
	    if(A>0 && B>0)
	     cout<<"Solution"<<endl;
	    if(A==0)
	     cout<<"Liquid"<<endl;
	    if(B==0)
	     cout<<"Solid"<<endl;
	}
	
	return 0;
}
