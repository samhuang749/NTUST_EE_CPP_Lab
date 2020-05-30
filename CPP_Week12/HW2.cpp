#include<iostream>
#include<cstdlib>
using namespace std;
int a[5][5];
void getRandNum(void);
int main(int argc,char **argv){
	if(argc<3||argc>3){
		cout<<"輸入參數不完整，程式中止！"<<endl;
		return 0;
	}
	int num1=atoi(*(argv+1));
	int num2=atoi(*(argv+2));
	if(num1==num2){
		cout<<"輸入參數重複，程式中止！"<<endl;
		return 0;
	}
	cout<<"以下元素介於參數"<<num1<<"至"<<num2<<"之間"<<endl; 
	if(num2>num1)
		swap(num1,num2);
	getRandNum();
	for(int i=0;i<5;i++){
		for(int x=0;x<5;x++){
			if(a[i][x]<=num1&&a[i][x]>=num2)
				cout<<a[i][x]<<"位於第"<<i<<"行第"<<x<<"列"<<endl; 
		}
	}
	system("pause");
	return 0;
}
void getRandNum(void){
	srand(77);
	for(int i=0;i<5;i++){
		for(int x=0;x<5;x++)
			a[i][x]=(rand()%100)+1;
	}
}
