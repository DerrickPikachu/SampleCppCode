#include <iostream>
#include "ListNode.h"

using namespace std;

ListNode* input() {
    int no, usualGrade, midExam, finalExam;
    string name;

    cout << "Please input the stu number:" << endl;
    cin >> no;
    cout << "Please input the stu name:" << endl;
    cin.get();
    getline(cin, name);
    cout << "Please input the stu usualGrade:" << endl;
    cin >> usualGrade;
    cout << "Please input the stu midExam:" << endl;
    cin >> midExam;
    cout << "Please input the stu finalExam:" << endl;
    cin >> finalExam;

    return new ListNode(no, usualGrade, midExam, finalExam, name);
}

int main() {
//    auto* newNode = new ListNode(1, 40, 50, 60, "derrick");
//    newNode->print();
    ListNode* testNode = input();
    testNode->print();
    return 0;
}
