//Including the Header Files.
#include<iostream>
#include<time.h>
using namespace std;
//Main Function
int main()
{
    srand(time(0));     //rand seeding for random
    string pass;
    //Give all the data which is required by the string or password
    string data = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                  "abcdefghijklmnopqrstuvwxyz"
                  "1234567890"
                  "!@#$%^&*()_+=`~<>/?[]{},";
 for (int i =- 1; i <= 12; i++)
 {
     pass = pass + data[rand() % 93];   //It will take random data
 }
 cout<<"Your Generated password is:"<<pass;
 return 0;
}



