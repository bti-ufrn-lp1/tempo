#include <iostream>
using std::cout;
using std::endl;

#include "tempo.h"

/**
 * @brief Função principal
 */
int main() {
    Tempo r(12, 30, 0);   // 12h 30min 0s
    Tempo t(1, 20, 0);    //  1h 20min 0s
    cout << r + t << endl;
    return 0;
}
