// I/O stream library from std, for using cin and cout
#include <iostream>
using namespace std;

/* Remember to write the function phototype here */

/* Edit the code under this line, you can define any helper function */
int fibonacci(int n){
    if (n==1){
        return 0;
    }
    else if(n==2){
        return 1;
    }

    else {
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
// the starting of program
int main()
{

    // the first two numbers;
    int n;
    int fibonacci_1 = 0, fibonacci_2 = 1;
    cout<<"Fibonacci series"<<endl;
    cout<<"Enter the number of terms"<<endl;
    cin>>n;
    for (int i=1;i<=n;i++){
        cout<<fibonacci(i)<<" ";
    }

    // end of the program
    return 0;
}
