#include<iostream>
using namespace std;
int main(){
	int *x = new int(5);
	int *y = new int(5);
	int *z = new int(5);
	cout<<*x<<endl;
	cout<<*y<<endl;
	cout<<*z<<endl;
	int ***a = new int**[*z];
	for(int i=0;i<*y;i++){
		*(a+i) = new int*[*y];
	}
	for(int i=0;i<*x;i++){
		*(*a+i) = new int[*x];
	}
	cout<<a<<" "<<a+4<<" "<<*a<<" "<<**a<<endl;
	for(int iz=0;iz<*z;iz++){
		for(int iy=0;iy<*y;iy++){
			for(int ix=0;ix<*x;ix++){
				*(*(*(a+iz)+iy)+ix)=ix*iy*iz;
				cout<<*(*(*(a+iz)+iy)+ix)<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
	}
	delete []a,x,y,z;	
	system("pause");
	return 0;
}
