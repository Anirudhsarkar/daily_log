#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = prev = NULL;

    }


};
class list{
    Node* head ; 
    Node* tail;
    public:
    list(){
       
            head = tail = NULL;


    }
    void pushfront(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
            return ;
        }
        newNode->next = head;
        head->prev = newNode;
        head  = newNode;



    }
    void insertatkey(int key , int data){
        if(head == NULL){
            return ;
        }
        Node* first  = head->next;
        Node* sec = head ;
        while(first->next != NULL && first->data !=key){
            first = first->next;
            sec= sec->next;
        }
        Node* newNode = new Node(data);
        newNode->next = first->next;
        sec->next = newNode;
        newNode->prev = sec;
        first->next->prev = newNode;
        delete first;


    }
    void print(){
         Node* temp = head;
    while(temp->next != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    
    }
    cout<<endl;
    }
};
int main (){
    list l;
    l.pushfront(2);
    l.pushfront(3);
    l.pushfront(4);
    l.pushfront(5);
    l.pushfront(7);
    l.pushfront(1);
    l.pushfront(9);
    l.pushfront(0);
    l.insertatkey(4,77);
    l.print();

    return 0 ;




}
void insert(int val){
    Node* temp = head;
    while(temp->next !=NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    newNode->next = head;
    temp->next = newNode;
    head = newNode;

}

