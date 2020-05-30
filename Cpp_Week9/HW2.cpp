#include<iostream>
#include<String>
using namespace std;
class Student{
	public:
		Student(string c_in){
			Info = c_in;
			cout<<Info<<endl;
		}
		void setGrade(){
			cout<<"請輸入修習學分數: ";
			cin>>s;
		}
		~Student(){
			if(s>=136){
				cout<<"共修得"<<s<<"學分\n順利畢業"<<endl; 
			}
			else
				cout<<"共修得"<<s<<"學分\n無法畢業"<<endl; 
		}
	private:
		string Info;
		int s;
};
int main(){
	Student my("B10707049 黃鈺善"); 
	my.setGrade();
	my.~Student();
	system("pause");
	return 0;
}




