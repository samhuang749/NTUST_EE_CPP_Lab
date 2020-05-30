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
	cout<<"A匡眔布计 "<<a<<"布  "<<"眔布瞯 "<<(a/total)*100.0<<"%\n"; 
	cout<<"B匡眔布计 "<<b<<"布  "<<"眔布瞯 "<<(b/total)*100.0<<"%\n"; 
	cout<<"C匡眔布计 "<<c<<"布  "<<"眔布瞯 "<<(c/total)*100.0<<"%\n"; 
	return 0;
}
