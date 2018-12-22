/***********
* Objective: To print the thread behavior on a linux machine
* Owner: gopeshbhardwaj@self.com
************/
#include<iostream>
#include<thread>
#include<string>

using namespace std;

void functionForThreadCalling()
{
    for(int i =0; i<=10; i++)
    {
        cout <<"Calling from newly created thread\n" << endl;
    }
}

int main()
{
    thread thread1(functionForThreadCalling);

    for(int i =0; i<=10; i++)
    {
        cout << "Calling from Main:\n" <<endl;
    }
     thread1.join();
}
