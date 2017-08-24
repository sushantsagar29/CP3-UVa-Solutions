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

struct soldier{
	int left;
	int right;
}fighter;

int main() {
	int s, b;
	while(cin>>s>>b,s||b){
		vector<soldier> soldiers(s+1);
		for(int i=1;i<=s;i++){
			fighter.left = i-1;
			fighter.right = i+1;
			soldiers[i] = fighter;
		}
		soldiers[s].right = 0;
		
		int l,r;
		
		while(b--){
			cin>>l>>r;
			int leftSoldier,rightSoldier;
			leftSoldier = soldiers[l].left;
			rightSoldier = soldiers[r].right;
			if(leftSoldier>0){
				soldiers[leftSoldier].right = soldiers[r].right;
				cout<<leftSoldier<<" ";
			}else
				cout<<'*'<<" ";
			if(rightSoldier>0){
				soldiers[rightSoldier].left = soldiers[l].left;
				cout<<rightSoldier<<endl;
			}else
				cout<<'*'<<endl;
		}
		cout<<'-'<<endl;
	}
	
	return 0;
}