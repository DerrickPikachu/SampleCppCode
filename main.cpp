#include <iostream>
#include "ListNode.h"
#include "LinkedList.h"

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

bool hasNext() {
    string check;

    cout << "Do you want to input other student? yes/no:";
    cin >> check;
    while (check != "yes" && check != "no") {
        cout << "Wrong input, please type your answer again:";
        cin >> check;
    }

    return check == "yes";
}

int main() {
    LinkedList studentList;
    bool isNext = true;

    while (isNext) {
        studentList.insert(input());
        isNext = hasNext();
    }

    studentList.showList();
    return 0;
}
