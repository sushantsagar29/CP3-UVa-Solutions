#include <iostream>
using namespace std;

int check (int x,int X){
    if(x-X>0){//right
        return 1;
    }else if(x-X<0){//left
        return -1;
    }else
        return 0;
}

int main() {
    int k;
    scanf("%d",&k);
    while(k>0){
        int X,Y;
        scanf("%d%d",&X,&Y);
        int x,y,xR,yR;
        while(k--){
            scanf("%d%d",&x,&y);
            if(y-Y>0){//upper
                xR = check(x,X);
                cout<<((xR>0)?"NE":(xR<0)?"NO":"divisa")<<endl;
            }else if(y-Y<0){//lower
                xR = check(x,X);
                cout<<((xR>0)?"SE":(xR<0)?"SO":"divisa")<<endl;
            }else{
                cout<<"divisa"<<endl;
            }
        }
        scanf("%d",&k);
    }
	return 0;
}