#include <iostream>
#include <string>

using namespace std;

int main() {
    string names[100];
    int ages[100];
    float grades[100];
    int studentCount = 0;
    int choice;

    do {
        cout << "1. Add Student\n2. View All Students\n3. Calculate Average Grade\n4. Exit\nChoose an option (1-4): ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (studentCount >= 100) {
                    cout << "Student limit reached!" << endl;
                } else {
                    cout << "Enter student name: ";
                    cin >> names[studentCount];
                    cout << "Enter age: ";
                    cin >> ages[studentCount];
                    cout << "Enter grade (0-100): ";
                    cin >> grades[studentCount];
                    studentCount++;
                    cout << "Student added successfully!" << endl;
                }
                break;
            case 2:
                if (studentCount == 0) {
                    cout << "No students to display." << endl;
                } else {
                    for (int i = 0; i < studentCount; i++) {
                        cout << "Name: " << names[i] << ", Age: " << ages[i] << ", Grade: " << grades[i] << endl;
                    }
                }
                break;
            case 3: {
                float total = 0;
                for (int i = 0; i < studentCount; i++) {
                    total += grades[i];
                }
                cout << "Average Grade: " << (studentCount == 0 ? 0 : total / studentCount) << endl;
                break;
            }
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
                break;
        }
    } while (choice != 4);

    return 0;
}
