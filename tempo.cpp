#include "tempo.h"

Tempo::Tempo() {
    horas = 0;
    minutos = 0;
    segundos = 0;
}

Tempo::Tempo(short h, short m, short s) {
    horas = h;
    minutos = m;
    segundos = s;
}

short Tempo::getHoras() {
    return horas;
}

void Tempo::setHoras(short h) {
        horas = h;
}

short Tempo::getMinutos() {
    return minutos;
}

void Tempo::setMinutos(short m) {
    minutos = m;
}

short Tempo::getSegundos() {
    return segundos;
}

void Tempo::setSegundos(short s) {
    segundos = s;
}

/**
 * @brief Sobrecarga do operador de adição
 * @details Possibilita a soma de dois instantes de tempo, isto é, de seus respectivos
 *          valores horas, minutos e segundos
 * @param t Objeto da classe <code>Tempo</code> a ser somado
 * @return Novo instante de tempo resultante da operação de soma
 */
Tempo Tempo::operator+(Tempo t) {
    short h = horas + t.getHoras();
    short m = minutos + t.getMinutos();
    short s = segundos + t.getSegundos();
    return Tempo(h, m, s);
}

/**
 * @brief Sobrecarga do operador de inserção de <i>stream</i>
 * @details Imprime um instante de tempo no formato <code>hh:mm:ss</code>
 * @param o Referência para o <i>stream</i> de saída
 * @param t Objeto da classe <code>Tempo</code> cujos dados serão impressos
 * @return Referência para o <i>stream</i> de saída
 */
ostream& operator<<(ostream& o, Tempo t) {
    o << t.getHoras() << ":" << t.getMinutos() << ":" << t.getSegundos();
    return o;
}

/**
 * @brief Sobrecarga do operador de extração de <i>stream</i>
 * @details Realiza a letura dos valores de horas, minutos e segundos para constituir
 *          um instante de tempo
 * @param i Referência para o <i>stream</i> de entrada
 * @param t Objeto da classe <code>Tempo</code> a ser construído
 * @return Referência para o <i>stream</i> de entrada
 */
istream& operator>>(istream& i, Tempo& t) {
    i >> t.horas >> t.minutos >> t.segundos;
    return i;
}
