#include<fstream>
int main(){
	std::fstream lottery;
	lottery.open("lottery.txt",std::fstream::out);
	for(int i=1;i<=11;i+=2)
		lottery<<i<<" ";
	lottery.close();
	return 0;
}
