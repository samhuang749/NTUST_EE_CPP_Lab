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
	file<<"��J���X���G";
	int num_store[6]={-1};
	cout<<"�п�J6�Ӥ���1��20�����Ʀr�G";
	for(int i=0;i<6;i++){
		int k_in;
		do{
		cin>>k_in;
		if(k_in<1||k_in>20)
			cout<<"�п�J���1��20�������"<<endl; 
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
	file<<"\n�������X���G";
	cout<<"�������X��";
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
