#include <iostream>
using std::cout;
using std::endl;

int main(){
	int num=99;
	while(num != 0){
		if(num == 1){
			cout<<num<<" bottle of beer on the wall,"<<num<<" bottle of beer."<<'\n'
				<<"take one down,pass it around,"<<num-1<<" bottles of beer on the wall."<<'\n';
		}
		else if(num == 2){
			cout<<num<<" bottles of beer on the wall,"<<num<<" bottles of beer."<<'\n'
				<<"take one down,pass it around,"<<num-1<<" bottle of beer on the wall."<<'\n';
		}
		else{
			cout<<num<<" bottles of beer on the wall,"<<num<<" bottles of beer."<<'\n'
				<<"take one down,pass it around,"<<num-1<<" bottles of beer on the wall."<<'\n';
		}
		--num;
		cout<<endl;
	}
	return 0;
}
