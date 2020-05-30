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
		cout<<"請輸入正整數"<<endl;
		cin>>a;
		if(a<1)cout<<"錯誤 麻煩輸入正整數"<<endl; 
	}while(a<1);
	cout<<x(a)<<endl;
	system("PAUSE");
	return 0;
}
