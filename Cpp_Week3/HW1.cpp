#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
	int score = 0;
	cout<<"�п�J�z�����Z�G ";
	cin>>score;
	if(score<0){
		cout<<"���Z����C��0��";
		return 0;
	}
	else if(score>100){
	 	cout<<"���Z����W�L100��";
	 	return 0;
	 }
	cout<<"�q�q�ݡA�z�����Z�PB�P�Ǧ��Z�����Y\n�п�J > �B < �B =\n";
	char compare;
	cin>>compare;
	if(compare=='<'||compare=='>'||compare=='='){
	}
	else{
		cout<<"��J���~";
		return 0;
	}
    srand(time(NULL));
	int B_score = rand()%100+1;
	if(score>B_score){
		if(compare=='>'){
			cout<<"�q���o\n�z��B�P�ǰ���\n"<<"B�P�Ǭ�"<<B_score<<"��"<<endl;
		}
		else{
			cout<<"�q���o\n"<<"B�P�Ǭ�"<<B_score<<"��\n"<<"���ӬO>��\n";
		}
	}
	else if(score<B_score){
		if(compare=='<'){
			cout<<"�q���o\n�z��B�P�ǧC��\n"<<"B�P�Ǭ�"<<B_score<<"��"<<endl;
		}
		else{
			cout<<"�q���o\n"<<"B�P�Ǭ�"<<B_score<<"��\n"<<"���ӬO<��\n";
		}
	}
	else if(score==B_score){
		if(compare=='>'){
			cout<<"�q���o\n�z�MB�P�ǦP��\n"<<endl;
		}
		else{
			cout<<"�q���o\n"<<"�z�̭ǦP��"<<"���ӬO=��\n";
		}
	}
	return 0;
}
