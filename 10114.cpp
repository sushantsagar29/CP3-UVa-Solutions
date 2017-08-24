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
	int month;
	double down,loan;
	int ips;
	while(1){
	    cin>>month>>down>>loan>>ips;
	if(month<0)
    	return 0;
    double dep[month];
    fill(dep, dep + month, -1.0);
    int mon;
    double per;
    while(ips--){
        cin>>mon>>per;
        dep[mon] = per;
    }
    double total = down+loan;
    int monthly = loan/month;
    double depPer = dep[0];
    int i;
    for(i=0;i<month;i++){
        if(i)
            loan-=monthly;
        if(dep[i]!=-1)
            depPer = dep[i];
        total = total*(1-depPer);
        if(total>loan)
            break;
    }
    if(i==1)
        cout<<"1 month"<<endl;
    else
        cout<<i<<" months"<<endl;
	}
}