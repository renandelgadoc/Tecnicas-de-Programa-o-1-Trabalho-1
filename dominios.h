//
// Created by Thiago on 09/02/2022.
//

#ifndef PROJETO_TRABALHO_1_DOMINIOS_H
#define PROJETO_TRABALHO_1_DOMINIOS_H

#include <stdexcept>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <sstream>
#include <map>

using namespace std;

/* -----------------------------------------------------------------------
// Estrutura de código para declaração de classe domínio.
// Substituir Dominio por nome da classe.
// Substituir Tipo.

class Dominio {
    private:
        Tipo valor;                      // Atributo para armazenar valor.
        void validar(Tipo);              // Método para validar valor.
    public:
        void setValor(Tipo);             // Método para atribuir valor.
        Tipo getValor() const;           // Método para recuperar valor.
};

inline Tipo Dominio::getValor() const{
    return valor;
}

----------------------------------------------------------------------- */

class Duracao {
    private:
        int valoresValidos[5] = {30,60,90,120,180};
        int valorDuracao;
        bool validar(int);
    public:
        void setDuracao(int);
        int getDuracao() const;
};

inline int Duracao::getDuracao() const {
    return valorDuracao;
}

class Endereco {
    private:
        static const int minCaracteres = 0;
        static const int maxCaracteres = 20;
        string valorEndereco;
        bool validar(string);
    public:
        void setEndereco(string);
        string getEndereco() const;
};

inline string Endereco::getEndereco() const {
    return valorEndereco;
}

class Descricao {
private:
    static const int minCaracteres = 0;
    static const int maxCaracteres = 30;
    string valorDescricao;
    bool validar(string);
public:
    void setDescricao(string);
    string getDescricao() const;
};

inline string Descricao::getDescricao() const {
    return valorDescricao;
}

class Titulo {
private:
    static const int minCaracteres = 5;
    static const int maxCaracteres = 20;
    string valorTitulo;
    bool validar(string);
public:
    void setTitulo(string);
    string getTitulo() const;
};

inline string Titulo::getTitulo() const {
    return valorTitulo;
}

class Horario {
private:
    static const int maxHoras = 23;
    static const int minHoras = 0;
    static const int maxMinutos = 59;
    static const int minMinutos = 0;
    string valorHorario;
    bool validar(string);
public:
    void setHorario(string);
    string getHorario() const;
};

inline string Horario::getHorario() const {
    return valorHorario;
}

class Data {
private:
    static const int minDiasTotal = 1;
    static const int maxDiasTotal = 31;
    map<string,int> mesesValidos = {
            {"Jan",31},
            {"Fev",28},
            {"Mar",31},
            {"Abr",30},
            {"Mai",31},
            {"Jun",30},
            {"Jul",31},
            {"Ago",31},
            {"Set",30},
            {"Out",31},
            {"Nov",30},
            {"Dez",31}
    };
    static const int minAnos = 2000;
    static const int maxAnos = 9999;
    string valorData;
    bool validar(string);
public:
    void setData(string);
    string getData() const;
};

inline string Data::getData() const {
    return valorData;
}


#endif //PROJETO_TRABALHO_1_DOMINIOS_H
