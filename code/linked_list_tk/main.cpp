#include <iostream>
#include <cstdlib>
#include "node.h"

int main(){
    node *head_ptr;
    head_ptr = NULL;
    node *p, *q, *r,*s,*t;
    double insert_value;
    char input_choice;
    p = new node(1.0);
    q = new node(4.9);
    r = new node(1.6, p);
    s = new node(13.7, q);
    t = new node;
    std::cout<<"address: "<<&p<<std::endl;
    std::cout<<"data: "<<(*p).data()<<std::endl;
    //member selection operator: (*p).data() is the same as p->data()
    std::cout<<"data: "<< p->data()<<std::endl;
    std::cout<<"link: "<< p->link()<<std::endl;
    head_ptr = s;
    //test
    std::cout << "The length of the list is " << list_length(head_ptr) << std::endl;
    // node *entry = new node(67.9);
    std::cout << "Enter 'y' to insert a double to the front of the list" << std::endl;
    std::cin >> input_choice;
    if(input_choice == 'y')
    {
    std::cout << "Enter a double to insert to the front of the list" << std::endl;
    std::cin >> insert_value;
    list_head_insert(head_ptr,insert_value);
    std::cout << "Entry: " << head_ptr->data() << std::endl;
    std::cout << "S: " << s << " head. " << head_ptr->link() << std::endl;
    }
    //list_insert test
    std::cout << "Enter a double value you want to insert after r" << std::endl;
    std::cin >> insert_value;
    list_insert(r,insert_value);
    //t becomes a copy of r should output 1.6
    head_ptr = r;
    std::cout << "Enter a double value you want to search for in r" << std::endl;
    std::cin >> insert_value;
    t = list_search(head_ptr,insert_value);
    std::cout << t->data() << std::endl; {
      /* data */
    };


}
