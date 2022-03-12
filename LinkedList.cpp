//
//  list.cpp
//  DSinCplusplus
//
//  Created by Amitesh Bharti on 06/03/22.
//

#include <iostream>
using namespace std;

class Node {
    int val;
    Node * next;
    
    Node() {
        val = NULL;
        next = NULL;
    }
    
    ~ Node() {
        if(this->next != NULL) {
            delete this->next;
        }
        cout << "Deleting data" << this->val;
    }
    
    friend class List;
};


class List {
    
private:
    Node * head;
    Node * tail;
public:
    
    //Constructor
    List(){
        head = NULL;
        tail = NULL;
    }
    
    void insertAtFirst(int val) {
        Node *node = new Node();
        node->val = val;
        if(head == NULL){
            node->next = NULL;
            head = tail = node;
        } else {
            node->next = head;
            head = node;
        }
    }
    
    //Desctructor
    ~List(){
        if (this->head != NULL) {
            delete head;
        }
    }
    //Print all the List
    void getDetails() {
        Node *start = head;
        while(start != NULL ) {
            cout << start->val << "-->";
            start = start->next;
        }
    }
    
    Node* getHeadInfo() {
        return this->head;
    }
    
    int recursiveSearch(Node *p, int val) {
        if(p == NULL) {
            return -1;
        }
        
        if(p->val == val) {
            return 0;
        }
        
        int pos = recursiveSearch(p->next, val);
        return pos+1;
    }
};




---------
File 2
--------



// C++ program to find the smallest number which greater than a given number
// and has same set of digits as given number
#include <iostream>
#include "list.h"
using namespace std;





// Driver program to test above function
int main()
{
    
    cout <<"Link List Example" <<endl;
    List l;
    l.insertAtFirst(10);
    l.insertAtFirst(8);
    l.insertAtFirst(7);
    l.insertAtFirst(6);
    l.insertAtFirst(5);
    
    //Get Complete LinkList
    l.getDetails();
    
    
    Node *head = l.getHeadInfo();
    
    cout <<"Recursive Search" <<endl;
    cout <<"Index Position ="<< l.recursiveSearch(head, 10)<<endl;
    
    return 0;
}
