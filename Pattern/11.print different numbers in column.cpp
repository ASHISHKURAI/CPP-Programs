// print pattern 
// 1 2 3 4 5 
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5

#include <iostream>
using namespace std;

int main(){
	
	int row,column;
	
	for (int row=1;row<=5;row++){
		for (int col=5;col>=1;col--){
			
			cout<<col<<" ";
		}
		cout<<endl;
	}
	
}
