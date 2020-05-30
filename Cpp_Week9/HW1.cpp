#include<iostream>
using namespace std;
bool Check_Num(char in_s[50]);
int main(){
	char a[50];
	char b[50];
	do{
		cout<<"請輸入兩個整數："<<endl;
		cin>>a;
		cin>>b;
	}while(Check_Num(a)==false||Check_Num(b)==false);
	cout<<"計算結果："<<endl; 
	int k=-1;
	int qq=0;
	for(int i=49;i>=0;i--){
			if(k==-1){
				if(a[i]!='\0'&&b[i]!='\0')
					k=0;
					qq=3;
				if(a[i]!='\0'){
					qq=1;
					for(int x=i;i>=0;x--){
						if(b[x]!='\0'){
							k=i-x;
							break;
						}
					}
				}
				
				else if(b[i]!='\0'){
					qq=2;
					for(int x=i;i>=0;x--){
						if(a[x]!='\0'){
							k=i-x;
							break;
						}
					}
				}
			}
		}
		for(int i=0;i<49;i++){
			switch(qq){
				case 0:
					break;
				case 1:
					if(i<k){
						cout<<a[i];
					}
					else{
						cout<<(int(a[i])+int(b[i-k])-96)%10;
					}
					break;
				case 2:
					if(i<k){
						cout<<b[i];
					}
					else{
						cout<<(int(b[i])+int(a[i-k])-96)%10;
					}
					break;
				case 3:
					if(i<k){
						cout<<b[i];
					}
					else{
						cout<<(int(b[i])+int(a[i-k])-96)%10;
					}
					break;
			}
			if(qq==1&&a[i+1]=='\0')
				break;
			if(qq==2&&b[i+1]=='\0')
				break;	
	}
	system("pause");
	return 0;
}

bool Check_Num(char in_s[50]){
	for(int i=0;i<50;i++){
		if(in_s[i]!='\0'&&in_s[i]<'0'&&in_s[i]>'9'){
			cout<<"請輸入整數!\n"<<endl;
			return false;
		}
	}
	return true;
}



