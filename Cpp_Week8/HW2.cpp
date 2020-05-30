#include<iostream>
#include<String>
using namespace std;
int main(){
	string inString;
	cout<<"請輸入一句英文： ";
	getline(cin,inString);
	cout<<endl;
	for(int i=(inString.length()-1);i>=0;i--){
		if(((inString.substr(i,1)>="A"&&inString.substr(i,1)<="Z")||(inString.substr(i,1)>="a"&&inString.substr(i,1)<="z"))&&i>0){
			int k = 0;
			while((inString.substr(i-k,1)>="A"&&inString.substr(i-k,1)<="Z")||(inString.substr(i-k,1)>="a"&&inString.substr(i-k,1)<="z")){
				k++;
				if(i-k<=0)
					break;
			}
			
			for(int y=i-k;y<=i;y++){
				if((inString.substr(y,1)>="A"&&inString.substr(y,1)<="Z")||(inString.substr(y,1)>="a"&&inString.substr(y,1)<="z"))	
					cout<<inString.substr(y,1);
			}
			i=i-k+1;
		}
		else{
			cout<<inString.substr(i,1);
		}
	}
	cout<<endl;
	system("pause");
	return 0; 
}
