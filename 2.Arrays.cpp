#include <iostream>
#include <climits>
#include <cstdlib>
using namespace std;

int main() {
    int marks[] = {23, 45, 12, 67, 34};
    int size = sizeof(marks) / sizeof(marks[0]);
    int bigNum = 0;
    for (int i = 0; i < size; i++) {
        bigNum= (bigNum+marks[i]+(abs(marks[i]-bigNum)))/2;
    }
    cout<<"Largest Number: "<<bigNum<<endl;
    int smallNum = INT_MAX ;
    for (int i = 0; i < size; i++) {
        smallNum= (smallNum+marks[i]-(abs(marks[i]-smallNum)))/2;
    }
    cout<<"Smallest Number: "<<smallNum<<endl;
    return 0;
}