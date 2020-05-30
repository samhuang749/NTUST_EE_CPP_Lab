#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
double letter_Capital[26]={0};
double letter_lower[26]={0};
int main(){
	string a;
	bool x=0;
	cout<<"請輸入字串:(只含英文字母)"<<endl;
	getline(cin,a);
	for(int i=0;i<a.length();i++){
		if(a[i]>='A'&&a[i]<='Z'){
			letter_Capital[a[i]-65]++;
			x=0;
		}
		else if(a[i]>='a'&&a[i]<='z'){
			letter_lower[a[i]-97]++;
			x=0;
		}
	}
	cout<<"\n\n大寫字母\t次數\t比例\t|\t小寫字母\t次數\t比例"<<setprecision(0)<<endl;
	for(int i=0;i<26;i++){
		cout<<char(i+65)<<"\t\t"<<letter_Capital[i]<<"\t"<<setprecision(3)<<static_cast<double>((letter_Capital[i]/a.length()))*100<<"%\t|\t";
		cout<<char(i+97)<<"\t\t"<<setprecision(0)<<letter_lower[i]<<"\t"<<setprecision(3)<<(letter_lower[i]/a.length())*100<<"%"<<endl;
	}
	system("pause");
	return 0;
}
