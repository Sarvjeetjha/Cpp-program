#include <iostream>
using namespace std;

class Node
{
public:
      int data;
      Node *next;
      Node(int data)
      {
            this->data = data;
            this->next = NULL;
      }
};

void insertAtHead(Node *&head, int d)
{
      Node *temp = new Node(d);
      temp->next = head;
      head = temp;
}
// for circular list
void insertNode(Node * & tail,  int element,int d){
    //assumiing that empty list
    if(tail==NULL){
        Node * temp=new Node(d);
        tail=temp;
        temp->next=temp;

    }
    else{
        //assuming elemnt is present in the list
        Node *current =tail;
        while(current ->data !=element){
            current=current->next;

        }
        //now cuurent us pointing to the current node
        Node * temp=new Node(d);
        temp->next=current->next;
        current->next=temp;

    }}

int countLength(Node *head)
{
      Node *temp = head;
      int count = 0;
      while (temp != NULL)
      {
            temp = temp->next;
            count++;
      }
      return count;
}
void print(Node *&head)
{
      Node *temp = head;
      while (temp != NULL)
      {
            cout << temp->data << "  ";
            temp = temp->next;
      }
      cout << endl;
}
bool CheckCircularlyLinkedList(Node * head){
      if(head==NULL){
            return false;
      }
    Node * temp=head->next;
    while(temp!=NULL && temp!=head){
            temp=temp->next;
    }
    if(temp==head)
      return true;
    else{
      return false;
      }
}
int main()
{
      Node *head = NULL;
      insertAtHead(head, 8);
      // insertAtHead(head, 9);
      // insertAtHead(head, 45);
      // insertAtHead(head, 20);
      // insertAtHead(head, 15);
      // print(head);
      //for circular list
      // insertNode(head,5,2);
      // insertNode(head,2,10);
      // insertNode(head,10,20);

      bool ans=CheckCircularlyLinkedList(head);
      cout<<ans<<endl;
      
}