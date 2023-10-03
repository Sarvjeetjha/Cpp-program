#include <iostream>
#include <map>
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
bool checkLoop(Node *head)
{
    if (head == NULL)
        return false;
    map<Node *, bool> visited;
    Node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}
//********************** floyds cycle detector ********************************************
bool floydsCycleDetect(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    if (head == NULL)
    {
        return false;
    }
    while (slow != NULL && fast != NULL)
    {

        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    Node *node1 = new Node(5);
    Node *head = node1;
    Node *tail = node1;
    insertAtHead(head, 12);
    insertAtHead(head, 15);
    insertAtHead(head, 8);
    insertAtHead(head, 42);
    print(head);
    tail->next = head->next;

    bool ans = floydsCycleDetect(head);
    if (ans)
        cout << "contains loop" << endl;
    else
        cout << "contains no loop" << endl;
}