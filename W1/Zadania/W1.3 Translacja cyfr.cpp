//#include "iostream"
//
//auto main() -> int {
//    using namespace std;
//
//
//    auto choice = bool(true);
//
//    cout << "Would you like to type simple a digit or type a name of digit? 1 - yes, 0 - no\n";
//    cin >> choice;
//
//    if (choice) {
//        auto digit = int();
//        cout << "Type in a digit: \n";
//        cin >> digit;
//
//        switch (digit) {
//
//            case 0:
//                cout << "zero";
//                break;
//            case 1:
//                cout << "one";
//                break;
//            case 2:
//                cout << "two";
//                break;
//            case 3:
//                cout << "three";
//                break;
//            case 4:
//                cout << "four";
//                break;
//            case 5:
//                cout << "five";
//                break;
//            case 6:
//                cout << "six";
//                break;
//            case 7:
//                cout << "seven";
//                break;
//            case 8:
//                cout << "eight";
//                break;
//            case 9:
//                cout << "nine";
//                break;
//            default:
//                cout << "Incorrect input! Try again by restarting the program";
//        }
//    } else{
//        auto digitMadeFromLetters = std::string("");
//        cout << "Type in a digit using letters: \n";
//        cin >> digitMadeFromLetters;
//
//        if (digitMadeFromLetters == "zero") {
//            cout << 0;
//        } else if (digitMadeFromLetters == "one") {
//            cout << 1;
//        } else if (digitMadeFromLetters == "two") {
//            cout << 2;
//        } else if (digitMadeFromLetters == "three") {
//            cout << 3;
//        } else if (digitMadeFromLetters == "four") {
//            cout << 4;
//        } else if (digitMadeFromLetters == "five") {
//            cout << 5;
//        } else if (digitMadeFromLetters == "six") {
//            cout << 6;
//        } else if (digitMadeFromLetters == "seven") {
//            cout << 7;
//        } else if (digitMadeFromLetters == "eight") {
//            cout << 8;
//        } else if (digitMadeFromLetters == "nine") {
//            cout << 9;
//        } else {
//            cout << "\"Incorrect input! Try again by restarting the program\"";
//        }
//    }
//
//}
