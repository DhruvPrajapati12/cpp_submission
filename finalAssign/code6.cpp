// Q6: The grade of a student can be based on the following criteria:
// Attendance must be more than 50%
// Tests scores must be more than .70
// Total score must be more than 5600 (just go with this number)
// The grades are awarded as follows:
// Grade is 10: if all conditions are met
// Grade is 9: if conditions 1 and 2 are met
// Grade is 8: if conditions 3 and 3 are met
// Grade is 7: if conditions 1 and 3 are met
// Grade is 6: if only one condition is met
// Grade is 5: if none of the conditions are met
// Write a cpp program to display the grades, based on the scores students secured in individual criteria.
// Ex: input 53, 0.6, 5602 res: 10
// Input 45, 0, 4500 res: 6

#include <iostream>
using namespace std;

int main()
{
    int attendence;
    double testScore;
    int totalScore;
    int grade;

    cout << "Enter the Percentage of Attendence: ";
    cin >> attendence;

    cout << "Enter the test score: ";
    cin >> testScore;

    cout << "Enter the total score: ";
    cin >> totalScore;

    if(attendence > 50 && testScore > 0.7 && totalScore > 5600)
    {
        grade = 10;
    } 
    else if(attendence > 50 && testScore > 0.7)
    {
        grade = 9;
    }
    else if(testScore > 0.7 && totalScore > 5600)
    {
        grade = 8;
    }
    else if(attendence > 50 && totalScore > 5600)
    {
        grade = 7;
    }
    else if(attendence > 50 || testScore > 0.7 || totalScore > 5600)
    {
        grade = 6;
    }
    else 
    {
        grade = 5;
    }

    cout << "Grade: " << grade << endl;

  return 0;
}