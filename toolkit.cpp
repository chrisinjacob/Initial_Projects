#include "toolkit.h"
#include <cassert>
#include <cstdlib>
using namespace std;

std::size_t list_length (const node* head_ptr){
    const node* cursor;
    size_t cnt = 0;
    for (cursor = head_ptr; cursor!= NULL; cursor = cursor->link())
        cnt++;
    return cnt;
}
void list_head_insert (node* &head_ptr, const node:: value_type& entry){
    head_ptr = new node (entry, head_ptr);
}
void list_insert (node*previous_ptr, const node::value_type& entry){
    node* insert_ptr;
    insert_ptr = new node (entry, previous_ptr->link());
    previous_ptr->set_link(insert_ptr);
}
node* list_search(node* head_ptr, const node::value_type& target){
    node* cursor;
    for (cursor = head_ptr; cursor!= NULL; cursor->link())
    {
        if (target == cursor->data())
            return cursor;
    }
    return NULL;
}
const node* list_search (const node* head_ptr, const node::value_type& target){
    const node* cursor;
    for (cursor = head_ptr; cursor!= NULL; cursor->link())
    {
        if (target == cursor->data())
            return cursor;
    }
    return NULL;
}
node* list_locate (node* head_ptr, std::size_t position){
    node* cursor;
    size_t i;
    assert (0<position);
    cursor = head_ptr;
    for (i=1; (i<position)&& (cursor != NULL); i++)
        cursor = cursor->link();
    return cursor;
}
const node* list_locate (const node*head_ptr, std::size_t position){
    const node* cursor;
    size_t i;
    assert (0<position);
    cursor = head_ptr;
    for (i=1; (i<position)&& (cursor != NULL); i++)
        cursor = cursor->link();
    return cursor;
}
void list_head_remove (node* & head_ptr){
    node* remove_ptr;
    remove_ptr = head_ptr;
    head_ptr = head_ptr->link();
    delete remove_ptr;
}
void list_remove (node* previous_ptr){
    node* remove_ptr;
    remove_ptr = previous_ptr->link();
    previous_ptr->set_link(remove_ptr->link());
    delete remove_ptr;
}
void list clear (node*& head_ptr){
    while (head_ptr != NULL)
        list_head_remove (head_ptr);
}
void list copy(const node* source_ptr, node* &head_ptr, node* &tail_ptr){
    head_ptr = NULL;
    tail_ptr = NULL;
    //if it is empty
    if (source_ptr == NULL)
        return;
    list_head_insert(head_ptr, source_ptr->data());
    tail_ptr = head_ptr;
    source_ptr = source_ptr->link();
    while (source_ptr != NULL){
        list_insert (tail_ptr, source_ptr->data());
        tail_ptr = tail_ptr->link();
        source_ptr = source_ptr->link();
}
}