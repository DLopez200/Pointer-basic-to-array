#include <iostream>
using namespace std;

class foo {
    public:
    int x;
};

int main(){

    foo f;
    f.x = 111;

    foo* fptr = &f;

    cout << (*fptr).x << endl;
//either top or bottom are the same//
    cout << fptr->x << endl;


    int arr[10] = {1,2,3,4,5,6,7,8,9,10}; 

    int * arr2 = arr; //array is just an int pointer
    cout << *arr << endl;


    int* ptr = &arr[0];

    cout << ptr << endl;
    cout << *ptr << endl;

    cout << *(ptr+1)<< endl;
// both top and botom are equivalent //
    cout << arr[1] << endl;

    for(int i = 0; i < 10; i++){
        cout << *(arr + i )<< endl;
    }

    cout << "break" << endl;

    for(int i = 0; i < 10; i++){
        cout << *(&arr[9] - i) << endl;
    }

    return 0;
}