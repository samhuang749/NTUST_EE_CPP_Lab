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
	cout<<"�п�JA�PB����"<<endl;
	cin>>a>>b;
	cout<<x(a)/(x(a-b)*x(b))<<endl;
	system("PAUSE");
	return 0;
} 
