#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string rows[7][11] = {
        {"+---+", "    +", "+---+", "+---+", "+   +", "+---+", "+---+", "+---+", "+---+", "+---+", " "},
        {"|   |", "    |", "    |", "    |", "|   |", "|    ", "|    ", "    |", "|   |", "|   |", " "},
        {"|   |", "    |", "    |", "    |", "|   |", "|    ", "|    ", "    |", "|   |", "|   |", "o"},
        {"+   +", "    +", "+---+", "+---+", "+---+", "+---+", "+---+", "    +", "+---+", "+---+", " "},
        {"|   |", "    |", "|    ", "    |", "    |", "    |", "|   |", "    |", "|   |", "    |", "o"},
        {"|   |", "    |", "|    ", "    |", "    |", "    |", "|   |", "    |", "|   |", "    |", " "},
        {"+---+", "    +", "+---+", "+---+", "    +", "+---+", "+---+", "    +", "+---+", "+---+", " "}
    };
    while (cin) {
        string time;
        cin >> time;
        if (time != "end") {
            for (int i = 0; i < 7; i++) {
                for (int j = 0; j < 5; j++) {
                    if (j < 4) {
                        if (time[j] == '0') {
                            cout << rows[i][0] << "  ";
                        }
                        if (time[j] == '1') {
                            cout << rows[i][1] << "  ";
                        }
                        if (time[j] == '2') {
                            cout << rows[i][2] << "  ";
                        }
                        if (time[j] == '3') {
                            cout << rows[i][3] << "  ";
                        }
                        if (time[j] == '4') {
                            cout << rows[i][4] << "  ";
                        }
                        if (time[j] == '5') {
                            cout << rows[i][5] << "  ";
                        }
                        if (time[j] == '6') {
                            cout << rows[i][6] << "  ";
                        }
                        if (time[j] == '7') {
                            cout << rows[i][7] << "  ";
                        }
                        if (time[j] == '8') {
                            cout << rows[i][8] << "  ";
                        }
                        if (time[j] == '9') {
                            cout << rows[i][9] << "  ";
                        }
                        if (time[j] == ':') {
                            cout << rows[i][10] << "  ";
                        }
                    }
                    else {
                        if (time[j] == '0') {
                            cout << rows[i][0];
                        }
                        if (time[j] == '1') {
                            cout << rows[i][1];
                        }
                        if (time[j] == '2') {
                            cout << rows[i][2];
                        }
                        if (time[j] == '3') {
                            cout << rows[i][3];
                        }
                        if (time[j] == '4') {
                            cout << rows[i][4];
                        }
                        if (time[j] == '5') {
                            cout << rows[i][5];
                        }
                        if (time[j] == '6') {
                            cout << rows[i][6];
                        }
                        if (time[j] == '7') {
                            cout << rows[i][7];
                        }
                        if (time[j] == '8') {
                            cout << rows[i][8];
                        }
                        if (time[j] == '9') {
                            cout << rows[i][9];
                        }
                    }
                }
                cout << endl;
            }
            cout << endl << endl;
        }
        else {
            cout << "end" << endl;
            break;
        }
    }
    return 0;
}
