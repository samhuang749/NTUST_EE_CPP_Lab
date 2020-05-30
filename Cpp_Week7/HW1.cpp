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
			if(PRN_in==0)  //為0時 顯示原始排序 
				cout<<"原始排序： ";
			if(PRN_in==1)  // 為1時 顯示排序結果 
				cout<<"排序結果： ";
			for(int i=9;i>=0;i--){  //由大到小印出陣列內容 
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

void BubbleSort(void){  //BubbleSort副程式 
	RandNum RndA('a'); //Create RandNum object 
	RndA.SetRandomNumber();  //Set random number for array a
	cout<<"使用泡沫排序法\n";
	RndA.PrintRandomNumber(0);  //印出未排序前陣列內容 
	for(int i=0;i<(sizeof(a)/sizeof(a[0]))*(sizeof(a)/sizeof(a[0]));i++){ //設定時間複雜度	 O(n^2) 
		for(int x=0;x<=(sizeof(a)/sizeof(a[0]))-2;x++){ //由陣列左邊開始 
			if(a[x+1]<a[x]){ //兩兩比較 若右方小於左方則交換 
				swap(a[x+1],a[x]);
			}
		}
	}
	RndA.PrintRandomNumber(1);  //印出排序後陣列內容 
	cout<<endl;
}//end BubbleSort 

void SelectionSort(void){ //SelectionSort 副程式 
	RandNum RndB('b'); //Create RandNum object  
	RndB.SetRandomNumber();  //Set random number for array b
	cout<<"使用選擇排序法\n";
	RndB.PrintRandomNumber(0);  //印出未排序前陣列內容
	for(int i=0;i<(sizeof(b)/sizeof(b[0]));i++){ //重複執行檢查 
		int SS_min=0;
		int SS_memory;
		for(int k=i;k<(sizeof(b)/sizeof(b[0]));k++){ //檢查i至最大  
			if(SS_min>b[k]||k==i){ //將陣列[i]至陣列[9]中 最小值儲存於SS_min 位置儲存於SS_memory 
				SS_min=b[k];
				SS_memory = k;	
			}
			if(k==(sizeof(b)/sizeof(b[0]))-1){
				swap(b[i],b[SS_memory]);  //將最小值放置於陣列[i]中  
			}
		}
	}
	RndB.PrintRandomNumber(1); //印出排序後陣列內容  
	cout<<endl;
}//end SelectionSort

void QuickProcess(int QP){//QuickProcess 副程式 
	for(int i=QP-1;i>=0;i--){  //檢查數列 
		for(int k=QP+1;k<(sizeof(c)/sizeof(c[0]));k++){   
			if(c[i]>c[QP]){
				swap(c[i],c[QP]);  //若大於樞紐則放置樞紐右邊 
			}
			if(c[k]<c[QP]){
				swap(c[QP],c[k]); //若小於樞紐則放置樞紐左邊  
			}
		}
	}
	if(QP<=(sizeof(c)/sizeof(c[0]))-1&&QP>=5) 
		QuickProcess(QP+1); //遞迴呼叫  
	if(QP>=0&&QP<=5)	
		QuickProcess(QP-1);  //遞迴呼叫  

} //end QuickProcess
void QuickSort(void){  //QuickSort副程式 
	RandNum RndC('c'); //Create RandNum object
	RndC.SetRandomNumber(); //Set random number for array c
	cout<<"使用快速排序法\n";
	RndC.PrintRandomNumber(0);  //印出未排序前陣列內容
	QuickProcess(5); //呼叫遞迴檢查副程式 樞紐位置 5 
	RndC.PrintRandomNumber(1); //印出排序後陣列內容   
	cout<<endl;
} //end QuickSort


int main(){
	srand(time(NULL)); //Set Random Seed
	BubbleSort();   //呼叫BubbleSort副程式  進行泡沫排序法 
	SelectionSort(); //呼叫SelectionSort副程式   進行選擇排序法 
	QuickSort();  //呼叫QuickSort副程式 進行快速排序法 
	system("pause");
	return 0;
} //end main 
