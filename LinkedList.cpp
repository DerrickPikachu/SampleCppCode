//
// Created by pikachin on 2021/3/24.
//

#include "LinkedList.h"

void LinkedList::insert(ListNode *node) {
    if (head) {
        // The list is empty
        head = node;
    } else {
        // The list is not empty
        ListNode* back = NULL;
        ListNode* front = head;
        while (front && front->getNumber() < node->getNumber()) {
            back = front;
            front = front->next;
        }

        if (!back) {
            // The node needs to be inserted in front of the current head
            node->next = head;
            head = node;
        } else {
            // Insert the node into the position I found
            node->next = front;
            back->next = node;
        }
    }
}
