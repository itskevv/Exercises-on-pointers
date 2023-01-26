#include <iostream>
#include <string>
using namespace std;

const int MAX_STUDENTS = 10;

struct Student 
{
    int roll_no;
    string name;
    int age;
    string address;
};

void print_students_14(Student students[], int n) 
{
    for (int i = 0; i < n; i++) 
	{
        if (students[i].age == 14) 
		{
            cout << students[i].name << endl;
        }
    }
}

void print_even_roll_students(Student students[], int n) 
{
    for (int i = 0; i < n; i++)
	{
        if (students[i].roll_no % 2 == 0)
		{
            cout << students[i].name << endl;
        }
    }
}

void display_student_by_roll(Student students[], int n, int roll) 
{
    for (int i = 0; i < n; i++) 
	{
        if (students[i].roll_no == roll) 
		{
            cout << "Roll No: " << students[i].roll_no << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Age: " << students[i].age << endl;
            cout << "Address: " << students[i].address << endl;
            return;
        }
    }
    cout << "No student found with roll number " << roll << endl;
}

int main() 
{
    Student students[MAX_STUDENTS];

    for (int i = 0; i < MAX_STUDENTS; i++) 
	{
        cout << "Enter the details of student " << i + 1 << ":" << endl;
        cout << "Roll No: ";
        cin >> students[i].roll_no;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Age: ";
        cin >> students[i].age;
        if (students[i].age < 11 || students[i].age > 14) 
		{
            cout << "Invalid age, age should be between 11 and 14" << endl;
            i--;
            continue;
        }
        cout << "Address: ";
        cin >> students[i].address;
    }

    cout << "Students with age 14:" << endl;
    print_students_14(students, MAX_STUDENTS);

    cout << "Students with even roll numbers:" << endl;
    print_even_roll_students(students, MAX_STUDENTS);

    int roll_no;
    cout << "Enter the roll number of the student to display: ";
    cin >> roll_no;
    display_student_by_roll(students, MAX_STUDENTS, roll_no);

    return 0;
}

