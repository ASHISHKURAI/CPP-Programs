

// print pattern

// a b c d e
// a b c d e
// a b c d e 
// a b c d e 
// a b c d e


#include<iostream>
using namespace std;

int main(){
	
	int row;
	char name;
	
	for (int row=1;row<=5;row++){
	//	char name = 'a'+col-1;
		for (char col='a';col<='e';col++){
			cout<<col<<" ";
		}
		
		cout<<endl;
	}
}
