#include <iostream>
#include "linked_list.h"
#include "node.h"

using namespace std;

void display(linked_list a) {
    node temp ;
    temp = a.get_head();
    cout << "[" ;
    do 
    {
        cout << temp.get_val() << " " ;
        temp = temp.get_next() ;
    } while( temp.get_next_ptr()!=  nullptr) ;
    cout << "]" ;
}
int main (){
    linked_list test;
    cout << "hello" << endl ;
    test.push_front(10) ;
    test.push_front(20) ;
    test.push_front(30) ;
    test.push_front(40) ;
    test.push_back(50) ;
    test.insert(3,60) ;
    cout << test.pop_front() << endl ; 
    cout << test.pop_back() << endl; 
    display(test) ;
    cout << test.pop(2) << endl ;
    display(test) ;
    return 0;
}
