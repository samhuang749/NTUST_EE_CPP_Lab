#include<iostream>
using namespace std;
int main(){
	int i=0;
	int y=0;
	for(i=1;i<=10;i++){
		for(y=1;y<=9;y++){
			cout<<y<<"*"<<i<<"="<<i*y<<"\t";
		}
		cout<<endl;
	}
	return 0;
}
