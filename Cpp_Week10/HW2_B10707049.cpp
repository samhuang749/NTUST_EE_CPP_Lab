#include<iostream>
#include"HomeworkB.h"
using namespace std;
int global_int = 1234;
int main(){
	HomeworkB homeworkB(global_int);
	int input;
	cout<<"輸入更改值:";
	cin>>input;
	homeworkB.set(input);
	global_int = homeworkB.get();
	cout<<"更改為"<<global_int<<endl;
	return 0; 
}
