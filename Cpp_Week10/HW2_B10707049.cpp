#include<iostream>
#include"HomeworkB.h"
using namespace std;
int global_int = 1234;
int main(){
	HomeworkB homeworkB(global_int);
	int input;
	cout<<"��J����:";
	cin>>input;
	homeworkB.set(input);
	global_int = homeworkB.get();
	cout<<"��אּ"<<global_int<<endl;
	return 0; 
}
