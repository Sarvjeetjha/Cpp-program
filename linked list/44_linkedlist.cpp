//***************************Linked list************************************************************
#include <iostream>
using namespace std;
// class Node{
//     public :
//     int data;
//     Node * next;

//     Node(int data){
//         this->data=data;
//         this->next=NULL;
//     }

// };
// int main(){
//     Node * node1=new Node(10);
//     cout<<node1->data<<endl;
//     cout<<node1->next <<endl;

//      return 0;
// }

//********************************insert at head*********************************
// class Node // craeting Node class or Node type Data type
// {
// public:
//     int data;
//     Node *next; // node type pointer

//     Node(int data)
//     {
//         this->data = data; // inserting data
//         this->next = NULL; // initially initializing address to null
//     }
// };

// void insertAtHead(Node *&head, int d) // this function insert new node at head
// {
//     Node *temp = new Node(d); // crteating a temporary object to insert new node
//     temp->next = head;
//     head = temp; // allocating new head to the current node
// }
// void print(Node *&head) // this function will print the data of all node
// {
//     Node *temp = head; // temerory pointer that store adress of head
//     while (temp != NULL)
//     {
//         cout << temp->data << "  ";
//         temp = temp->next; // incresing the  to next node
//     }
//     cout << endl;
// }
// int main()
// {
//     Node *Node1 = new Node(10); // creating object of Node type
//     Node *head = Node1;         // pointer thet point to head
//     print(head);                // printing data of all node created till now

//     insertAtHead(head, 20); // inserting new node at head
//     print(head);

//     insertAtHead(head, 30);
//     print(head);
// }
// //***************************insert at tell******************************************
// class Node // craeting Node class or Node type Data type
// {
// public:
//     int data;
//     Node *next; // node type pointer

//     Node(int data)
//     {
//         this->data = data; // inserting data
//         this->next = NULL; // initially initializing address to null
//     }
// };

// void insertAtTail(Node *&tail, int d)
// {
//     // new node create
//     Node *temp = new Node(d);
//     tail->next = temp;
//     tail = tail->next;
// }
// void print(Node *&head) // this function will print the data of all node
// {
//     Node *temp = head; // temerory pointer that store adress of head
//     while (temp != NULL)
//     {
//         cout << temp->data << "  ";
//         temp = temp->next; // incresing the  to next node
//     }
//     cout << endl;
// }
// int main()
// {
//     Node *Node1 = new Node(10); // creating object of Node type
//     Node *tail = Node1;         // pointer thet point to head
//     Node *head = Node1;

//     print(head);            // printing data of all node created till no
//     insertAtTail(tail, 20); // inserting new node at head
//     print(head);

//     insertAtTail(tail, 30);
//     print(head);
// }
//**********************************inerting in betweeen**********************************************************
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int d)
//     {
//         this->data = d;
//         this->next = NULL;
//     }
// };
// void insertAtHead(Node *&head, int d)
// {
//     Node *temp = new Node(d);
//     temp->next = head;
//     head = temp;
// }
// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << "  ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// void insertAtTail(Node *&tell, int d)
// {
//     Node *temp = new Node(d);
//     tell->next = temp;
//     tell = tell->next;
// }
// void insertAtPosition(Node *&head, Node *&tail, int position, int d)
// {
//     if (position == 1)//if we have to insert at first position
//     {
//         insertAtHead(head, d);
//         return;
//     }

//     int count = 1;
//     Node *temp = head;
//     while (count < position - 1)
//     {
//         temp = temp->next;
//         count++;
//     }
//     if (temp->next == NULL)//if we have to insert at last position
//     {
//         insertAtTail(tail, d);
//         return;
//     }

//     //if we have to insert at in between position
//     Node *nodeToInsert = new Node(d);//creating node to insert
//     nodeToInsert->next = temp->next;
//     temp->next = nodeToInsert;

