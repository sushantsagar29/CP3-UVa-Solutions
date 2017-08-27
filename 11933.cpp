#include<algorithm>
#include<cstdio>
#include<cstring>
#include<iostream>

using namespace std;

bool check(int n, int j){
    return n&(1<<j);
}

long int setBit(int z, int j){
    return z|(1<<j);
}


int main() {
    int n;
    while(cin>>n,n){
        long int  a=0 ,b=0;
        int counter = 0;
        for(int i=0;i<31;i++){
            if(check(n,i)){
                counter++;
                if(counter%2!=0)
                    a = setBit(a,i);
                else
                    b  = setBit(b,i);
            }
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
