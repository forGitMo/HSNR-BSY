#include <iostream>
#include <thread>
using namespace std;
void threadfunc1(int &c)
{
    c = 0;
    c=2 * c;
    c=c+1;
    cout << c << endl;
}
 void threadfunc2(int &c)
{
    c=c+1;
    cout  << c << endl;
}
 void threadfunc3(int &c)
{
    c=c-1;
    cout  << c << endl;
}



int main()
{
    int c = 2;

    thread th1(threadfunc1, ref(c));


    thread th2(threadfunc2, ref(c));

    thread th3(threadfunc3, ref(c));

    th1.join();
    th2.join();
    th3.join();


    cout << "\n" << c ;
    return 0;
}
