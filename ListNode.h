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
    studentData data;

public:
    ListNode* next;
    ListNode(int no, int usualGrade, int midExam, int finalExam, string name);

    void setNext(ListNode* nextNode);

    void print();
};


#endif //SAMPLELINKEDLIST_LISTNODE_H
