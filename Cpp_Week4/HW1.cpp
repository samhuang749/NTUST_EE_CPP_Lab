#include<iostream>
#include <cstdlib>
using namespace std;
int max_l,min_l,pass;
int main(){
	cout<<"終極密碼遊戲開始\n";
	while(1){
		cout<<"請輸入密碼下限： \n";
		cin>>min_l;
		cout<<"請輸入密碼上限： \n";
		cin>>max_l;
		if(max_l<=min_l){
			cout<<"輸入錯誤\n";
		}
		else{
			pass=rand() % (max_l - min_l + 1) + min_l;
			cout<<pass<<endl;
			int g_in;
			while(1){
				cout<<"請輸入您猜測的數字：" ;
				cin>>g_in;
				if(g_in<min_l||g_in>max_l){
					cout<<"您輸入的值並不在"<<min_l<<"到"<<max_l<<"之間\n"; 
					continue;
				}
				if(g_in!=pass){
					if(g_in<pass){
						min_l=g_in;
						cout<<"猜測錯誤喔！ 密碼範圍調整成"<<min_l<<"到"<<max_l<<"之間\n"; 
					}
					else if(g_in>pass){
						max_l=g_in;
						cout<<"猜測錯誤喔！ 密碼範圍調整成"<<min_l<<"到"<<max_l<<"之間\n"; 
					}
				}
				else{
					cout<<"猜對了，密碼是"<<pass<<endl; 
					break;
				}
			}	
		}
		cout<<"請問您繼續嗎? (y/n)\n";
		char s_in;
		cin>>s_in;
		if(s_in=='Y'||s_in=='y'){
			continue;
		}
		else{
			if(s_in!='N'&&s_in!='n'){
				cout<<"輸入錯誤，程式結束"<<endl; 
			}
			break;
		}
	}
}
