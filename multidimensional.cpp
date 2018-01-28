#include <iostream>
using std::cout;
using std::endl;
#include <iterator>
using std::begin;
using std::end;

int main(){
	int value[3][3][3];
	int count=0;
	for(int (*position)[3][3]=begin(value);position != end(value);++position){
		for(int (*position2)[3]=begin(*position);position2 != end(*position);++position2){
			for(int *position3=begin(*position2);position3 != end(*position2);++position3){
				*position3=count;
				++count;
			}
		}
	}
	for(const auto &row:value){
		for(const auto &row2:row){
			for(auto element:row2){
				cout<<element<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
