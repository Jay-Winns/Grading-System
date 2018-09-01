#include <iostream>
using namespace std;

int main()
{
    double score;

    cout << "Please enter your score"<<endl;
    cin >> score;

    if(score >=80 && score <=100){
        cout << "You have an A.";
    }
    else if(score >=75 && score <=79){
        cout << "You have a B+.";
    }
    else if(score >=70 && score <=74){
        cout << "You have a B.";
    }
    else if(score >=65 && score <=69){
        cout << "You have a C+.";
    }
    else if(score >=60 && score <=64){
        cout << "You have a C.";
    }
    else if(score >=55 && score <=59){
        cout << "You have a D+.";
    }
    else if(score >=50 && score <=54){
        cout << "You have a D.";
    }
    else if(score >=40 && score <=49){
        cout << "You have an E.";
    }
    else if(score >=0 && score <=39){
        cout << "You have an F. Please you would have to resit the paper";
    }
    else{
        cout << "You need to enter a valid score."<<endl;
    }
    return 0;
}
