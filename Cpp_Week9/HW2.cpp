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
			cout<<"�п�J�ײ߾Ǥ���: ";
			cin>>s;
		}
		~Student(){
			if(s>=136){
				cout<<"�@�ױo"<<s<<"�Ǥ�\n���Q���~"<<endl; 
			}
			else
				cout<<"�@�ױo"<<s<<"�Ǥ�\n�L�k���~"<<endl; 
		}
	private:
		string Info;
		int s;
};
int main(){
	Student my("B10707049 ��౵�"); 
	my.setGrade();
	my.~Student();
	system("pause");
	return 0;
}