// }
// int main()
// {
//     Node *node1 = new Node(10);
//     Node *head = node1;
//     Node *tail = node1;
//     print(head);
//     insertAtHead(head, 5);
//     print(head);
//     insertAtTail(tail, 15);
//     print(head);
//     insertAtPosition(head, tail, 4, 25);
//     print(head);
//     insertAtPosition(head, tail, 5, 35);
//     print(head);
//     insertAtPosition(head, tail, 6, 45);
//     print(head);
//     insertAtPosition(head, tail, 7, 55);
//     print(head);
//     insertAtPosition(head,tail,1,2);
//     print(head);
//     insertAtPosition(head,tail,2,1);
//     print(head);
//     cout<<"head "<<head->data<<endl;
//     cout<<"head "<<tail->data<<endl;
// }
//************************************deletion of node*******************************************

// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node(int d)
//     {
//         this->data = d;
//         this->next = NULL;
//     }
//     ~Node(){

//         if(this->next!=NULL){
//             delete next;
//             this->next=NULL;

//         }
//         cout<<"delete ho gya"<<endl;
//     }
// };
// void insertAtHead(Node *&head, int d)
// {
//     Node *temp = new Node(d);
//     temp->next = head;
//     head = temp;
// }
// void print(Node *&head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     cout << endl;
// }
// void insertAtTell(Node *&tail, int d)
// {
//     Node *temp = new Node(d);
//     tail->next = temp;
//     tail = temp;
// }
// void insertAtBetween(Node *&head, Node *&tail, int d, int position)
// {
//     if (position == 1)
//     {
//         insertAtHead(head, d);

//         return;
//     }
//     int count = 1;
//     Node *temp = head;
//     while (count < position - 1)
//     {
//         temp = temp->next;
//         count ++;
//     }
//     if (temp->next == NULL)
//     {

//         insertAtTell(tail, d);
//         return;
//     }

//     Node *nodeToInsert = new Node(d);
//     nodeToInsert->next = temp->next;
//     temp->next = nodeToInsert;
// }
// void deleteAtNode(Node *&head,Node *&tail,int position){
//     Node *current=head;
//     Node *prev=NULL;
//     if(position==1){
//         head=head->next;
//         current->next=NULL;
//         delete current;

//     return;
//     }
//     else{
//     int count =1;
//     while (count<position)
//     {
//         prev=current;
//         current=current->next;
//         count++;
//     }

//     prev->next=current->next;
//     current->next=NULL;
//     delete current;

//     }
// }

// int main()
// {
//     Node *n1 = new Node(5);
//     Node *head = n1;
//     Node *tail = n1;
//     // insertAtHead(head,3);
//     print(head);
//     insertAtTell(tail, 10);
//     print(head);
//     insertAtTell(tail, 15);
//     print(head);
//     insertAtBetween(head, tail, 25, 4);
//     print(head);
//     deleteAtNode(head,tail,4);
//     print(head);
// }
//************************practice***************************************
// class Node{
//     public:
//     int data;
//     Node * next;

//      Node(int d){

//         this->data =d;
//         this->next=NULL;
//      }
//      ~Node(){
//         if(this->next!=NULL){
//             delete next;
//             this->next=NULL;
//         }

//      }
// };
// void insertAtHead(Node * &head,Node * &tail,int data){
//     if(head==NULL){
//         Node *temp=new Node (data);
//         head=temp;
//         tail=temp;
//     }
//     else{
//         Node * temp=new Node (data);
//         temp->next=head;
//         head=temp;

//     }
// }
// void insertAtTail(Node * &tail,Node * &head,int data){
//     if(tail==NULL){
//         Node *temp=new Node (data);
//         tail=temp;
//         head=temp;
//     }
//     else{
//         Node * temp=new Node (data);
//         tail->next=temp;
//         tail=temp;
//     }
// }
// void insertAtMid(Node *&head,Node * &tail,int position ,int data){
//     if(position ==1){
//         insertAtHead(head,tail,data);
//         return;
//     }
//     else{
//         int count =1;
//         Node * temp=head;
//         while(count<position-1){
//             temp=temp->next;
//             count++;
//         }
//         if(temp->next==NULL){
//             insertAtTail(tail,head,data);
//             return;
//         }
//         Node * nodeToInsert=new Node(data);
//         nodeToInsert->next=temp->next;
//         temp->next=nodeToInsert;

//     }

