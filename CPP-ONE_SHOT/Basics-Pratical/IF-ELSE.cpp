// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int age ;
//     cout << "Enter Your age to check if adult or not :";
//     cin >> age ;

//     if(age > 18 ){
//         cout << "You are adult ";
//     }else{
//         cout << "You are Minor";
//     }

//     return 0;
// }

// P2
// #include <bits/stdc++.h>
// using namespace std;
/* A school has following rules for grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A
Ask user to enter marks and print the corresponding grade
*/
// int main()
// {
//     int marks;
//     cout << "Enter the Marks of the Student : ";
//     cin >> marks;
//     if (marks < 25)
//     {
//         cout << "Students grade is  F(Fail)";
//     }
//     else if (marks >= 25 && marks <= 44)
//     {
//         cout << "Students grade is E ";
//     }
//     else if (marks >= 45 && marks <= 49)
//     {
//         cout << "Students grade is D ";
//     }
//     else if (marks >= 50 && marks <= 59)
//     {
//         cout << "Students grade is C ";
//     }
//     else if (marks >= 60 && marks <= 79)
//     {
//         cout << "Students grade is B ";
//     }
//     else
//     {
//         cout << "Students grade is A ";
//     }

//     return 0;
// }

// P3
/*
Take the age from the user and then decide accordingly
1. If age < 18, print -> not eligible for job
2. If age >= 18 and age <= 54, print -> eligible for job
3. If age >= 55 and age <= 57, print -> eligible for job, but retirement soon.
4. If age > 57, print -> retirement time.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cout << "Enter Your Age :: ";
    cin >> age;

    if (age < 18)
    {
        cout << "Not Eligible For Job !";
    }
    else if (age <= 57)
    {
        cout << " Eligible For Job";
        if (age >= 55)
        {
            cout << ", But Retirement Soon.";
        }
    }

    else
    {
        cout << "Retirement Time";
    }

    return 0;
}