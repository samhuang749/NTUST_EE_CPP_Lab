#include<iostream>
using namespace std;
int main(){
	int num1,num2,num;
	while(1){
		cout<<"�п�J�G��ơG"<<endl; 
		cin>>num1>>num2;
		if(num1<=0||num2<=0){
			cout<<"��J�Ʀr�ݤj��0"<<endl;
			continue;
		}
		int i=0;
		int final=1;
		if(num1>num2){
			num=num1;
		}
		else{
			num=num2;
		}
		cout<<num1<<"�P"<<num2<<"���̤p�����Ƭ�"; 
		for(i=2;i<=num;i++){
			bool x=0;
			while(num1%i==0||num2%i==0){
				switch(x){
					case 0:
						final=final*i;
					case 1:
						if(num1%i==0) 
							num1=num1/i;
						if(num2%i==0)
							num2=num2/i;
					break;	
				}
				
						
			}
		}
		cout<<final<<endl;
		cout<<"�аݱz�~���? (y/n)\n";
		char s_in;
		cin>>s_in;
		if(s_in=='Y'||s_in=='y'){
			continue;
		}
		else{
			if(s_in!='N'&&s_in!='n'){
				cout<<"��J���~�A�{������"<<endl; 
			}
			break;
		}
	}
	
	return 0;
}
