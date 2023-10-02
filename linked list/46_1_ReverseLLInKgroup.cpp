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
Node * ReversekGrouop(Node * head,int k){
      //base case 
      if(head==NULL){
            return head;
      }
      int count=0;
      Node * prev=NULL;
      Node * curr=head;
      Node * next=NULL;
      // swaping first k node
      while( count<k && curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
      }
      //recursiv call
      head->next=ReversekGrouop(next,k);
      return prev;

}
int main()
{
      Node *head = new Node(5);
      insertAtHead(head, 8);
      insertAtHead(head, 9);
      insertAtHead(head, 45);
      insertAtHead(head, 20);
      // insertAtHead(head, 15);
      print(head);
      Node * temp = ReversekGrouop(head,2);
      print(temp);
}