// }
// void deleteNode(Node * &head,int position){
//     if (position==1){
//         Node * temp=head;
//         head=head->next;
//         temp->next=NULL;
//     }
//     else{
//         Node * prev=NULL;
//         Node * current=head;
//         int count=1;

//         while(count<position){
//             prev=current;
//             current=current->next;
//             count++;

//         }
//         prev->next=current->next;
//         current->next=NULL;
//         delete current;
//     }
// }
// void noOfNode(Node * &head){
//     if(head==NULL){
//         cout<<"empty list"<<endl;

//     }
//     else{
//         Node * temp=head;
//         int count=1;
//         while(temp->next!=NULL){
//             temp=temp->next;
//             count++;

//         }
//         cout<<"Totl no of node is : "<<count<<endl;

//     }
// }

// void print(Node * head){
//     Node * temp=head;
//     while(temp!=NULL){
//         cout<<temp->data<<" ";
//         temp=temp->next;

//     }
//     cout<<"\n";
// }
// int main(){
//     Node * head =NULL;
//     Node * tail=NULL;
//     insertAtHead(head,tail,5);
//     print(head);
//     insertAtHead(head,tail,10);
//     print(head);
//     insertAtTail(tail,head,1);
//     print(head);
//     insertAtMid(head,tail,1,20);
//     print(head);
//     insertAtMid(head,tail,4,50);
//     print(head);
//     noOfNode(head);
//     deleteNode(head,4);
//     print(head);
//     noOfNode(head);

// }
//*****************************Doubly :Linked List*********************************************************
// class Node
// {
// public:
//     int data;
//     Node *prev;
//     Node *next;
//     // constructor
//     Node(int d)
//     {
//         this->data = d;
//         this->next = NULL;
//         this->prev = NULL;
//     }
//     ~Node()
//     {

//         if (this->next != NULL)
//         {
//             delete next;
//             this->next = NULL;
//         }
//         cout << "delete ho gya" << endl;
//     }
// };
// // traversing a linked list
// void print(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << "\n";
// }
// // length of linked list
// int getlength(Node *head)
// {
//     Node *temp = head;
//     int len = 0;
//     while (temp != NULL)
//     {
//         len++;
//         temp = temp->next;
//     }
//     return len;
// }
// void insertAtHead(Node *&head, Node *&tail, int data)
// {
//     if (head == NULL)
//     {
//         Node *n1 = new Node(data);
//         head = n1;
//         tail = n1;
//     }
//     else
//     {
//         Node *temp = new Node(data);
//         temp->next = head;
//         head->prev = temp;
//         head = temp;
//     }
// }
// void insertAtTail(Node *&tail, Node *&head, int data)
// {
//     if (tail == NULL)
//     {
//         Node *n1 = new Node(data);
//         tail = n1;
//         head = n1;
//     }
//     else
//     {
//         Node *temp = new Node(data);
//         tail->next = temp;
//         temp->prev = tail;
//         tail = temp;
//     }
// }
// void insertAtPosition(Node *&head, Node *&tail, int data, int position)
// {
//     if (position == 1)
//     {
//         insertAtHead(head, tail, data);
//         return;
//     }
//     int count = 1;
//     Node *temp = head;
//     while (count < position - 1)
//     {
//         temp = temp->next;
//         count++;
//     }
//     if (temp->next == NULL)
//     {
//         insertAtTail(tail, head, data);
//         return;
//     }
//     Node *nodeToInsert = new Node(data);
//     nodeToInsert->next = temp->next;
//     temp->next = nodeToInsert;
//     nodeToInsert->prev = temp;
// }
// void deleteAtNode(Node *&head, Node *&tail, int position)
// {

//     if (position == 1)
//     {
//         Node *temp = head;
//         head = temp->next;
//         temp->next = NULL;
//         head->prev = NULL;

//         delete temp;

//         return;
//     }
//     else
//     {
//         int count = 1;
//         Node *current = head;
//         Node *prev = NULL;
//         while (count < position)
//         {
//             prev = current;
//             current = current->next;
//             count++;
//         }

//         current->prev = NULL;
//         prev->next = current->next;
//         current->next = NULL;
//         delete current;
//     }
// }

