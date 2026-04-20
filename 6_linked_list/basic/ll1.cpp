#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

//constructor :
    Node(int val){
        data = val;
        next = NULL;
    }

//destructor :
    ~Node(){
        if(next != NULL){
            delete next;
            next = NULL;
        }
    }
};

class List{
    Node* head;
    Node* tail;

public:
    List()  {
        head = NULL;
        tail = NULL;
    }

    ~List()  {
        if(head != NULL){
            delete head;
        }
    }

    void push_front(int val){
        Node* newNode = new Node(val);  // to store dynamicly in memory

        if(head == NULL){
            head = tail = newNode;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void print_list(){
        Node* temp = head;

        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL\n";
    }

    void insert(int val, int pos){
        Node* newNode = new Node(val);

        Node* temp = head;
        for(int i = 0; i < pos-1; i++){
            if(temp == NULL){
                cout << "position is invalid\n";
                return;
            }
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void pop_front(){
        if(head == NULL){
            cout << "LL is empty";
        }
        Node* temp = head;
        
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        Node* temp = head;

        while(temp->next->next != NULL){
            temp = temp->next;
        }

        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    int searchItr(int key){
        Node* temp = head;
        int idx = 0;

        while(temp != NULL){
            if(temp->data == key){
                return idx;
            }

            temp = temp->next;
            idx++;
        }

        return -1;
    }

    int helper(Node* temp, int key){
        if(temp ==NULL){
            return -1;
        }

        if(temp->data == key){
            return 0;
        }

        int idx = helper(temp->next, key);

        if(idx == -1){
            return -1;
        }

        return idx+1;
    }

    int searchRec(int key){
        return helper(head, key);
    }

    void reverse(){
        Node* curr = head;
        Node* prev = NULL;

        while(curr != NULL){
            Node* next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }

        head = prev;
    }

    int getSize(){
        int sz = 0;
        Node* temp = head;

        while(temp != NULL){
            temp = temp->next;
            sz++;
        }

        return sz;
    }

    //imp asked by amazon, adobe, flipkart, qualcomm.
    //task is to remove nth element from the end.
    void removeNth(int n){  //t.c. = O(n),   //s.c. = O(1)
        int size = getSize();
        Node* prev = head;

        for(int i = 0; i < (size-n); i++){
            prev = prev->next;
        }

        Node* toDel = prev->next;
        cout << "to delete data : " << toDel->data << endl;
        prev->next = prev->next->next;
    }

};

int main(){
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    //1 -> 2 -> 3 -> NULL
    ll.print_list();


    ll.push_back(4);
    ll.push_back(5);
    ll.print_list();
    //1 -> 2 -> 3 -> 4 -> 5 -> NULL


    ll.insert(100, 2);
    ll.print_list();
    //1 -> 2 -> 100 -> 3 -> 4 -> 5 -> NULL


    ll.pop_front();
    ll.print_list();
    //2 -> 100 -> 3 -> 4 -> 5 -> NULL

    ll.pop_back();
    ll.print_list();
    //2 -> 100 -> 3 -> 4 -> NULL

    cout << ll.searchItr(3) << endl;
    //2 -> 100 -> 3 -> 4 -> NULL ; So ans => 2

    cout << ll.searchRec(3) << endl;
    //2 -> 100 -> 3 -> 4 -> NULL ; So ans => 2

    ll.reverse();
    ll.print_list();
    //4 -> 3 -> 100 -> 2 -> NULL

    ll.removeNth(2);
    ll.print_list();
    //4 -> 3 -> 100 -> NULL

    return 0;
}