#include<iostream>
using namespace std;

int x(int num){
	if(num<=1)
		return num;
	if(num>=2){
		return x(num-1)+x(num-2);
	}
}
int main(){
	int a=0;
	do{
		cout<<"�п�J�����"<<endl;
		cin>>a;
		if(a<1)cout<<"���~ �·п�J�����"<<endl; 
	}while(a<1);
	for(int i=0;i<=a;i++){
		cout<<"�O���ƦC��"<<i<<"����"; 
		cout<<x(i);
		cout<<endl;
	}
	system("PAUSE");
	return 0;
}
