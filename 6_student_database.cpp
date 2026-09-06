// 6. Student database program using 1D arrays.
// Maintains data of 5 students (name, enrolment number, branch).
// If an entered enrolment number already exists, display that student's details.
// Otherwise, store the new entry.

#include <iostream>
using namespace std;

int main() {
    string name[5], branch[5];
    int enrolment[5];
    int count = 0;

    for (int i = 0; i < 5; i++) {
        int enrolNo;
        cout << "\nEnter enrolment number for entry " << i + 1 << ": ";
        cin >> enrolNo;

        bool found = false;
        for (int j = 0; j < count; j++) {
            if (enrolment[j] == enrolNo) {
                cout << "Enrolment number already exists! Details:\n";
                cout << "Name: " << name[j] << ", Enrolment: " << enrolment[j]
                     << ", Branch: " << branch[j] << endl;
                found = true;
                break;
            }
        }

        if (!found) {
            enrolment[count] = enrolNo;
            cout << "Enter name: ";
            cin >> name[count];
            cout << "Enter branch: ";
            cin >> branch[count];
            count++;
        }
    }

    cout << "\n--- Student Database ---\n";
    for (int i = 0; i < count; i++) {
        cout << "Name: " << name[i] << ", Enrolment: " << enrolment[i]
             << ", Branch: " << branch[i] << endl;
    }

    return 0;
}
