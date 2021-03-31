//
// Created by pikachin on 2021/3/24.
//

#ifndef SAMPLELINKEDLIST_LINKEDLIST_H
#define SAMPLELINKEDLIST_LINKEDLIST_H
#include "ListNode.h"

class LinkedList {
private:
    ListNode* head = NULL;

public:
    // Used to insert a new node
    void insert(ListNode* node);

    void showList();
};


#endif //SAMPLELINKEDLIST_LINKEDLIST_H
