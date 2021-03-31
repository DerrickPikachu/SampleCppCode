//
// Created by pikachin on 2021/3/24.
//

#ifndef SAMPLELINKEDLIST_LINKEDLIST_H
#define SAMPLELINKEDLIST_LINKEDLIST_H
#include "ListNode.h"

class LinkedList {
private:
    ListNode* head;
    ListNode* tail;

public:
    // Used to insert a new node
    void insert(ListNode* node);
};


#endif //SAMPLELINKEDLIST_LINKEDLIST_H
