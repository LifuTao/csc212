#include <iostream>
#include <cstdlib>
#include "node.h"

int main(){
    node *head_ptr;
    head_ptr = NULL;
    node *p, *q, *r,*s;
    p = new node;
    q = new node(4.9);
    r = new node(1.6, p);
    s = new node(13.7, q);
    std::cout<<"address: "<<&p<<std::endl;
    std::cout<<"data: "<<(*p).data()<<std::endl;
    //member selection operator: (*p).data() is the same as p->data()
    std::cout<<"data: "<< p->data()<<std::endl;
    std::cout<<"link: "<< p->link()<<std::endl;
    head_ptr = s;
    //test
    std::cout << "The length of the list is " << list_length(head_ptr);
    // node *entry = new node(67.9);
    list_head_insert(head_ptr,67.9);
    std::cout << "Entry: " << head_ptr->data() << std::endl;
    std::cout << "S: " << s << " head. " << head_ptr->link() << std::endl;
}
