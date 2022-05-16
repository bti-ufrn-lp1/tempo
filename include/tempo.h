/**
 * @file    tempo.h
 * @brief   Definição da classe Tempo
 * @author  Everton Cavalcante (everton.cavalcante@ufrn.br)
 * @since   16/05/2022
 * @date    16/05/2022
 */

#ifndef TEMPO_H
#define TEMPO_H

#include <istream>
using std::istream;

#include <ostream>
using std::ostream;

/**
 * @class Tempo tempo.h "include/pessoa.h"
 * @brief Classe que representa um instante de tempo
 * @details Um instante de tempo é constituído de horas, minutos e segundos
 */
class Tempo {
    private:

    /** @brief Parte referente às horas */
    short horas;

    /** @brief Parte referente aos minutos */
    short minutos;

    /** @brief Parte referente aos segundos */
    short segundos;

    public:
    
    /** @brief Construtor padrão */
    Tempo();

    /**
     * @brief Construtor parametrizado
     * @param h Valor para horas
     * @param m Valor para minutos
     * @param s Valor para segundos
     */
    Tempo(short h, short m, short s);

    /**
     * @brief Retorna a parte referente às horas
     * @return Horas
     */
    short getHoras();

    /**
     * @brief Modifica a parte referente às horas
     * @param h Valor para horas
     */
    void setHoras(short h);

    /**
     * @brief Retorna a parte referente aos minutos
     * @return Minutos
     */
    short getMinutos();

    /**
     * @brief Modifica a parte referente aos minutos
     * @param m Valor para minutos
     */
    void setMinutos(short m);

    /**
     * @brief Retorna a parte referente aos segundos
     * @return Segundos
     */
    short getSegundos();

    /**
     * @brief Modifica a parte referente aos segundos
     * @param s Valor para segundos
     */
    void setSegundos(short s);

    /**
     * @brief Sobrecarga do operador de adição
     * @details Possibilita a soma de dois instantes de tempo, isto é, de seus
     *          respectivos valores horas, minutos e segundos
     * @param t Objeto da classe <code>Tempo</code> a ser somado
     * @return Novo instante de tempo resultante da operação de soma
     */
    Tempo operator+(Tempo t);

    /**
     * @brief Sobrecarga do operador de inserção de <i>stream</i>
     * @details Imprime um instante de tempo no formato <code>hh:mm:ss</code>
     * @param o Referência para o <i>stream</i> de saída
     * @param t Objeto da classe <code>Tempo</code> cujos dados serão impressos
     * @return Referência para o <i>stream</i> de saída
     */
    friend ostream& operator<<(ostream& o, Tempo t);

    /**
     * @brief Sobrecarga do operador de extração de <i>stream</i>
     * @details Realiza a letura dos valores de horas, minutos e segundos para
     *          constituir um instante de tempo
     * @param i Referência para o <i>stream</i> de entrada
     * @param t Objeto da classe <code>Tempo</code> a ser construído
     * @return Referência para o <i>stream</i> de entrada
     */
    friend istream& operator>>(istream& i, Tempo& t);
};

#endif
