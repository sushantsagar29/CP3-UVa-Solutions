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
string s;

void swap(int a,int b){
	int temp = s[a];
	s[a] = s[b];
	s[b] = temp;
}

int main() {
	cin>>s;
	while(s!="#"){
		int loc = -1;
		for(int i=s.size()-1;i>0;i--){
			if((s[i]-'a')>(s[i-1]-'a')){
				loc = i-1;
				break;
			}
		}
		if(loc==-1)
			cout<<"No Successor"<<endl;
		else{
		    int minloc = loc+1;
		    int min = s[loc+1]-'a';
		    for(int i=loc+1;i<s.size();i++){
		        if(s[i]-'a'>s[loc]-'a' && s[i]-'a'<min){
		            min = s[i]-'a';
		            minloc = i;
		        }
		    }
			swap(loc,minloc);
			for(int i=loc+1;i<s.size()-1;i++){
				for(int j = loc+1;j<s.size()-1;j++){
					if((s[j]-'a')>(s[j+1]-'a'))
						swap(j,j+1);
				}
			}
			
			cout<<s<<endl;
		}
		cin>>s;
	}
	
	return 0;
}