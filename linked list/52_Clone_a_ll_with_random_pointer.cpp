// GFG Clone a linked list with rndom pointer
class solution{
private:
    void insertAtATail(Node * &head,Node *&tail,int data){
        Node * temp=new Node(data);
        if(tail==NULL){
            head=temp;
            tail=temp;
            return; 
        }
        else{
            tail->next=temp;
            tail=temp;
        }
    }
    public:
    Node *copyList(Node *head)
   
    {
         
    //method 1
        // //step1:copy original node
        // Node *newhead=NULL;
        // Node* newtail=NULL;
        // Node * temp=head;
        
        // while(temp!=NULL){
        //     insertAtATail(newhead,newtail,temp->data);
        //     temp=temp->next;
        // }
        // //step2:create a map and copy content
        // unordered_map<Node *,Node *>oldToNewNode;
        // Node * originalNode=head; 
        // Node * cloneNode=newhead; 
        // while(originalNode!=NULL){
        //     oldToNewNode[originalNode]=cloneNode;
        //     cloneNode=cloneNode->next;
        //     originalNode=originalNode->next;
        // }
        // //step3:copy random pointer
        // originalNode=head; 
        // cloneNode=newhead;
        // while(originalNode!=NULL){
        //     cloneNode->arb=oldToNewNode[originalNode->arb];
        //     originalNode=originalNode->next;
        //     cloneNode=cloneNode->next;
            
            
        // }
        // //step4:return pointer
        // return newhead;
    }};