#include<iostream>
using namespace std;
int main(){
	int a[9][9];
for(int i=0;i<9;i++){
	for(int x=0;x<9;x++)
		a[i][x]=(i+1)*(x+1); 
}
for(int i=0;i<9;i++){
	for(int x=0;x<9;x++)
		cout<<x+1<<"*"<<i+1<<"="<<*(*(a+i)+x)<<"\t";
	cout<<endl;	
}	
system("pause");
return 0;
}
