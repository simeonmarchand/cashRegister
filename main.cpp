#include <iostream>
using namespace std;

int main() {
    //Here we are creating the user input 5 times that is being held in 'i'
    float t = 7.0 / 100;
    float aar[5];
    std::cout << "Enter 5 input numbers one at a time" << endl;
    for (int i = 0; i < 5; i++){
        std::cin >> aar[i];
    }

    // here we are making variables for the subtotal, item total, tax total, and the variable temp to hold these
    float subTotal = 0.0, itemTotal = 0.0;
    float taxTotal = 0.0;
    float temp;

    //We are outputting the headers
    std::cout << "Item Cost  " << "Item Tax  " << "Item Subtotal  " << endl;
    std::cout << "-------------------------------------------" << endl;

    //Here we are calculating the totals for the variables created above
    for (int i = 0; i < 5; i++){
        itemTotal += aar[i];
        taxTotal += aar[i] * t;
        subTotal += aar[i] * t + aar[i];
        temp = aar[i] * t + aar[i];

        //itemized section of the program
        std::cout << aar[i] << "      " << aar[i] * t << "      " << temp << endl;
    }
    //Here is the final output of the calculations
    std::cout << "----------------------------------------\n";
    std::cout << "Item Total  " << "Tax Total  " << "SubTotal  " << endl;
    std::cout <<  itemTotal << "      "<< taxTotal << "    " << subTotal << endl;
}
