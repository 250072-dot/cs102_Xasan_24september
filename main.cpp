#include <iostream>
using namespace std;

int main() {

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
    else {cout << number << " is not a prime number" << endl; }

    //problem 8
    int numb;
    cout << "Enter a number: ";
    cin >> numb;
    while (numb > 0) {
        int lastnum=numb%10;
        cout << lastnum;
        numb=numb/10;
    }

    //problem 9
    int number1;
    cout << "enter your n :";
    cin>>number1;
    for (int i=1 ; i<=number1; i++){cout <<i<<"*"<<i<<"="<<i*i<<endl;}

    int sum = (number1*(number1+1)*(2*number1+1)/6);
    for (int i=1 ; i<=number1-1; i++) {

        cout << "("<<i<<"*"<<i<<")"<<"+";
    }
    cout<<"("<<number1<<"*"<<number1<<")"<<"="<<sum<<endl;



    //problem10
    int num1,maxnum1;
    cout << "please enter integers ,(if you want to stop and to know max number among your enterd numbers ,you should 0):";
    cin >> num1 ;
    maxnum1 = num1;

    while (num1 != 0) {
        cout << "please enter integers :";
        cin >> num1 ;
        if (num1 > maxnum1) {maxnum1 = num1;}


    }
   cout << "your max number is " << maxnum1<<endl;



    //problem 11
    int son;
    cout<< "enter an intereg , the input ends if it is 0:";
    cin >> son;
    int numplus=0;
    int numminus=0;
    float total1 = 0;
    float mean1 = 0;
    while (son != 0) {
        total1+=son;
        if (son>0){numplus++ ;}
        else if (son<0){numminus++ ;}
        cout<< "enter number: ";
        cin >> son;
    }
    mean1 = total1/(numminus+numplus);
   cout << "positive numbers "<<numplus << " "<< "negative numbers "<<numminus<<   endl;
   cout << "the total is "<<total1<<endl;
    cout << "the average is "<<mean1 <<endl;

    //problem 12
    char star='*';
    int side;
    cout << "enter a side of square :";
    cin >> side;
    for (int i = 1; i <= side*side; i++) {
        if (i % side==1) {cout <<'\n';}
        cout <<star;
    }


    //problem 13

     char st = '*';
    int tomon;
    cout << "enter lenght of side :";
    cin>>tomon;

    for (int i = 1; i <= tomon; i++) {
        for ( int k = 1 ; k <= i ; k++){cout << st;}
        cout << endl;
    }



    //problem 14

return 0;}