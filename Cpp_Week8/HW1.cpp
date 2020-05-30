#include<iostream>
#include<String>
using namespace std;
int main(){
	string inString;
	cout<<"請輸入一句英文： ";
	getline(cin,inString);
	bool mode;
	int count_word = 0;
	for(int i=0;i<=inString.length();i++){
		switch(mode){
			case 0:
				if((inString.substr(i,1)>="A"&&inString.substr(i,1)<="Z")||(inString.substr(i,1)>="a"&&inString.substr(i,1)<="z")){
					mode++;	
					count_word++;	
				}
				break;
			case 1:
				if(inString.substr(i,1)<"A"||(inString.substr(i,1)>"Z"&&inString.substr(i,1)<"a")||inString.substr(i,1)>"z")
					mode=0;
				break;	
		}
	}
	cout<<"\n"<<count_word<<"個單字"<<endl; 
	system("pause");
	return 0;
}
