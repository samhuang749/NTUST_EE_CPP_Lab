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
		cout<<"請輸入正整數"<<endl;
		cin>>a;
		if(a<1)cout<<"錯誤 麻煩輸入正整數"<<endl; 
	}while(a<1);
	for(int i=0;i<=a;i++){
		cout<<"費式數列第"<<i<<"項為"; 
		cout<<x(i);
		cout<<endl;
	}
	system("PAUSE");
	return 0;
}
