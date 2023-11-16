#include <iostream>
#include "Vector3.h"

using namespace std;

void printVector(const Vector3 &vec)
{
    cout << vec.x << ", " << vec.y << ", " << vec.z << endl;
}

int main(int argc, char *argv[])
{
    printVector(Vector3(1, 2, 3) + Vector3(7, 2, 5));
    printVector(Vector3(3, 4, 5) - Vector3(2, 9, 3));

    printVector(Vector3(1, 2, 3) * 5);

    cout << Vector3(1, 2, 3).Dot(Vector3(3, 2, 1)) << endl;

    printVector(Vector3(1, 2, 3) * Vector3(4, 5, 6));

    return 0;
}