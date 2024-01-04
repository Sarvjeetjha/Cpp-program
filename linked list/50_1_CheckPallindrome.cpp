#include <iostream>
#include <vector>

using namespace std;
class Node // craeting Node class or Node type Data type
{
public:
    int data;
    Node *next; // node type pointer

    Node(int data)
    {
        this->data = data; // inserting data
        this->next = NULL; // initially initializing address to null
    }
};

void insertAtHead(Node *&head, int d) // this function insert new node at head
{
    Node *temp = new Node(d); // crteating a temporary object to insert new node
    temp->next = head;
    head = temp; // allocating new head to the current node
}
void print(Node *&head) // this function will print the data of all node
{
    Node *temp = head; // temerory pointer that store adress of head
    while (temp != NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next; // incresing the  to next node
    }
    cout << endl;
}
//******************************Method 1*************************************
// bool check_pallindrom(Node *head)
// {
//     vector<int> vec;

//     Node *temp = head;
//     while (temp != NULL)
//     {
//         vec.push_back(temp->data);
//         temp = temp->next;
//     }
//     int len = vec.size();
//     int s = 0;
//     int e = len - 1;

//     while (s <= e)
//     {
//         if (vec.at(s) != vec.at(e))
//         {
//             return false;
//         }
//         s++;
//         e--;
//     }
//     return true;
// }
//*****************************Method 2********************************************
Node * middle(Node *head){
    Node* slow=head;
    Node * fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        
        
    }
    return slow;
}
Node* reverse(Node * head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node * prev=NULL;
    Node * curr=head;
    
    while(curr!=NULL){
       Node * next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        
    }
    return prev;
}

bool check_pallindrom(Node *head){
    
    if(head->next==NULL){
        return true;
    }

    Node * mid=middle(head);
    Node * mid_next=reverse(mid->next);
    print(mid_next);
    while(mid_next!=NULL){
        if(mid->data!=mid_next->data){
            return false;
        }
        mid=mid->next;
        mid_next=mid_next->next;
    }
    return true;

}

int main()
{
    Node *head = new Node(6);
    insertAtHead(head, 2);
    insertAtHead(head, 3);
    insertAtHead(head, 0);
    insertAtHead(head, 4);
    insertAtHead(head, 4);
    insertAtHead(head, 0);
    insertAtHead(head, 8);
    insertAtHead(head, 2);
    insertAtHead(head, 6);
    print(head);
    
   cout<<check_pallindrom(head)<<endl;
    return 0;
}