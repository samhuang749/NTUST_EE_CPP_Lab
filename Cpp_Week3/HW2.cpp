#include<iostream>
#include<string>
using namespace std;
int main(){
	string id;
	cout<<"請輸入您的學號： ";
    getline(cin,id);
    if(id.length()==9){
		if(id.substr(0,1)=="B"||id.substr(0,1)=="b"){
			 cout<<"您是大學生";
		}
		else if(id.substr(0,1)=="M"||id.substr(0,1)=="m"){
			cout<<"您是碩士生";
		}
		else{
			cout<<"學號格式錯誤\n大學生應為B、碩士生應為M";
		}
	}
	else{
		cout<<"學號格式錯誤\n學號應為一碼英文加上8碼數字";
	}
	return 0;
}
