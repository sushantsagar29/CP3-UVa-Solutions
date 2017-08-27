#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

struct car{
    int id;
    int arrival;
}foo;


int main() {
    int c;
    cin>>c;
    while(c--){
        int capacity, timeTaken, m;
        cin>>capacity>>timeTaken>>m;
        queue<car> left;
        queue<car> right;
        int currTime = 0;
        int currBank = 0;//left bank
        int i=0;
        while(m--){
            int arrivalTime;
            string side;
            cin>>arrivalTime>>side;
            if(side == "left"){
                foo.id=i;
                foo.arrival = arrivalTime;
                left.push(foo);
                i++;
            }
            else{
                foo.id=i;
                foo.arrival = arrivalTime;
                right.push(foo);
                i++;
            }
        }
        vector<int> answer(i);
        while(!left.empty() || !right.empty()){
            int nextTime = 0;
			if (left.empty())
				nextTime = right.front().arrival;
			else if (right.empty())
                nextTime = left.front().arrival;
			else
                nextTime = min(left.front().arrival,right.front().arrival);

            currTime = max(currTime,nextTime);

            int loop = capacity;
            if(currBank==0){//on left bank
                while(loop--){
                    if(!left.empty() && left.front().arrival<=currTime){
                        answer[left.front().id] = currTime+timeTaken;
                        left.pop();
                    }else{
                        break;
                    }
                }
            }else{//on right bank
                while(loop--){
                    if(!right.empty() && right.front().arrival<=currTime){
                        answer[right.front().id] = currTime+timeTaken;
                        right.pop();
                    }else{
                        break;
                    }
                }
            }
            currBank^=1;
            currTime+=timeTaken;
        }
        for(int k=0;k<answer.size();k++){
            cout<<answer[k]<<endl;
        }
        if(c)
            cout<<endl;
    }
	return 0;
}
