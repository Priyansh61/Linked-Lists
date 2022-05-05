#include "linked_list.h"
#include <iostream>
#include <errno.h>
linked_list::linked_list()
{
}

void linked_list::push_front(int val) {
    if (size == 0 ) {
        head.value = val ;
        head.next = &tail ;
        node *p ;
        p = new node (head) ;
        tail.prev = p ;
        head.prev = nullptr ;
        size++ ;
        return ;
    }
    node a ;
    a.value = val ;
    node *p  ;
    p = new node(head) ;
    node *y ;
    y = new node(a) ;
    a.next   = p ;
    a.next->prev = y ;
    a.prev = nullptr ;
    head = a ;
    size ++ ;
}

void linked_list::push_back(int val) {
    node a ;
    a.value = val ;
    node *p ;
    p = new node(a) ;
    node *y ;
    y = new node(tail) ;
    tail = a ;
    tail.next = y ;
    tail.prev = y->prev ;
    size ++ ;
}

void linked_list::insert(int index , int val) {
    if ( index==0) {
        this->push_front(val) ;
        return ;
    }
    if ( index == size ) {
        this->push_back(val) ;
        return ;
    }
    if ( index > size ) {
        std::cerr << "Index out of range" << std::endl ;
    }
    node *temp {&head} ;
    int i = 1 ;
    while ( i < index ) {
        temp = temp->get_next_ptr() ;
        i++ ;
    }
    node insert_node ;
    insert_node.value = val ;
    node *next_current {temp->get_next_ptr()} ;
    insert_node.next = next_current ;
    node *p ;
    p = new node( insert_node) ;
    temp->next = p ;
    size ++ ;
    
    
}

node* linked_list::get_node(int index) {
    node *temp ;
    temp = &head ;
    for(int i {} ; i < index ; i++ ) {
        temp = temp->get_next_ptr() ;
    }
    return temp ;
}

int linked_list::pop_back() {
    node *temp = get_node(size-2) ;
    int value {tail.value} ;
    tail = *temp ;
    tail.next = nullptr ;
    return value ;
}

int linked_list::pop_front() {
    int val { head.value} ;
    head= head.get_next() ;
    if(&head==nullptr)
        tail=NULL ; 
    size-- ;
    return val ;
}

int linked_list::pop(int index) {
    node *temp { get_node(index-1) } ;
    node *next { temp->get_next_ptr() } ;
    node *pop {next} ;
    int val{next->value} ;
    next = next->get_next_ptr() ;
    temp->next = next ;
    pop = nullptr ;
    delete pop ;            
    return val ;
}
linked_list::~linked_list()
{
}

