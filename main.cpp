#pragma once

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[], char* envp[]) {
    vector<string> flags = {
        "-abi", "-optimize",
        "-c", "-f", "-i", "-o"
    };
    vector<string> argums = {
        "--ignore", "--debug", "--no-optimize",
        "--no-abi", "--no-bytecode", "--compile-project"
    };
    vector<string> list = {};

    int flag = 0;
    int argum = 0;

    for (int i = 1; i < argc; i++) {
        for (int j = 0; j < size(argums); j++ ) {
            if (argv[i] == argums[j]) {
                list.push_back(argums[j]);
                argum++;
                cout << "Argument: " << argums[j] << endl;
            }
        }
        for (int j = 0; j < size(flags); j++) {
            if (argv[i] == flags[j]){
                list.push_back(flags[j]);
                flag++;
                cout << "Flag: " << flags[j] << endl;

            }
        }
    }
    cout << "Arg and flags: ";
    for (int i = 0; i < size(list); i++) {
        cout << list[i] + " ";
    }

    cout << endl << "Arguments found: " << argum << endl;
    cout << "Flags found: " << flag << endl;
}