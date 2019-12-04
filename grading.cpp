//Grading program Shaun Dixon
//Program allows user to enter the grade score they scored in a programming class (0-100) and gives a response
//if they scored 100 it tells them they got a perfect score, then grades based on score
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    cout << "Enter your score from the programming class (0-100) " << "to retrieve your grade: \n";
    int score;
    cin >> score;

    if (score > 100 || score <= 0){
        cout << "You have entered an invalid score, please try again \n";
    }else{
        if (score == 100){
            cout << "You have scored a perfect score and achieved a grade A!  Congratulations\n";
        }else if(score >= 90 && score < 101){
            cout << "You have achieved a grade     A \n";
        }else if(score >=80 && score < 90){
            cout << "You have achieved a grade     B \n";
        }else if(score >=70 && score < 80){
            cout << "You have achieved a grade     C \n";
        }else if(score >=60 && score < 70){
            cout << "You have achieved a grade     D \n";
        }else if(score <= 59){
            cout << "You have achieved a grade     F \n";
        }
    }

    return 0;
}
