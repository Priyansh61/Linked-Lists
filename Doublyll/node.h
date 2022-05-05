#ifndef NODE_H
#define NODE_H

class node
{
    int value{0} ;
    node *next{nullptr} ;
    node *prev{nullptr} ;
    friend class linked_list ;
public:
    node();
    node(int value , node *next )
    : value{value} ,  next{next} {}
    node get_next() { return *next ; }
    node* get_next_ptr() { return next ;} 
    int get_val () { return value ; }
    node(int value)
    {
        value = value ;
    }
    ~node();

};

#endif // NODE_H
