#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
	double a,b,c;
	srand(time(NULL));
	a=rand();
	b=rand();
	c=rand();
	double total = (a+b+c)*1.0;
	cout<<"A�Կ�H�o���Ƭ� "<<a<<"��  "<<"�o���v�� "<<(a/total)*100.0<<"%\n"; 
	cout<<"B�Կ�H�o���Ƭ� "<<b<<"��  "<<"�o���v�� "<<(b/total)*100.0<<"%\n"; 
	cout<<"C�Կ�H�o���Ƭ� "<<c<<"��  "<<"�o���v�� "<<(c/total)*100.0<<"%\n"; 
	return 0;
}
