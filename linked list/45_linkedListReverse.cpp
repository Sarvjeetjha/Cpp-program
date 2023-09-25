#include<iostream>
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
    while (temp !=NULL)
    {
        cout << temp->data << "  ";
        temp = temp->next; // incresing the  to next node
    }
    cout << endl;
}
void reverseLinkedList(Node *&head,Node *&tail ){
        tail=head;
        Node * prev=NULL;
        Node *Current=head;
        while(Current!=NULL){
            Node * forward=Current->next;
            Current->next=prev;
            prev=Current;
            Current=forward;

        }
        head=prev;
        
}
int main()
{
    Node *Node1 = new Node(10); // creating object of Node type
    Node *head = Node1;   
    Node * tail= Node1;      // pointer thet point to head
    print(head);                // printing data of all node created till now

    insertAtHead(head, 20); // inserting new node at head
    print(head);

    insertAtHead(head, 30);
    print(head);
    insertAtHead(head, 50);
    insertAtHead(head, 56);
    insertAtHead(head, 78);
    print(head);
    cout<<tail<<endl;
    cout<<head<<endl;
    cout<<"reverse order linkedlist"<<endl;
    reverseLinkedList(head,tail);
    print(head);
    cout<<tail<<endl;
    cout<<head<<endl;

}