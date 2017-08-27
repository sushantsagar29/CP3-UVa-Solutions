#include <bitset>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    while(scanf("%d %d", &n, &m),n||m){
        int check=0;
        bitset<1000001> tim;
        int startTime, endTime, interval;
        while(n--){
            scanf("%d %d", &startTime, &endTime);
            if(check!=1){
               for(int i=startTime;i<endTime;i++){
                    if(tim[i]==1){
                        check=1;
                        break;
                    }
                    tim[i] = 1;
                }
            }
        }
        while(m--){
            scanf("%d %d %d", &startTime, &endTime, &interval);
            if(check!=1){
                while(startTime<1000000){
                    for(int i=startTime;i<endTime;i++){
                        if(tim[i]==1){
                            check=1;
                            break;
                        }
                        tim[i] = 1;
                    }
                    if(check)
                        break;
                    startTime+=interval;
                    endTime = min(endTime+interval, 1000000+1);
                }
            }
        }
        if(check)
            printf("CONFLICT\n");
        else
            printf("NO CONFLICT\n");
    }
    return 0;
}
