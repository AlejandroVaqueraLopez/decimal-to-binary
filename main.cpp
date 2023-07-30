//#include "pch.h"
#include <iostream>
#include <string>
#include <cstring>
//using namespace winrt;
//using namespace Windows::Foundation;
using namespace std;

void Divider(int result[], int divisor, int dividend, int cont, bool flag) {
	//Create array of results
	cont++;
    int cocient = dividend / divisor;//base == divisor 
    int residual = dividend % divisor;
    
    if(cocient == 1){
    	flag = true;
    	result[cont] = residual;//[0]
    	Divider(result, divisor, cocient, cont, flag);
	}else{
		if(flag){
			result[cont] = residual;// last 1
			
			//rever the array
			for(int ndCont = cont; ndCont >= 0; ndCont--){
				cout << result[ndCont];
			}
		}else{
			result[cont] = residual;//[0]
    		Divider(result, divisor, cocient, cont, flag);	
		}
	}
}

int main()
{
	int cont = -1;
    int base = 2;
    int decimalNumber = 1983;
    bool flag = false;
    int result[100];
    
    Divider(result, base, decimalNumber, cont, flag);
    
    return 0;
}
