/*
B10707049 
C++ Week7 Homework A
*/ 
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int a[10]; //For bubble sort
int b[10]; //For selection sort
int c[10]; //for quick sort
class RandNum{
	public:
		explicit RandNum(char in_A)  //Constructor initializes RN_A used to determine which array should use for each sorting algorithm
			:RN_A(in_A){
			}	//end RandNum Constructor
		void SetRandomNumber(void){  //Function to set random number from 1 to 100 for array
			int store_Random = 0;
			int d[10] = {0};
			for(int i=0;i<10;i++){
				store_Random = (rand()%100)+1;  //Set random number's interval [0,100]			
				d[i]=store_Random;
				for(int k=0;k<i;k++){   //Used to prevent a repeated random number
					while(store_Random==d[k]){
						store_Random = (rand()%100)+1;			
						d[i]=store_Random;
					}
				}
			switch(RN_A){  //Giving random number to array
				case 'a':
					a[i]=d[i];
					break;
				case 'b':
					b[i]=d[i];
					break;
				case 'c':
					c[i]=d[i];
					break;
			}
		}
		}	
		
		void PrintRandomNumber(bool PRN_in){  //Function PrintRandomNumber 
			if(PRN_in==0)  //��0�� ��ܭ�l�Ƨ� 
				cout<<"��l�ƧǡG ";
			if(PRN_in==1)  // ��1�� ��ܱƧǵ��G 
				cout<<"�Ƨǵ��G�G ";
			for(int i=9;i>=0;i--){  //�Ѥj��p�L�X�}�C���e 
				switch(RN_A){
					case 'a':
						cout<<a[i];
						break;
					case 'b':
						cout<<b[i];
						break;
					case 'c':
						cout<<c[i];
						break;
				}
				cout<<" ";
			}
			cout<<endl;
		}	
	private:
		char RN_A;  //RN_A, used to determine which array should use for each sorting algorithm
};

void BubbleSort(void){  //BubbleSort�Ƶ{�� 
	RandNum RndA('a'); //Create RandNum object 
	RndA.SetRandomNumber();  //Set random number for array a
	cout<<"�ϥΪw�j�ƧǪk\n";
	RndA.PrintRandomNumber(0);  //�L�X���Ƨǫe�}�C���e 
	for(int i=0;i<(sizeof(a)/sizeof(a[0]))*(sizeof(a)/sizeof(a[0]));i++){ //�]�w�ɶ�������	 O(n^2) 
		for(int x=0;x<=(sizeof(a)/sizeof(a[0]))-2;x++){ //�Ѱ}�C����}�l 
			if(a[x+1]<a[x]){ //����� �Y�k��p�󥪤�h�洫 
				swap(a[x+1],a[x]);
			}
		}
	}
	RndA.PrintRandomNumber(1);  //�L�X�Ƨǫ�}�C���e 
	cout<<endl;
}//end BubbleSort 

void SelectionSort(void){ //SelectionSort �Ƶ{�� 
	RandNum RndB('b'); //Create RandNum object  
	RndB.SetRandomNumber();  //Set random number for array b
	cout<<"�ϥο�ܱƧǪk\n";
	RndB.PrintRandomNumber(0);  //�L�X���Ƨǫe�}�C���e
	for(int i=0;i<(sizeof(b)/sizeof(b[0]));i++){ //���ư����ˬd 
		int SS_min=0;
		int SS_memory;
		for(int k=i;k<(sizeof(b)/sizeof(b[0]));k++){ //�ˬdi�̤ܳj  
			if(SS_min>b[k]||k==i){ //�N�}�C[i]�ܰ}�C[9]�� �̤p���x�s��SS_min ��m�x�s��SS_memory 
				SS_min=b[k];
				SS_memory = k;	
			}
			if(k==(sizeof(b)/sizeof(b[0]))-1){
				swap(b[i],b[SS_memory]);  //�N�̤p�ȩ�m��}�C[i]��  
			}
		}
	}
	RndB.PrintRandomNumber(1); //�L�X�Ƨǫ�}�C���e  
	cout<<endl;
}//end SelectionSort

void QuickProcess(int QP){//QuickProcess �Ƶ{�� 
	for(int i=QP-1;i>=0;i--){  //�ˬd�ƦC 
		for(int k=QP+1;k<(sizeof(c)/sizeof(c[0]));k++){   
			if(c[i]>c[QP]){
				swap(c[i],c[QP]);  //�Y�j��ϯëh��m�ϯåk�� 
			}
			if(c[k]<c[QP]){
				swap(c[QP],c[k]); //�Y�p��ϯëh��m�ϯå���  
			}
		}
	}
	if(QP<=(sizeof(c)/sizeof(c[0]))-1&&QP>=5) 
		QuickProcess(QP+1); //���j�I�s  
	if(QP>=0&&QP<=5)	
		QuickProcess(QP-1);  //���j�I�s  

} //end QuickProcess
void QuickSort(void){  //QuickSort�Ƶ{�� 
	RandNum RndC('c'); //Create RandNum object
	RndC.SetRandomNumber(); //Set random number for array c
	cout<<"�ϥΧֳt�ƧǪk\n";
	RndC.PrintRandomNumber(0);  //�L�X���Ƨǫe�}�C���e
	QuickProcess(5); //�I�s���j�ˬd�Ƶ{�� �ϯæ�m 5 
	RndC.PrintRandomNumber(1); //�L�X�Ƨǫ�}�C���e   
	cout<<endl;
} //end QuickSort


int main(){
	srand(time(NULL)); //Set Random Seed
	BubbleSort();   //�I�sBubbleSort�Ƶ{��  �i��w�j�ƧǪk 
	SelectionSort(); //�I�sSelectionSort�Ƶ{��   �i���ܱƧǪk 
	QuickSort();  //�I�sQuickSort�Ƶ{�� �i��ֳt�ƧǪk 
	system("pause");
	return 0;
} //end main 
