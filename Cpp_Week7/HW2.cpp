/*
B10707049 
C++ Week7 Homework B
*/ 
#include<iostream>
using namespace std;
int num=0;
int al=0;
void PrintAll(int x){
	for(int i=0;i<x;i++){
		cout<<"* ";
	}
	cout<<endl;
}
void PrintPoint(int x){
	for(int i=0;i<x;i++){
		if(i==(x-1)/4||i==((x-1)/2)+(x-1)/4){
			cout<<'*';
		}
		else{
			cout<<' ';
		}
	}
	cout<<endl;
}
int main(){
	do{
		cout<<"輸入寬度(int*2-1): ";
		cin>>num;
		if(num<1)
			cout<<"輸入寬度太小 無法顯示"<<endl; 
		else 
			num=(num*2)-1;	
	}while(num<1);	
	al=num*2-1;
	char a[al]={"*"};
	PrintAll(num);
	for(int i=0;i<al;i++){
		if(i==1||i==al-2||i==num||i==num-2)
			a[i]='*';
		else
			a[i]=' ';	
	}
	for(int i=0;i<al;i++){
		cout<<a[i];
	}
	cout<<endl;
	for(int i=0;i<((num+1)/2)-3;i++){
		swap(a[1+i],a[2+i]);
		swap(a[num-i-3],a[num-i-2]);
		swap(a[num+1+i],a[num+i]);
		swap(a[al-2-i],a[al-i-3]);
		for(int i=0;i<al;i++){
			cout<<a[i];
		}
		cout<<endl;
	}
	PrintPoint(al);
	for(int i=0;i<((num+1)/2)-3;i++){
		swap(a[1+i],a[2+i]);
		swap(a[num-i-3],a[num-i-2]);
		swap(a[num+1+i],a[num+i]);
		swap(a[al-2-i],a[al-i-3]);
		for(int i=0;i<al;i++){
			cout<<a[i];
		}
		cout<<endl;
	}
	for(int i=0;i<al;i++){
		if(i==1||i==al-2||i==num||i==num-2)
			a[i]='*';
		else
			a[i]=' ';	
	}
	for(int i=0;i<al;i++){
		cout<<a[i];
	}
	cout<<endl;
	for(int i=0;i<al;i++){
		if(i==0||i==al-1||i==(al-1)/2)
			cout<<"*";
		else
			cout<<" ";	
	}
	cout<<endl;
	system("pause");
	return 0;
}
