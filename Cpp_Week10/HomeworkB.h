#include<iostream>
class HomeworkB{
	public:
		HomeworkB(int in){
			value = in;
			std::cout<<"��l��"<<value<<std::endl; 
		}
		void set(int in){
			value = in;
		}
		int get(void){
			return value;
		}
		~ HomeworkB(){
			std::cout<<"����"<<std::endl; 
		}
	private:
		int value;
};
