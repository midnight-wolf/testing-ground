#include <iostream>
using std::cout;
using std::endl;
#include <iterator>
using std::begin;
using std::end;

int main(){
	int value[]={1,2,3,4,5,6};
	int *value_position=begin(value);
	//type double was used to prevent the fractional-
	//part of the result to be truncated
	double sum=0,average=0;
	while(value_position != end(value)){
		sum+=*value_position;
		if(value_position == end(value)-1){
			average=sum/(end(value)-begin(value));
		}
		++value_position;
	}
	cout<<average<<endl;
	return 0;
}
