//
// Created by Thiago on 09/02/2022.
//

#ifndef PROJETO_TRABALHO_1_TESTES_H
#define PROJETO_TRABALHO_1_TESTES_H

#include "dominios.h"

using namespace std;

class TUDuracao {
    private:
        const static int DURACAO_VALIDA   = 60;
        const static int DURACAO_INVALIDA = 150;
        Duracao *duracao;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha();
    public:
        const static int SUCESSO = 1;
        const static int FALHA   = 0;
        int run();
};

class TUEndereco {
    private:
        const string ENDERECO_VALIDO    = "São Paulo.";
        const string ENDERECO_INVALIDO1 = "São  Paulo";
        const string ENDERECO_INVALIDO2 = "São Paulo..";
        const string ENDERECO_INVALIDO3 = "Llanfairpwllgwyngyllgogerychwyrndrobwllllantysiliogogogoch";
        Endereco *endereco;
        int estado;
        void setUp();
        void tearDown();
        void testarCenarioSucesso();
        void testarCenarioFalha1();
        void testarCenarioFalha2();
        void testarCenarioFalha3();
    public:
        const static int SUCESSO = 1;
        const static int FALHA   = 0;
        int run();
};

class TUDescricao {
private:
    const string DESCRICAO_VALIDA    = "São Paulo.";
    const string DESCRICAO_INVALIDA1 = "São  Paulo";
    const string DESCRICAO_INVALIDA2 = "São Paulo..";
    const string DESCRICAO_INVALIDA3 = "Llanfairpwllgwyngyllgogerychwyrndrobwllllantysiliogogogoch";
    Descricao *descricao;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha1();
    void testarCenarioFalha2();
    void testarCenarioFalha3();
public:
    const static int SUCESSO = 1;
    const static int FALHA   = 0;
    int run();
};

class TUTitulo {
private:
    const string TITULO_VALIDO    = "Sao Paulo.";
    const string TITULO_INVALIDO1 = "Sao  Paulo";
    const string TITULO_INVALIDO2 = "Sao Paulo..";
    const string TITULO_INVALIDO3 = "Llanfairpwllgwyngyllgogerychwyrndrobwllllantysiliogogogoch";
    const string TITULO_INVALIDO4 = "Sao";
    const string TITULO_INVALIDO5 = "Sao 123";
    Titulo *titulo;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha1();
    void testarCenarioFalha2();
    void testarCenarioFalha3();
    void testarCenarioFalha4();
    void testarCenarioFalha5();
public:
    const static int SUCESSO = 1;
    const static int FALHA   = 0;
    int run();
};

class TUHorario {
private:
    const string HORARIO_VALIDO    = "22:30";
    const string HORARIO_INVALIDO1 = "34:40";
    const string HORARIO_INVALIDO2 = "19:90";
    Horario *horario;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha1();
    void testarCenarioFalha2();
public:
    const static int SUCESSO = 1;
    const static int FALHA   = 0;
    int run();
};

class TUData {
private:
    const string DATA_VALIDA1   = "17-Ago-2001";
    const string DATA_VALIDA2   = "29-Fev-2020";
    const string DATA_INVALIDA1 = "39-Set-2022";
    const string DATA_INVALIDA2 = "02-Col-3035";
    const string DATA_INVALIDA3 = "30-Abr-1977";
    const string DATA_INVALIDA4 = "29-Fev-2021";
    Data *data;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso1();
    void testarCenarioSucesso2();
    void testarCenarioFalha1();
    void testarCenarioFalha2();
    void testarCenarioFalha3();
    void testarCenarioFalha4();
public:
    const static int SUCESSO = 1;
    const static int FALHA   = 0;
    int run();
};

#endif //PROJETO_TRABALHO_1_TESTES_H
