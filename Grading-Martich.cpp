//The program will read in the student’s score (two quiz and two exams)
//output the student’s record, which consists of two quiz and two exam scores as well as
//output the student’s average numeric score for the entire course and the final letter grade


#include <iostream>
using namespace std;

int main ()

{
double quizze1,quizze2; // 10 points -
int numScore;
double quizZess, midPor, finalPor;
double midterm,finalEx;  // 100 points - final 50% - midterm 25% - all quizzes 25%

cout<< "Insert the grade for the first quizzes: "<<endl;
cin>> quizze1;
    if (quizze1 >=0 && quizze1 <10)
        {
            cout<< "Insert the grade for the second quizzes: "<<endl;
            cin>> quizze2;
                if (quizze2 >=0 && quizze2 <10)
                    {
                        cout<< "Insert the grade for the midterm test: "<<endl;
                        cin>> midterm;
                            if (midterm >=0 && midterm <100)
                                {
                                    cout<< "Insert the grade for the final test: "<<endl;
                                    cin>> finalEx;
                                        if (finalEx >=0 && finalEx < 100)
                                            {
                                                quizZess=((quizze1+quizze2)/20)*25;
                                                midPor=(midterm*0.25);
                                                finalPor=(finalEx*0.50);

                                                numScore=quizZess + midPor + finalPor;

                                                cout<< "*** "<<"Grade for the first quizzes:   "<< quizze1 <<"  ***"<<endl;
                                                cout<< "*** "<<"Grade for the second quizzes:  "<< quizze2 <<"  ***"<<endl;
                                                cout<< "*** "<<"Grade for the midterm test:    "<< midterm <<" ***"<<endl;
                                                cout<< "*** "<<"Grade for the final test:      "<< finalEx <<" ***"<<endl;
                                                cout<< "*** "<<"The student numeric score:     "<< numScore<<" ***"<<endl;

                                                switch (numScore)
                                                    {
                                                        case 90 ... 100:
                                                            cout<<"*** "<<"The student final letter score: A"<<" ***";
                                                            break;
                                                        case 80 ... 89:
                                                            cout<<"*** "<<"The student final letter score: B"<<" ***";
                                                            break;
                                                        case 70 ... 79:
                                                            cout<<"*** "<<"The student final letter score: C"<<" ***";
                                                            break;
                                                        case 60 ... 69:
                                                            cout<<"*** "<<"The student final letter score: D"<<" ***";
                                                            break;
                                                        case 1 ... 59:
                                                            cout<<"*** "<<"The student final letter score: F"<<" ***";
                                                            break;
                                                        default:
                                                            cout<<"*** "<<"An invalid command was inserted";
                                                    }
                                            }
                                        else
                                            cout<<"Insert a value from 1 - 100";
                                }
                            else
                                cout<<"Insert a value from 1 - 100";
                    }
                else
                    cout<<"Insert a value from 0 - 10";

        }
    else
        cout<<"Insert a value from 0 - 10";

return 0;
}
