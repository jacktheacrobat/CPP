#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
int num = 0;

//function that counts from 0 to 20
void countUp(int num1)
{
    while (num1 < 21) {
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        cout << "Thread 1: " << num1 << endl;
        num = num1;
        num1++;
    }
}

//function that counts from 20 to 0
void countDown(int num2)
{
    while (num2 > -1) {
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        cout << "Thread 2: " << num2 << endl;
        num = num2;
        num2--;
        
    }
}

int main()
{
    //initiate counting up in thread1
    thread thread1(countUp, num);
    //ends thread when task is complete
    thread1.join();
    cout << "Thread 1 is done." << endl;

    //initiate counting down in thread2
    thread thread2(countDown, num);
    //ends thread when task is complete
    thread2.join();
    cout << "Thread 2 is done." << endl;
 
    return 0;
}