// int main()
// {

//     Node *head = NULL;
//     Node *tail = NULL;
//     print(head);
//     // cout<<"total no of nodes "<<getlength(head)<<endl;

//     insertAtHead(head, tail, 20);
//     print(head);
//     // cout<<"total no of nodes "<<getlength(head)<<endl;

//     insertAtTail(tail, head, 25);
//     print(head);
//     // cout<<"total no of nodes "<<getlength(head)<<endl;

//     insertAtPosition(head, tail, 100, 2);
//     print(head);
//     // cout<<"total no of nodes "<<getlength(head)<<endl;
//     insertAtPosition(head, tail, 50, 1);
//     print(head);
//     insertAtPosition(head, tail, 40, 3);
//     print(head);
//     insertAtPosition(head, tail, 60, 4);
//     print(head);
//     deleteAtNode(head, tail, 6);
//     print(head);
// }
//**************************************doubly linked list practice**********************************************
// class Node
// {
// public:
//     int data;
//     Node *next;
//     Node *prev;

//     Node(int d)
//     {
//         this->data = d;
//         this->next = NULL;
//         this->prev = NULL;
//     }
//     ~Node()
//     {
//         if (next != NULL)
//         {
//             delete next;
//             this->next = NULL;
//         }
//         cout << "delete ho gya" << endl;
//     }
// };
// void insertAtHead(Node *&head, Node *&tail, int d)
// {
//     if (head == NULL)
//     {
//         Node *temp = new Node(d);
//         head = temp;
//         tail = temp;
//     }
//     else
//     {
//         Node *temp = new Node(d);
//         temp->next = head;
//         head->prev = temp;
//         head = temp;
//     }
// }
// void insertAtTail(Node *&tail, Node *&head, int d)
// {
//     if (tail == NULL)
//     {
//         Node *temp = new Node(d);
//         head = temp;
//         tail = temp;
//     }
//     else
//     {
//         Node *temp = new Node(d);
//         tail->next = temp;
//         temp->prev = tail;
//         tail = temp;
//     }
// }
// void insertAtMid(Node *&head, Node *&tail, int position, int data)
// {
//     if (position == 1)
//     {
//         insertAtHead(head, tail, data);
//         return;
//     }
//     else
//     {
//         Node *temp = head;
//         int count = 1;
//         while (count < position - 1)
//         {
//             temp = temp->next;
//             count++;
//         }
//         if (temp->next == NULL)
//         {
//             insertAtTail(tail, head, data);
//             return;
//         }
//         Node *newNode = new Node(data);
//         newNode->next = temp->next;
//         temp->next = newNode;
//         newNode->prev = temp;
//     }
// }
// void deleteNode(Node *&head, Node *tail, int position)
// {
//     if (position == 1)
//     {
//         Node *temp = head;
//         head = head->next;
//         temp->next = NULL;
//         delete temp;
//     }
//     else
//     {
//         Node *previous = NULL;
//         Node *current = head;
//         int count = 1;
//         while (count < position)
//         {
//             count++;
//             previous = current;
//             current = current->next;
//         }

//         previous->next = current->next;

//         if (current->next != NULL)
//         {

//             current->next->prev = previous;
//         }

//         current->prev = NULL;
//         current->next = NULL;
//         delete current;
//     }
// }
// void print(Node *head)
// {
//     Node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// int main()
// {
//     Node *head = NULL;
//     Node *tail = NULL;
//     insertAtHead(head, tail, 5);
//     print(head);
//     insertAtHead(head, tail, 1);
//     print(head);
//     insertAtTail(tail, head, 10);
//     print(head);
//     insertAtMid(head, tail, 1, 50);
//     print(head);
//     insertAtMid(head, tail, 5, 100);
//     print(head);
//     insertAtMid(head, tail, 2, 70);
//     print(head);
//     deleteNode(head, tail, 5);
//     print(head);
//     deleteNode(head, tail, 1);
//     print(head);
//     deleteNode(head, tail, 2);
//     print(head);
// }
//****************************CIRCULAR LINKED LIST********************************
// class Node{
//     public:
//     int data;
//     Node * next;

