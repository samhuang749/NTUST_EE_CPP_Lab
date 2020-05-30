#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
node *head ;
node *tail ;
void AddNum(int AN_data);
void Insert(int I_data);
void ListAll();
void Delete();
void ReleaseM(node *RP);\
void Find(int FN);
node *getMemory();
int main(){
	char keyboard_in;
	int keyboard_num;
	head = getMemory();
	head->next=NULL;
	tail = getMemory();
	tail->next=NULL;
	while(keyboard_in!='e'){
		cout<<"Input command (a:Add i:Insert d:Delete f:Find l:List e:Exit)"<<"\n>";
		cin>>keyboard_in;
		switch(keyboard_in){
			case 'a':
				cout<<"Add the num: ";
				cin>>keyboard_num;
				AddNum(keyboard_num);
				break;
			case 'i':
				cout<<"Insert the num: ";
				cin>>keyboard_num;
				Insert(keyboard_num);
				break;
			case 'd':
				Delete();
				break;
			case 'f':
				cout<<"Find the num: ";
				cin>>keyboard_num;
				Find(keyboard_num);	
				break;
			case 'l':
				ListAll();
				break;
			case 'e':
				cout<<"Program finished!";
				exit(0);
				break;	
			default:
					cout<<"Wrong command, input again."<<endl;
				break;					
		}
		cout<<endl;
	}
	return 0;
}

node *getMemory(){
	node *ptr = new node;
	if(ptr == NULL){
		cout<<"記憶體不足，程式終止\n"<<endl;
		exit(0); 
	}
	return ptr;
}
void AddNum(int AN_data){
	node *new_node=getMemory();
	if(head->next == NULL){
		new_node->data=AN_data;
		head->next=new_node;
	}else{
		node *old=head;
		while(old->next!=NULL){
			old = old->next;
		}
		new_node->data=AN_data;
		old->next=new_node;
	}
	new_node->next=NULL;
	tail->next=new_node;
	cout<<"Add successful!"<<endl;
}
void ListAll(){
	node *ptr=head;
	int i=0;
	if(head->next!=NULL){
		ptr = head->next;
		while(1){	
			cout<<ptr->data<<" ";
			i++;
			if(ptr->next==NULL){
				break;
			}
			ptr = ptr->next;
		}
	}
	cout<<"\nList length is "<<i<<endl;
}
void Insert(int I_data){
	node *ptr=head;
	cout<<"Original list"<<endl;
	if(head->next!=NULL){
		ptr = head->next;
		while(1){	
			cout<<ptr->data<<" ";
			if(ptr->next==NULL){
				break;
			}
			ptr = ptr->next;
		}
	}
	cout<<"\nInsert Positiion:";
	int IP;
	cin>>IP;
	ptr=head;
	for(int i=1;i<IP;i++){
		ptr = ptr->next;
		if(IP<1||(ptr->next==NULL&&IP-1!=i)){
			cout<<"Rand Wrong,Input again"<<endl;
		}
	}
	node *new_node=getMemory();
	new_node->data=I_data;
	new_node->next=ptr->next;
	ptr->next=new_node;
	cout<<"Insert successful!\nInserted list"<<endl;
	ptr=head;
	if(head->next!=NULL){
		ptr = head->next;
		while(1){	
			cout<<ptr->data<<" ";
			if(ptr->next==NULL){
				break;
			}
			ptr = ptr->next;
		}
	}
	cout<<endl;
}
void ReleaseM(node *RP){
	delete RP;
}
void Delete(){
	node *ptr=head;
	cout<<"Original list"<<endl;
	if(head->next!=NULL){
		ptr = head->next;
		while(1){	
			cout<<ptr->data<<" ";
			if(ptr->next==NULL){
				break;
			}
			ptr = ptr->next;
		}
	}
	cout<<"\nDelete Positiion: ";
	int D_in;
	cin>>D_in;
	ptr=head;
	for(int i=1;i<D_in;i++){
		ptr = ptr->next;
		if(D_in<1||(ptr->next==NULL&&D_in-1!=i)){
			cout<<"Rand Wrong,Input again"<<endl;
		}
	}
	node *future = ptr;
	future=ptr->next;
	ReleaseM(ptr->next);
	ptr->next=future->next;
	cout<<"Deleted list"<<endl;
	if(head->next!=NULL){
		ptr = head->next;
		while(1){	
			cout<<ptr->data<<" ";
			if(ptr->next==NULL){
				break;
			}
			ptr = ptr->next;
		}
	}
	cout<<endl;
}

void Find(int FN){
	node *ptr;
	if(head->next!=NULL){
		ptr = head->next;
		while(1){	
			if(FN==ptr->data){
				cout<<"has found the "<<ptr->data;
				break;
			}
			if(ptr->next==NULL){
				cout<<"Not found the "<<FN;
				break;
			}
			ptr = ptr->next;
		}
	}
	cout<<endl;
}










