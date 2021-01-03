#include <stdio.h>
#include "Header.h"
#include <iostream>
#include <iomanip>

void StZakaz(double Stavka) {
    std::cout << " Рентабельность |  " << "Ставка перевозчика с НДС  |  " << "Ставка перевозчика без НДС" << '\n';
    std::cout << "-------------------------------------------------------------------------------------\n";
    std::cout << "                |                            |                                      \n";
    std::cout << "       " << 35 << "%      |\t    " << std::fixed << std::setprecision(2) << Stavka * (1 - 0.35) << "\t     |\t         " << Stavka * (1 - 0.35) * 1.15 << '\n';
    for (size_t R = 30; R >= 24; --R) {
        std::cout << "       " << R << "%      |\t    " << std::fixed << std::setprecision(2) << Stavka * (1 - R / 100.0) << "\t     |\t         " << 1.15 * Stavka * (1 - R / 100.0) << '\n';
    }
    std::cout << '\n';
}

void StPerevozCNDS(double Stavka) {
    std::cout << " Рентабельность |  " << "Ставка заказчика без НДС  |  " << "Ставка заказчика с НДС" << '\n';
    std::cout << "-------------------------------------------------------------------------------------\n";
    std::cout << "                |                            |                                      \n";
    for (size_t R = 25; R >= 10; R -= 5) {
        std::cout << "       " << R << "%      |\t   " << std::fixed << std::setprecision(2) << 100 * Stavka / (100.0 - R) << "\t     |\t        " << 100 * Stavka / (1.2 * (100.0 - R)) << '\n';
    }
    std::cout << '\n';
}

void StPerevozBezNDS(double Stavka) {
    std::cout << " Рентабельность |  " << "Ставка заказчика без НДС  |  " << "Ставка заказчика с НДС" << '\n';
    std::cout << "-------------------------------------------------------------------------------------\n";
    std::cout << "       " << 35 << "%      |\t   " << std::fixed << std::setprecision(2) << 100 * Stavka / (100.0 - 35) << "\t     |\t        " << 100 * Stavka / (1.2 * (100.0 - 35)) << '\n';
    for (size_t R = 30; R >= 24; --R) {
        std::cout << "       " << R << "%      |\t   " << std::fixed << std::setprecision(2) << 100 * Stavka / (100.0 - R) << "\t     |\t        " << 100 * Stavka / (1.2 * (100.0 - R)) << '\n';
    }
    std::cout << '\n';
}