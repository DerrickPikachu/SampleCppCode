//
// Created by pikachin on 2021/3/24.
//

#ifndef SAMPLELINKEDLIST_LISTNODE_H
#define SAMPLELINKEDLIST_LISTNODE_H
#include <string>
#include "studentData.h"

using namespace std;

class ListNode {
private:
    // Node data
    studentData data;

public:
    // The next node pointer
    ListNode* next;

    // Construct the node
    ListNode(int no, int usualGrade, int midExam, int finalExam, string name);

    // Output the data
    void print();
};


#endif //SAMPLELINKEDLIST_LISTNODE_H
