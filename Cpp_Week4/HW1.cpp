#include<iostream>
#include <cstdlib>
using namespace std;
int max_l,min_l,pass;
int main(){
	cout<<"�׷��K�X�C���}�l\n";
	while(1){
		cout<<"�п�J�K�X�U���G \n";
		cin>>min_l;
		cout<<"�п�J�K�X�W���G \n";
		cin>>max_l;
		if(max_l<=min_l){
			cout<<"��J���~\n";
		}
		else{
			pass=rand() % (max_l - min_l + 1) + min_l;
			cout<<pass<<endl;
			int g_in;
			while(1){
				cout<<"�п�J�z�q�����Ʀr�G" ;
				cin>>g_in;
				if(g_in<min_l||g_in>max_l){
					cout<<"�z��J���Ȩä��b"<<min_l<<"��"<<max_l<<"����\n"; 
					continue;
				}
				if(g_in!=pass){
					if(g_in<pass){
						min_l=g_in;
						cout<<"�q�����~��I �K�X�d��վ㦨"<<min_l<<"��"<<max_l<<"����\n"; 
					}
					else if(g_in>pass){
						max_l=g_in;
						cout<<"�q�����~��I �K�X�d��վ㦨"<<min_l<<"��"<<max_l<<"����\n"; 
					}
				}
				else{
					cout<<"�q��F�A�K�X�O"<<pass<<endl; 
					break;
				}
			}	
		}
		cout<<"�аݱz�~���? (y/n)\n";
		char s_in;
		cin>>s_in;
		if(s_in=='Y'||s_in=='y'){
			continue;
		}
		else{
			if(s_in!='N'&&s_in!='n'){
				cout<<"��J���~�A�{������"<<endl; 
			}
			break;
		}
	}
}
