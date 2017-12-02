#include <iostream>
using std::cout;
using std::endl;

int value=1;
int main(){
	int value=7;
	int *pointer_to_global_value=&::value;
	int *pointer_to_block_value=&value;
	int *&reference_to_global_pointer=pointer_to_global_value;
	int *&reference_to_block_pointer=pointer_to_block_value;
	cout<<*pointer_to_global_value<<endl;
	cout<<*pointer_to_block_value<<endl;
	cout<<'\n';
	cout<<*reference_to_global_pointer<<endl;
	cout<<*reference_to_block_pointer<<endl;
	return 0;
}
