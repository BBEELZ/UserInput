#include <iostream>

using namespace std;

int main()
{
    //Prompt user for their name
    cout << "What is your name? ";

    //Get user name
    string name;
    cin >> name;

    //Prompt user for the year they were born
    cout << "What year were you born? ";

    //Get user birth year
    int yearOfbirth;
    cin >> yearOfbirth;

    //Prompt user for the current year
    cout << "What year is it currently? ";

    //Get current year
    int currentYear;
    cin >> currentYear;

    //Display result
    int age;
    age = currentYear - yearOfbirth;
    cout << name << " you are " << age << " years old!" << endl;
}