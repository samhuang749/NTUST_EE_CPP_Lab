#include<iostream>
using namespace std;

int x(int num){
	if(num<=1)
		return 1*3;
	else
		return num*(num+2)+x(num-1);
}

int main(){
	int a;
	do{
		cout<<"�п�J�����"<<endl;
		cin>>a;
		if(a<1)cout<<"���~ �·п�J�����"<<endl; 
	}while(a<1);
	cout<<x(a)<<endl;
	system("PAUSE");
	return 0;
}
