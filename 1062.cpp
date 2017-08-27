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


int main() {
    string container;
    int testCase = 0;
    while(1){
        cin>>container;
        vector<char> stacks;
        if(container=="end")
            break;
        testCase++;
        for(int i=0;i<container.length();i++){
            if(stacks.size()==0)
                stacks.push_back(container[i]);
            else{
                char minC = 'Z';
                int minLoc = -1;
                for(int j=0;j<stacks.size();j++){
                    if((stacks[j])-'A' >= container[i]-'A' && (stacks[j])-'A' <= minC-'A'){
                        minC = stacks[j];
                        minLoc = j;
                    }
                }
                if(minLoc == -1)
                    stacks.push_back(container[i]);
                else
                    stacks[minLoc] = container[i];
            }
        }
        cout<<"Case "<<testCase<<": "<<stacks.size()<<endl;
    }
	return 0;
}
