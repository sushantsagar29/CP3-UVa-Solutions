#include <iostream>
#include <algorithm>
using namespace std;

void print(int state){
	if(state<0){
		state*=-1;
		cout<<'-';
	}
	else
		cout<<'+';
		
	char w[4] = {'o','x','y','z'};
	cout<<w[state]<<endl;
	return;
}


int main() {
	int n;
	cin>>n;
	while(n!=0){
		n--;
		int state = 1;
		while(n--){
			char ip[3];
			scanf("%s",ip);
			if(ip[0]=='N')
				continue;
			int curr;
			if(ip[0]=='+'){
				if(ip[1]=='x')
					curr = 1;
				else if(ip[1]=='y')
					curr = 2;
				if(ip[1]=='z')
					curr = 3;
			}else{
				if(ip[1]=='x')
					curr = -1;
				else if(ip[1]=='y')
					curr = -2;
				if(ip[1]=='z')
					curr = -3;
			}
			
			if(state==1 || state==-1)
				state*=curr;
			else if(state==2 || state==-2){
				if(curr==3 || curr==-3)
					state = state;
				else{
					state = (state*curr)/-4;
				}
			}
			else if(state==3 || state==-3){
				if(curr==2 || curr==-2)
					state = state;
				else{
					state = (state*curr)/-6;
				}
			}
		}
		print(state);
		cin>>n;
	}
}