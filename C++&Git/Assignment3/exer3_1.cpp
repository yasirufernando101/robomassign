// I/O stream library from std, for using cin and cout
#include <iostream>
using namespace std;

// function phototype
bool arrayReverse(char* array, int start, int end) {
    if (start>end){
        return false;
    }

    else{
        for (int i=start;i<(start+end+1)/2;i++){
            char temp=array[end-i];
            array[end-i]=array[i];
            array[i]=temp;
        }
    }

}

// the starting of program
int main()
{
    // the input array
    char array[100] = "robomaster2022";
    // the input number
    int startingPoint=0, endingPoint=5;

    // call the function
    if (arrayReverse(array, startingPoint, endingPoint)) 
    {
        // output the result
        cout << array << endl;
    }
    else 
    {
        // output the error
        cout << "Error, please check the input" << endl;
    }

    // end of the program
    return 0;
}
