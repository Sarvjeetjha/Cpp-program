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
Node *sortLL(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *curr = head;
    while (curr != NULL)
    {

        if ((curr->next != NULL) && (curr->data == curr->next->data))
        { // we can use curr->next!=NULL in while loop also
            Node *next_next = curr->next->next;
            Node *nodeToDelete = curr->next;
            delete nodeToDelete;
            curr->next = next_next;
        }
        else
        {
            curr = curr->next;
        }
    }

    return head;
}
int main()
{
    Node *node1 = new Node(15);
    Node *head = node1;
    Node *tail = node1;
    insertAtHead(head, 10);
    insertAtHead(head, 10);
    insertAtHead(head, 9);
    insertAtHead(head, 8);
    insertAtHead(head, 4);
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    print(head);

    Node *ans = sortLL(head);
    cout<<"List after removing dupplicate element"<<endl;
    print(ans);

    return 0;
}