//     Node(int d){
//         this ->data=d;
//         this->next=NULL;
//     }
//     ~Node(){
//         if(this->next!=NULL){
//             delete next;
//             this->next=NULL;
//             cout<<"delete ho gya"<<endl;

//         }
//     }

// };
// void insertNode(Node * & tail,  int element,int d){
//     //assumiing that empty list
//     if(tail==NULL){
//         Node * temp=new Node(d);
//         tail=temp;
//         temp->next=temp;

//     }
//     else{
//         //assuming elemnt is present in the list
//         Node *current =tail;
//         while(current ->data !=element){
//             current=current->next;

//         }
//         //now cuurent us pointing to the current node
//         Node * temp=new Node(d);
//         temp->next=current->next;
//         current->next=temp;

//     }

// }

// void print(Node* tail) {

//     Node* temp = tail;

//     //empty list
//     if(tail == NULL) {
//         cout << "List is Empty "<< endl;
//         return ;
//     }

//     do {
//         cout << tail -> data << " ";
//         tail = tail -> next;
//     } while(tail != temp);

//     cout << endl;
// }
// void deleteNode(Node * &tail,int element){
//     if(tail==NULL){
//         cout<<"list is empty check it again"<<endl;
//     }
//     else
//     {//assuming that the element is present in the list
//     Node * prev=tail;
//     Node * curr=tail->next;

//     while(curr->data!= element){
//         prev=curr;
//         curr=curr->next;

//     }
//     prev->next=curr->next;
//     // if only one node is present
//     if(curr==prev){
//         tail=NULL;
//     }
//     //>=2 node

//     else if  (tail==curr){
//         tail=prev;
//     }
//     curr->next=NULL;
//     delete curr;

//     }

// }

// int main(){
//     Node * tail=NULL;
//     insertNode(tail,3,5);
//     print(tail);
//     insertNode(tail,5,10);
//     print(tail);
//     // insertNode(tail,10,15);
//     // print(tail);
//     // insertNode(tail,15,20);
//     // print(tail);
//     // insertNode(tail,5,6);
//     // print(tail);
//     deleteNode(tail,5);
//     print(tail);

// }
//*****************************************Circular linked list practice**************************************
// class Node
// {
// public:
//     int data;
//     Node *next;

//     Node(int d)
//     {
//         this->data = d;
//         this->next = NULL;
//     }
//     ~Node(){
//         if(this->next!=NULL){
//             delete next;
//             this->next=NULL;

//         }
//         cout<<"delete ho gya"<<endl;
//     }
// };
// void insert(Node *&tail, int element, int d)
// {
//     if (tail == NULL)
//     {
//         Node *temp = new Node(d);
//         tail = temp;
//         tail->next = temp;
//     }
//     else
//     {
//         Node *current = tail;
//         while (current->data != element)
//         {
//             current = current->next;
//         }
//         Node *temp = new Node(d);
//         temp->next = current->next;
//         current->next = temp;
//     }
// }
// void deleteNode (Node *&tail,int value){
//     if(tail==NULL){
//         cout<<"empty list nothing to delete"<<endl;

//     }
//     else{
//         Node * prev=tail;
//         Node * current=tail->next;
        
        
//         while(current->data !=value){
//             prev=current;
//             current=current->next;
//         }
//         prev->next=current->next;
//         if(prev==current){ //if only one node is present
//             tail=NULL;
//             }
//     //if more than one node is present
//         if(tail==current){
//             tail=prev;
            
//         }
//         current->next=NULL;
//             delete current;
        
        
        
//     }
// }
// void print(Node * tail){
//     if(tail==NULL){
//         cout<<"List is empty"<<endl;
//     }
//     else{
//         Node *temp=tail;
//         do{
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//         while(temp!=tail);
//         cout<<endl;
//     }
// }
// int main(){
//     Node * tail=NULL;
//     insert(tail,5,2);
//     print(tail);
//     insert(tail,2,4);
//     print(tail);
    
//     insert(tail,2,5);
//     print(tail);
    
//     deleteNode(tail,2);
//     print(tail);
// }
