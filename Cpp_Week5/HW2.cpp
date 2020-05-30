#include<iostream>
using namespace std;
int a[3][3]={0};
int num=0;
int main(){
	cout<<"請輸入行列式："<<endl;
	int i,y,z;
	for(i=0;i<3;i++){
		for(y=0;y<3;y++){
			cout<<"a"<<i+1<<y+1<<"= ";
			cin>>a[i][y]; 
		}
		
	} 
	for(i=0;i<=2;i++){
		int a1,b1;
		a1=i+1;
		b1=i+2;
		if(a1==2)
			b1=0;
		if(i==2){
			a1=0;
			b1=1;
		}	
		num+=(a[0][i]*a[1][a1]*a[2][b1]);
	}
	for(i=0;i<=2;i++){
		int a1,b1;
		a1=i+1;
		b1=i+2;
		if(a1==2)
			b1=0;
		if(i==2){
			a1=0;
			b1=1;
		}	
		num-=a[2][i]*a[1][a1]*a[0][b1];
	}
	//Print
	for(i=0;i<3;i++){
		cout<<"|\t";
		for(y=0;y<3;y++){
			cout<<a[i][y]<<"\t"; 
		}
		if(i==1){
			cout<<"|\t= "<<num<<"\n";
		}
		else
			cout<<"|\n";
	} 
	return 0;
}
