#include <iostream>
using namespace std;

int main() {
/*
//problem 1
int sum=0;
for (int i = 1; i<=10; i=i+1) {
    cout << i << endl;
       sum = sum +i;
}
    //problem 2
cout << "sum is "<<sum << endl;

    //problem 3
    for (int i = 1; i <= 100; i+=1) {if (i%5 != 0) {cout << i << endl;}}


  //problem 4
    int n;
    cout << "enter number :";
    cin >> n;
    for (int i=1; i<=n; i++) {if (i%10==0) {cout << i <<";"<<endl;}}


    //problem 5

    for (int i = 65 ; i<=90 ; i++) {
        cout << char(i) << " ";
        if ((i-64)%5==0) {cout << '\n';}
    }

    //problem 6
    cout << "how many subjects do you study? :";
    int subj;
    cin >> subj;
    int cridet;
    int total = 0;
    float total_score = 0;
    float grade;
    for (int i = 1; i <= subj; i++) {
        cout << "enter "<<i<< "-th subject's cridet and your grade: ";
        cin >> cridet>>grade;
        total=total+cridet;
        total_score=total_score+cridet*grade;

    }
   float GPA = total_score/total;
   cout << "your GPA is: " << GPA << endl;


    //PROBLEM 7

    int number;
    int factors=0;
    cout << "Enter a number: ";
    cin >> number;
    int deadline = pow(number, 1./2);
    for (int i = 1; i <= deadline; i++) {if (number % i == 0) {factors = factors + 1;} }
    if (factors ==1) {cout << number << " is a prime number" << endl;}
    else {cout << number << " is not a prime number" << endl; }     */

    //problem 8
    int numb;
    cout << "Enter a number: ";
    cin >> numb;
    while (numb > 0) {
        int lastnum=numb%10;
        cout << lastnum;
        numb=numb/10;
    }


return 0;}