//
// Created by pikachin on 2021/3/24.
//

#include "ListNode.h"
#include <iostream>
#include <utility>

using namespace std;

//ListNode::ListNode(auto data) : data(data) {}

ListNode::ListNode(int no, int usualGrade, int midExam, int finalExam, string name) {
    this->data.no = no;
    this->data.usualGrade = usualGrade;
    this->data.midExam = midExam;
    this->data.finalExam = finalExam;
    this->data.name = move(name);
    this->next = NULL;
}

void ListNode::print() {
    cout << this->data.no << " "
         << this->data.name << " "
         << this->data.usualGrade << " "
         << this->data.midExam << " "
         << this->data.finalExam << " ";
}

int ListNode::getNumber() {
    return data.no;
}




