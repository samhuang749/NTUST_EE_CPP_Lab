#include<iostream>
using namespace std;
int num;
int main(){
	while(1){
		cout<<"�п�J�@�j��1���Ʀr�G";
		cin>>num;
		if(num<=1){
			cout<<"�Ʀr��J���~�A�бz���s��J\n";
			continue; 
		} 
		int i=0;
		int x=0;
		cout<<num<<"����"; 
		for(int i=2;i<=num;i++){
			bool dc=0;
			for(int x=2;x<i;x++){
				if(i%x==0){
					dc=1;
					break;
				}	
			}
			if(dc==0){
				while(1){
					if(num%i==0){
						num=num/i;
						cout<<i;
						if(num!=1){
							cout<<"*";
						}
					}
					else{
						break;
					}
				}
			}
		}
		cout<<endl;
		cout<<"�~���? (y/n)\n";
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
} 
