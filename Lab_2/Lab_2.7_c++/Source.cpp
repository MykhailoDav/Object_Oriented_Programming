#include <iostream>
#include "Bill.h"

int main() {
    Bill bill;

    while (true) {
        std::cout << "\nMENU:" << std::endl;
        std::cout << "1. Initialize bill" << std::endl;
        std::cout << "2. Display bill details" << std::endl;
        std::cout << "3. Show Difference in seconds" << std::endl;
        std::cout << "4. Show Difference in minutes" << std::endl;
        std::cout << "5. Add seconds to end time" << std::endl;
        std::cout << "6. Subtract seconds from end time" << std::endl;
        std::cout << "7. Test equal" << std::endl;
        std::cout << "8. To string" << std::endl;
        std::cout << "9. Increment minute rate" << std::endl;
        std::cout << "10. Decrement minute rate" << std::endl;
        std::cout << "11. Increment discount" << std::endl;
        std::cout << "12. Decrement discount" << std::endl;
        std::cout << "13. Exit" << std::endl;
        std::cout << "Enter your choice:" << std::endl;

        int choice;
        std::cin >> choice;

        switch (choice) {
        case 1:
            std::cin >> bill;
            break;
        case 2:
            std::cout << bill;
            break;
        case 3:
            std::cout << bill.startTime.DifferenceInSeconds(bill.endTime) << std::endl;
            break;
        case 4: {
            Time diffTime(bill.startTime.DifferenceInSeconds(bill.endTime));
            std::cout << diffTime.ToMinutes() << std::endl;
            break;
        }
        case 5: {
            std::cout << "Enter seconds: ";
            unsigned seconds;
            std::cin >> seconds;
            bill.endTime.AddSeconds(seconds);
            break;
        }
        case 6: {
            std::cout << "Enter seconds: ";
            unsigned sseconds;
            std::cin >> sseconds;
            bill.endTime.SubtractSeconds(sseconds);
            break;
        }
        case 7:
            std::cout << (bill.startTime.IsEqualTo(bill.endTime) ? "True" : "False") << std::endl;
            break;
        case 8:
            std::cout << static_cast<std::string>(bill) << std::endl;
            break;
        case 9:
            ++bill;
            break;
        case 10:
            --bill;
            break;
        case 11:
            bill++;
            break;
        case 12:
            bill--;
            break;
        case 13:
            std::cout << "Exiting..." << std::endl;
            return 0;
        default:
            std::cout << "Invalid choice! Please enter a number between 1 and 13." << std::endl;
            break;
        }
    }

    return 0;
}
