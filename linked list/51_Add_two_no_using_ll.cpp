#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void InsertAtHead(int d, Node *&head, Node *&tail)
{
    Node *temp = new Node(d);

    if (head == NULL)
    {
        head = temp;
        tail = head;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
}
void print(Node *head)
{
    if (head == NULL)
    {
        cout << "empty list" << endl;
    }
    else
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << "\n";
    }
}
Node *reverse(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;

        while (curr != NULL)
        {
            Node *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
}
void insertAtTail(int d, Node *&head, Node *&tail)
{
    Node *temp = new Node(d);
    if (tail == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}
//***********************Method 1*************************************************
// Node *add(Node *first, Node *second)
// {
//     int carry = 0;
//     Node *temp1 = first;
//     Node *temp2 = second;
//     Node *ans = NULL;
//     Node *head = ans;
//     Node *tail = ans;
//     while (temp1 != NULL && temp2 != NULL)
//     {
//         int sum = temp1->data + temp2->data + carry;
//         int digit = sum % 10;
//         carry = sum / 10;
//         insertAtTail(digit, head, tail);
//         temp1 = temp1->next;
//         temp2 = temp2->next;
//     }
//     while (temp1 != NULL)
//     {
//         int sum = temp1->data + carry;
//         int digit = sum % 10;
//         carry = sum / 10;
//         insertAtTail(digit, head, tail);
//         temp1 = temp1->next;
//     }
//     while (temp2 != NULL)
//     {
//         int sum = temp2->data + carry;
//         int digit = sum % 10;
//         carry = sum / 10;
//         insertAtTail(digit, head, tail);
//         temp2 = temp2->next;
//     }
//     while(carry!=0){
//         int sum =  carry;
//         int digit = sum % 10;
//         carry = sum / 10;
//         insertAtTail(digit, head, tail);
       
//     }
//     return head;
// }
//***************************Method 2******************************************
Node *add(Node *first, Node *second){
    //reverse both linked list

    Node * temp1=first;
    Node * temp2=second;
    int carry=0;

    Node * head=NULL;
    Node * tail=NULL;
    while(temp1!=NULL || temp2!=NULL|| carry!=0){
            
            int sum1=0;
            if(temp1!=NULL){
                sum1=temp1->data;
                temp1=temp1->next;

            }
            int sum2=0;
            if(temp2!=NULL){
                sum2=temp2->data;
                temp2=temp2->next;
            }
            int sum=sum1+sum2+carry;
            int digit=sum%10;
            carry=sum/10;
            insertAtTail(digit,head,tail);
            // if(temp1!=NULL){
                
            //     temp1=temp1->next;

            // }
            // if(temp2!=NULL){
              
            //     temp2=temp2->next;

            // }  these portion is already  covered above
            
    }
    return (head);
    }
int main()
{
    // Node * temp=new Node(5);
    // Node * head=temp;
    // Node * tail= temp;
    Node *first = NULL;
    Node *tail1 = NULL;
    InsertAtHead(5, first, tail1);
    InsertAtHead(4, first, tail1);
    InsertAtHead(2, first, tail1);
    
    Node *second = NULL;
    Node *tail2 = NULL;
    InsertAtHead(5, second, tail2);
    InsertAtHead(4, second, tail2);
   
   print(first);
   
    print(second);
    // step 1=reverse the both linked list
    first = reverse(first);
    second = reverse(second);
    

     

    // step2=create a answer variable and store in it
    Node * ans=add(first,second);
    //step 3 reverse the ans
    ans=reverse(ans);
    print(ans);

    return 0;
}