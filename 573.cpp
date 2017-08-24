​​#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	double height,up,down,factor;
	while(1){
	    cin>>height>>up>>down>>factor;
	    if(height==0)
    	    return 0;
		
		double fatigue = (factor*up)/100.0;
		double currHeight = 0;
		int day = 0;
		
		while(1){
			day++;
			currHeight+=up;
			if(currHeight>height){
				cout<<"success on day "<<day<<endl;
				break;
			}
			
			currHeight-=down;
			if(currHeight<0){
				cout<<"failure on day "<<day<<endl;
				break;
			}
			up-=fatigue;
			if(up<0)
				up = 0;
		}
	}
}