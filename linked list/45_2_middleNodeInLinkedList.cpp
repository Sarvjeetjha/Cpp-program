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
//*********************** first approach*************************************************
// Node * Middle(Node * head){
// if(head==NULL ||head->next==NULL){
//       return head;
// }
//       int size=countLength(head);
//       int ans=(size/2);
//       Node * temp=head;
//       int count=0;
//       while(count<ans){
//             temp=temp->next;
//             count++;
//       }
//       return temp;

// }
//***************************************second approach*****************************************
//using 2 player approach   slow and fast 
Node *Middle(Node *head)
{
      if (head == NULL || head->next == NULL)
      {
            return head;
      }

      Node *slow = head;
      Node *fast = head->next;
      while (fast != NULL)
      {
            slow = slow->next;
            fast = fast->next;
            if (fast != NULL)
                  fast = fast->next;
      }

      return slow;
}

int main()
{
      Node *head = new Node(5);
      insertAtHead(head, 8);
      insertAtHead(head, 9);
      insertAtHead(head, 45);
      insertAtHead(head, 20);
      insertAtHead(head, 15);
      print(head);
      cout << Middle(head)->data << endl;
}
