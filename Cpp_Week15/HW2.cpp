#include<iostream>
#include<fstream>
#include<String>
using namespace std;
int main(){
	fstream file;
	file.open("lottery.txt",fstream::in);
	if(!file.is_open()){
		cout<<"lottery.txt not found!\nDo HW1 first."<<endl;
		return 0;
	}
	string lottery_store;
	getline(file,lottery_store);
	file.close();
	file.open("result.txt",fstream::out);
	file<<"輸入號碼為：";
	int num_store[6]={-1};
	cout<<"請輸入6個介於1至20間的數字：";
	for(int i=0;i<6;i++){
		int k_in;
		do{
		cin>>k_in;
		if(k_in<1||k_in>20)
			cout<<"請輸入位於1至20間的整數"<<endl; 
		}while(k_in<1||k_in>20);
		file<<k_in<<" ";
		for(int x=0;x<lottery_store.length();x++){
			if(lottery_store[x]==' ')
				continue;
			else if((k_in==(int(lottery_store[x]-'0')*10+int(lottery_store[x+1]-'0')))&&lottery_store[x+1]!=' ')
				num_store[i]=k_in;	
			else if((k_in==int(lottery_store[x]-'0')&&lottery_store[x+1]==' '))
				num_store[i]=k_in;
			else if(lottery_store[x]!=' '&&lottery_store[x+1]!=' ')
				continue;
			else if(x+1==lottery_store.length())
				num_store[i]=-1;	
		}
	}
	file<<"\n中獎號碼為：";
	cout<<"中獎號碼為";
	for(int i=0;i<6;i++){
		if(num_store[i]>=1&&num_store[i]<=20){
			file<<num_store[i]<<" ";
			cout<<num_store[i]<<" ";
		}
	}
	cout<<endl;
	file.close();
	system("pause");
	return 0;
}
