// FILE: node.cpp
// IMPLEMENTS: The functions of the node class and the
// linked list toolkit (see node1.h for documentation).
// INVARIANT for the node class:
// The data of a node is stored in data_field, and the link in link_field.
// src: //source: http://www.cs.colorado.edu/~main/chapter5/

#include "node.h"
#include <cassert>    // Provides assert
#include <cstdlib>    // Provides NULL and size_t
#include <iostream>
using namespace std;


size_t list_length(const node* head_ptr){
  size_t length = 0;

  for(const node* cursor = head_ptr; cursor != NULL; cursor = cursor->link())
  {
    length++;
  }
  return length;
}

void list_head_insert(node*& head_ptr, const node::value_type& entry){
  node *new_node = new node(entry,head_ptr);
  head_ptr = new_node;
}

void list_insert(node* previous_ptr, const node::value_type& entry) {
  std::cout << "list_insert called" << std::endl;
  node* t = new node;
  t->set_data(entry);
  previous_ptr->set_link(t);
  //test it has worked
  std::cout << "TEST SHOULD PRINT 1.5" << std::endl;
  std::cout << "PREVIOUS NODE: " << previous_ptr->data() << " inserted node: " << (previous_ptr->link())->data() << std::endl;
}

node* list_search(node* head_ptr, const node::value_type& target){
  //we're going to find the node and return that
  std::cout << "list_search works \n";
  node* cursor;
  for(node* cursor = head_ptr; cursor != NULL; cursor = cursor->link())
  {
    std::cout << cursor->data() << std::endl;
    if(cursor->data() == target)
    {
      std::cout << "Returning cursor" << std::endl;
      return cursor;
    }
  }
  return cursor;
}

const node* list_search(const node* head_ptr, const node::value_type& target){}

node* list_locate(node* head_ptr, size_t position) {}

const node* list_locate(const node* head_ptr, size_t position) {}

void list_head_remove(node*& head_ptr){}

void list_remove(node* previous_ptr){}

void list_clear(node*& head_ptr){}

void list_copy(const node* source_ptr, node*& head_ptr, node*& tail_ptr) {}
