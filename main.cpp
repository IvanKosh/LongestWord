/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 17 Сентябрь 2015 г., 17:27
 */

#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    string line;
    short i, j, l;
    string max;
    while (getline(stream, line)) {
        j = 0;
        max = "";
        l = line.length();
        for(i = 0; i < l; i++) {
            if (line[i] == ' ') {
                if (max.length() < i-j) {
                    max = line.substr(j, i-j);
                    j = i+1;
                }
                j = i+1;
            }
        }
        
        if (max.length() < i-j) {
            max = line.substr(j, i-j);
        }
        cout << max << endl;
    }
    return 0;
}