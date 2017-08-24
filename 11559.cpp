#include <iostream>
using namespace std;

int main() {
    int n,b,h,w;
	while(scanf("%d%d%d%d",&n,&b,&h,&w)==4){
	    int p,total,min=5000000;
	    while(h--){
	       int week = w;
	       cin>>p;
	       int a;
	       total = 5000000;
	       while(week--){
	           cin>>a;
	            if(a>=n){
	                total = n*p;
	            }
	       }
	       if((p*n)>b)
	        continue;
	       if(total<min)
	           min = total;
	    }
	    if(min==5000000)
	        cout<<"stay home"<<endl;
	    else
    	    cout<<min<<endl;
	}
	return 0;
}