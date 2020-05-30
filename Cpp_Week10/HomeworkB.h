#include<iostream>
class HomeworkB{
	public:
		HomeworkB(int in){
			value = in;
			std::cout<<"ªì©l­È"<<value<<std::endl; 
		}
		void set(int in){
			value = in;
		}
		int get(void){
			return value;
		}
		~ HomeworkB(){
			std::cout<<"µ²§ô"<<std::endl; 
		}
	private:
		int value;
};
