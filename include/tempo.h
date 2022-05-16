#include <istream>
using std::istream;

#include <ostream>
using std::ostream;

class Tempo {
    private:
    short horas;
    short minutos;
    short segundos;

    public:
    Tempo();
    Tempo(short h, short m, short s);
    short getHoras();
    void setHoras(short h);
    short getMinutos();
    void setMinutos(short m);
    short getSegundos();
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