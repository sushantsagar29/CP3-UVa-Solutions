#include <iostream>
using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b;
        scanf("%d%d",&a,&b);
        cout<<((a>b)?'>':(a<b)?'<':'=')<<endl;
    }
	return 0;
}