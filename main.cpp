#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <fstream>
#include "con.h"
using namespace std;

int main(void) {

    Con con;

        system("rfkill unblock 1");
        system("rfkill unblock 0");
    

        cout << "          Welcome to ToothDroid          " << endl;

    for (;;) {
        cout<<endl;
        cout << "----------What-do-you-wanna-do-?---------" << endl;
        cout << "-----------------------------------------" << endl;
        cout << "-----------------------------------------" << endl;
        cout << "----------1-Scanning Devices-------------" << endl;
        cout << "----------2-Pair-Device------------------" << endl;
        cout << "----------3-Connect-to-Device------------" << endl;
        cout << "----------4-Disconnect-------------------" << endl;
        cout << "----------5-Exit-------------------------" << endl;
        cout << "-----------------------------------------" << endl;
        cout << "-----------------------------------------" << endl;
     
        cout<<endl;
        int num;
        cin >> num;
        switch (num) {
            case 1:
                con.scanBluetoothDevices();
                break;
            case 2:
                con.pairing();
                break;
            case 3:
                con.connect();
                break;
            case 4:
                con.disconnect();
                break;
            case 5:
                system("rm conf/db.txt");
                return 0; 
            default:
                break;
        }
    }
    return 0;
}
