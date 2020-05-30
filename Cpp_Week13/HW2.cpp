#include<iostream>
#include<String>
using namespace std;
struct  Person{
	string name;
	float height ;
	float weight ;
};
int main(){
	struct Person Apple;
	Apple.name="Tony";
	Apple.height=1.75;
	Apple.weight=75.5;
	cout<<Apple.name<<"\n"<<Apple.weight/(Apple.height*Apple.height)<<endl;
	system("pause");
	return 0;
}
