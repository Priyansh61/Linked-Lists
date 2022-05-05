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
    linked_list ll ;
    ll.push_front(10) ;
    ll.push_front(20) ;
    ll.push_front(30) ;
    ll.push_back(0);
    ll.insert(1,25) ;
    ll.pop() ;
    display(ll) ;
    return 0;
}