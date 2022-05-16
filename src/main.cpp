/**
 * @file    main.cpp
 * @brief   Implementação do programa principal
 * @author  Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since   16/05/2022
 * @date    16/05/2022
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "tempo.h"

/** @brief Função principal */
int main() {
    Tempo r, t;
    cin >> r >> t;

    cout << endl;
    cout << "Instante de tempo r = " << r << endl;
    cout << "Instante de tempo t = " << t << endl;

    Tempo s = r + t;
    cout << "Soma dos instantes de tempo r e t = " << s << endl;

    return 0;
}
