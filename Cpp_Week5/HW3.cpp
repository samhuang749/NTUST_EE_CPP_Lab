#include<iostream>
using namespace std;
float a[2][2]={0};
void print_graph(void){
	int i;
	for(i=0;i<2;i++){
		int y;
		cout<<"|\t";
		for(y=0;y<2;y++){
			cout<<a[i][y]<<"\t"; 
		}
		cout<<"|\n";
	} 
	
}


int main(){
	cout<<"請輸入矩陣："<<endl;
	int i;
	for(i=0;i<2;i++){
		int y;
		for(y=0;y<2;y++){
			cout<<"a"<<i+1<<y+1<<"= ";
			cin>>a[i][y]; 
		}
		
	} 
	int d_a=0;
	d_a=((a[0][0]*a[1][1])-(a[0][1]*a[1][0]));
	cout<<"a矩陣為："<<endl;
	print_graph();
	cout<<"\n"<<"det(a)"<<"為"<<d_a<<endl; 
	float s=a[0][0];
	a[0][0]=((a[1][1]*1.0)/d_a);
	a[0][1]=a[0][1]/(d_a*-1.0);
	a[1][0]=a[1][0]/(d_a*-1.0);
	a[1][1]=((s*1.0)/d_a);
	cout<<"a的反矩陣為："<<endl;
	print_graph();
	return 0;
}
