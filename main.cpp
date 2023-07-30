#include "pch.h"
#include <iostream>
#include <string>
#include <cstring>

using namespace winrt;
using namespace Windows::Foundation;
using namespace std;

void Divider(char result[], int divisor, int dividend) {
    int cocient = dividend / divisor;//base === divisor

    int residual = dividend % divisor;
    //Method that converts an int to string 
    string binary = to_string(residual);
    //Method that converts string to "const char* type"
    const char* nchar = binary.c_str();

    strcat(result, nchar);


    cout << result;
    //Divider(result, divisor, cocient);
}


int main()
{
    int base = 2;
    int decimalNumber = 5;

    char result[] = "\0";
    Divider(result, base, decimalNumber);
    return 0;
}