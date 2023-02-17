// Monday-Week-2
/************************************
Student first name: Ashish
Student last name: Bada
*************************************/

#include <iostream>
using namespace std;

/************************************
Be sure to connect this replit project
with GitHub !
*************************************/

/************************************
declare a constant integer named:
NBR_SCORES with a value of 3
*************************************/
const int NBR_SCORES = 3;
/************************************
IMPORTANT!
Use the above constant in your code
do not use a literal number 3
anywhere in your code!!!!!
*************************************/

/************************************
define a class named Student
The class will have 3 private members:
1) a string for first name
2) a string for last name
3) an integer array of size NBR_SCORES


the class will have 3 public members:
NOTE: only prototype the functions in the class
1) a void function named setName with 2 string parameters
to set the student first name and last name
2) a void function named setScores with no parameters
setScores will prompt the user for scores to pupulate
the private member array: scores 
see sample output
3) a void function named showScores with no parameters
showScores will display the values in
the private member array: scores
and will also display the average scores.
see sample output
Note: showScores is a const function
*************************************/
class Student {
  private:
    string firstName;
    string lastName;
    int scores[NBR_SCORES];
  public:
    void setName(string, string);
    void setScores();
    void showScores() const;
};
/************************************
In the main function:
1) declare a Student object named student
2) declare 2 srtrings for first name and last name
3) prompt the user for the student's
first name and last name
4) use setName to set the student object's
first name and last name
5) use setScores to set the student' scores
6) use showScores to show the student's scores
*************************************/
int main()
{
    Student student; 
    std::string firstName, lastName;
    std::cout << "Enter student's first-name and last-name: ";
    std::cin >> firstName >> lastName;
    student.setName(firstName, lastName);
    student.setScores();
    student.showScores();
    std::cout << "Goodbye" << std::endl;
    return 0;
}
/************************************
Define your member funcrtions 
below the main function
*************************************/
void Student::setName(std::string firstName, std::string lastName)
{
    this->firstName = firstName;
    this->lastName = lastName;
}

void Student::setScores()
{
    for (int i = 0; i < NBR_SCORES; i++)
    {
        std::cout << "Enter score " << i + 1 << " for " << firstName << " " << lastName << endl;
        std::cin >> scores[i];
    }
}

void Student::showScores() const
{
    int total = 0;
    std::cout << "Scores for " << firstName << " " << lastName << " are " << endl;
    for (int i = 0; i < NBR_SCORES; i++)
    {
        std::cout << scores[i] << " ";
        total += scores[i];
    }
    std::cout << std::endl;
    std::cout << "The average is: " << (total / NBR_SCORES) << std::endl;
}
/********************************************
// YOUR OUTPUT
// copy-and-paste your output here

Enter student's first-name and last-name: Ashish Bada
Enter score 1 for Ashish Bada
100
Enter score 2 for Ashish Bada
98
Enter score 3 for Ashish Bada
94
Scores for Ashish Bada are 
100 98 94 
The average is: 97
Goodbye

// SAMPLE OUTPUT
Enter student's first-name and last-name: Brad Gilbert
Enter score 1 for Brad Gilbert
100
Enter score 2 for Brad Gilbert
98
Enter score 3 for Brad Gilbert
94
Scores for Brad Gilbert are 
100 98 94 
The average is: 97
Goodbye
**********************************************/
