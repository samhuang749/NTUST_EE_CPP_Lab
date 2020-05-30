#include<iostream>
using namespace std;

int x(int num){
	if(num<=1)
		return 1;
	else		
		return num*x(num-1);
}

int main(){
	int a,b;
	cout<<"請輸入A與B兩整數"<<endl;
	cin>>a>>b;
	cout<<x(a)/(x(a-b)*x(b))<<endl;
	system("PAUSE");
	return 0;
} 
