#ifndef LINKED_LIST_H
#define LINKED_LIST_H
#include "node.h"

class linked_list
{
    
    friend class node ;
    node head{0,nullptr} ;
    node tail{0,nullptr} ;
    int size{} ;
public:
    linked_list();
    void push_front(int val) ;
    void push_back(int val) ;
    void insert(int index ,int val) ;
    node* get_node (int index) ;
    int pop_back() ;
    int pop_front() ;
    int pop(int index) ;
    node get_head() const{ return head; } ;
    node get_tail() const{ return tail ;} ;
    ~linked_list();

};

#endif // LINKED_LIST_H
