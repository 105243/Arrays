#include <QCoreApplication>
#include <iostream>
using namespace std;


int Arr1[4] = { 3,8,10,15 };
int Arr2[4] = { 3,4,9,20 };
const int size1 = sizeof(Arr1)/ sizeof(*Arr1);
const int size2 = sizeof(Arr2)/ sizeof(*Arr2);
const int size3 = size1+size2;
int Arr3[size3];



bool check(int num) {
    int numArrBrr = 0;
    int numCrr = 0;

    for (int i = 0; i < size1; i++) {
        if (Arr1[i] == num) numArrBrr++;
    }

    for (int i = 0; i < size2; i++) {
        if (Arr2[i] == num) numArrBrr++;
    }

    for (int i = 0; i < size3; i++) {
        if (Arr3[i] == num) numCrr++;
    }

    if (numArrBrr - numCrr == 0) return false;
}
void sort (){

    for (int i =0; i < size3; i++){
        int small = 21;

    for (int i =0; i < size1; i++){
        if (Arr1[i] < small){

            if (check(Arr1[i]))small = Arr1[i];
        }
    for (int i =0; i < size2; i++){
        if (Arr2[i] < small){
            if (check(Arr2[i])) small = Arr2[i];
        }

        }
}
     Arr3[i] = small;
    }

}
int main()
{
    sort ();
    for (int i = 0; i<size3; i++){
        cout << Arr3[i] << endl;
    }

    return 0;
}

