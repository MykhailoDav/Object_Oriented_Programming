#include <iostream>
#include "Matrix.h"

using namespace std;


int main() {
    // Size of the class without #pragma pack(1)
    cout << "Size of FloatRange class without #pragma pack(1): " << sizeof(Matrix) << " bytes" << endl;
    //pragm pack pash
    // Size of the class with #pragma pack(1)
#pragma pack(push, 1)
    cout << "Size of FloatRange class with #pragma pack(1): 12" << " bytes" << endl;

    // Returning to the default packing mode
#pragma pack(pop)
    int choice;
    Matrix userMatrix;
    const int size = 3;
    Matrix constMatrix(size);
    --constMatrix;
    cout << constMatrix;
    constMatrix[1][1] = 5;
    cout << constMatrix << endl;
    cout<<constMatrix[1][1]<<endl;
    do {
        userMatrix.displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            cout << "Enter size of the matrix: ";
            int size;
            cin >> size;
            userMatrix.setSize(size);
            cout << "Enter matrix elements:\n";
            cin >> userMatrix;
            break;
        }
        case 2: {
            cout << "Matrix:\n" << userMatrix << endl;
            break;
        }
        case 3: {
            userMatrix++;
            cout << "Matrix incremented.\n";
            break;
        }
        case 4: {
            try {
                userMatrix--;
                cout << "Matrix decremented.\n";
            }
            catch (const std::exception& e) {
                cerr << e.what() << endl;
            }
            break;
        }
        case 5: {
            int scalar;
            cout << "Enter scalar value: ";
            cin >> scalar;
            Matrix result = userMatrix * scalar;
            cout << "Resultant matrix after multiplying by scalar:\n" << result << endl;
            break;
        }
        case 6: {
            cout << "Norm of the matrix: " << userMatrix.calculateNorm() << endl;
            break;
        }
        case 7: {
            Matrix anotherMatrix;
            cout << "Enter size of the second matrix: ";
            int size;
            cin >> size;
            anotherMatrix.setSize(size);
            cout << "Enter elements of the second matrix:\n";
            cin >> anotherMatrix;
            if (userMatrix == anotherMatrix) {
                cout << "Matrices are equal.\n";
            }
            else {
                cout << "Matrices are not equal.\n";
            }
            break;
        }
        case 8: {
            ++userMatrix;
            cout << userMatrix;
            break;
        }
        case 9: {
            --userMatrix;
            break;
        }
        case 0:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 0);

    return 0;
}
