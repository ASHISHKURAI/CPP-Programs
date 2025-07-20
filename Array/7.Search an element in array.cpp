#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
		int N ,x;
	cin>>N>> x;
	
	int A[N];
	for(int i=0;i<N;i++){
	    cin>>A[i];
	}
	
	for(int i=0;i<N;i++){
	    if(x==A[i]){
	        cout<<"YES";
	        return 0;
	    }
	}
	cout<<"NO";

}

