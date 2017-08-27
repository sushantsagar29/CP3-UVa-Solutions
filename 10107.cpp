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

int main(){
    long long int n;
    vector<long long int> arr;
    while(cin>>n){
        arr.push_back(n);
        sort(arr.begin(),arr.end());
        if(arr.size()%2!=0){
            cout<<arr[arr.size()/2]<<endl;
        }else{
            cout<<(arr[arr.size()/2]+arr[(arr.size()/2)-1])/2<<endl;

        }

    }
    return 0;
}
