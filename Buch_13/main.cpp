// main.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
                       
#include <iostream>
#include "piggybank.h"

int main()
{
    class Piggybank bank;
    class Piggybank smallBank;
    bank.initPiggyBank(5, 5, 500, false, 0);
    smallBank.initPiggyBank(499, 499, 400, false, 0);
    /*bank.display();   // has 5 coins like initialized 
    std::cout << "------------------------------------------------------" << std::endl;
    bank.addCoin(494);
    std::cout << "------------------------------------------------------" << std::endl;
    bank.display();
    std::cout << "------------------------------------------------------" << std::endl;
    bank.isEmpty();
    std::cout << "------------------------------------------------------" << std::endl;
    bank.addCoin(-499);
    std::cout << "------------------------------------------------------" << std::endl;
    bank.isEmpty();
    std::cout << "------------------------------------------------------" << std::endl;
    bank.addCoin(+499);
    std::cout << "------------------------------------------------------" << std::endl;
    bank.isFull();
    std::cout << "------------------------------------------------------" << std::endl;       */
    smallBank.display();
    smallBank.addCoin(0);
    bank.display();
    bank.addCoin(2000);
    std::cout << "------------------------------------------------------" << std::endl;
   


   

    //bank.breakInto();
    return 0;
}


