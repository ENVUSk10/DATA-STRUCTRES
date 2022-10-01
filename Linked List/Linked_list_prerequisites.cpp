#include<iostream>
using namespace std;
// This forms the base of the Linked List
class Node{
public:
	int data;
	Node* next;
};
// Universal Head Node so that we do not have to pass it again to any function.
Node* Head; 
Node* Prev;
//Inserts at the back
void Front_insert(int x){
	Node* temp = new Node();
	temp->next = Head;
	temp->data = x;
	Head = temp;
}
void Back_insert(int x)
{
	Node* temp = new Node();
	if (Head == NULL){
		Head = temp;
	}
	else{
		Prev->next = temp;	
	}
	Prev = temp;
	temp->data = x;
	temp->next = NULL;
}
//Print the linked list
void Print()
{
	Node* temp = Head;
	while(temp != NULL){
		cout << temp->data << " ";
		if(temp->next != NULL){
			cout << "-> ";
		}
		temp = temp->next;
	}

}
//Main driver code
int main()
{
	Head = NULL;
	int x,num;
	cin >> x;
	while(x--){
		cin >> num;
		//Back_insert(num);
		Front_insert(num);
 
	}	
	Print();
}