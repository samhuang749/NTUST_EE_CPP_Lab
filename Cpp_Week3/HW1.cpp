#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
	int score = 0;
	cout<<"請輸入您的成績： ";
	cin>>score;
	if(score<0){
		cout<<"成績不能低於0分";
		return 0;
	}
	else if(score>100){
	 	cout<<"成績不能超過100分";
	 	return 0;
	 }
	cout<<"猜猜看，您的成績與B同學成績之關係\n請輸入 > 、 < 、 =\n";
	char compare;
	cin>>compare;
	if(compare=='<'||compare=='>'||compare=='='){
	}
	else{
		cout<<"輸入錯誤";
		return 0;
	}
    srand(time(NULL));
	int B_score = rand()%100+1;
	if(score>B_score){
		if(compare=='>'){
			cout<<"猜對囉\n您比B同學高分\n"<<"B同學為"<<B_score<<"分"<<endl;
		}
		else{
			cout<<"猜錯囉\n"<<"B同學為"<<B_score<<"分\n"<<"應該是>喔\n";
		}
	}
	else if(score<B_score){
		if(compare=='<'){
			cout<<"猜對囉\n您比B同學低分\n"<<"B同學為"<<B_score<<"分"<<endl;
		}
		else{
			cout<<"猜錯囉\n"<<"B同學為"<<B_score<<"分\n"<<"應該是<喔\n";
		}
	}
	else if(score==B_score){
		if(compare=='>'){
			cout<<"猜對囉\n您和B同學同分\n"<<endl;
		}
		else{
			cout<<"猜錯囉\n"<<"您們倆同分"<<"應該是=喔\n";
		}
	}
	return 0;
}
