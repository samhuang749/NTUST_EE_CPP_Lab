#include<iostream>
#include<string>
using namespace std;
int main(){
	string id;
	cout<<"�п�J�z���Ǹ��G ";
    getline(cin,id);
    if(id.length()==9){
		if(id.substr(0,1)=="B"||id.substr(0,1)=="b"){
			 cout<<"�z�O�j�ǥ�";
		}
		else if(id.substr(0,1)=="M"||id.substr(0,1)=="m"){
			cout<<"�z�O�Ӥh��";
		}
		else{
			cout<<"�Ǹ��榡���~\n�j�ǥ�����B�B�Ӥh������M";
		}
	}
	else{
		cout<<"�Ǹ��榡���~\n�Ǹ������@�X�^��[�W8�X�Ʀr";
	}
	return 0;
}
