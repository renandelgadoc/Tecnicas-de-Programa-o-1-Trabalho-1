//
// Created by Thiago on 09/02/2022.
//

#ifndef PROJETO_TRABALHO_1_TESTES_H
#define PROJETO_TRABALHO_1_TESTES_H

#include "dominios.h"

using namespace std;

class TUDuracao {   //200073303
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

class TUEndereco {   //200073303
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

class TUDescricao {   //200073303
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

class TUTitulo {   //200073303
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

class TUHorario {   //200073303
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

class TUData {   //200073303
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

//
// Created by Renan 200062743
//

class TUCidade {   //200062743
private:
    inline const static string VALOR_VALIDO   = "Istambul";
    inline const static string VALOR_INVALIDO = "Salvador";
    Cidade *cidade;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUIdioma {   //200062743
private:
    inline const static string VALOR_VALIDO   = "Portugues";
    inline const static string VALOR_INVALIDO = "Acadio";
    Idioma *idioma;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUSenha {   //200062743
private:
    inline const static string VALOR_VALIDO   = "T56r23";
    inline const static string VALOR_INVALIDO1 = "T56R23";
    inline const static string VALOR_INVALIDO2 = "t56r23";
    inline const static string VALOR_INVALIDO3 = "abcDEF";
    inline const static string VALOR_INVALIDO4 = "T5*r23";
    inline const static string VALOR_INVALIDO5 = "T566r3";
    inline const static string VALOR_INVALIDO6 = "a";
    Senha *senha;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha1();
    void testarCenarioFalha2();
    void testarCenarioFalha3();
    void testarCenarioFalha4();
    void testarCenarioFalha5();
    void testarCenarioFalha6();


public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUNome {   //200062743
private:
    inline const static string VALOR_VALIDO   = "Dr. Casimiro Miguel.";
    inline const static string VALOR_INVALIDO1 = "Casi  miro Miguel";
    inline const static string VALOR_INVALIDO2 = "D.r. Cas.imiro Mi.guel";
    inline const static string VALOR_INVALIDO3 = "Dr .Casimiro .Miguel";
    inline const static string VALOR_INVALIDO4 = "dr. casimiro miguel";
    inline const static string VALOR_INVALIDO5 = "Dr. Casimiro Miguel Da Twitch.tv Da Internet";
    inline const static string VALOR_INVALIDO6 = "Aldo";
    Nome *nome;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha1();
    void testarCenarioFalha2();
    void testarCenarioFalha3();
    void testarCenarioFalha4();
    void testarCenarioFalha5();
    void testarCenarioFalha6();


public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUNota {   //200062743
private:
    const static int VALOR_VALIDO1   = 3;
    const static int VALOR_VALIDO2   = 4;
    const static int VALOR_VALIDO3   = 1;
    const static int VALOR_INVALIDO1 = 6;
    const static int VALOR_INVALIDO2 = -1;
    inline static float VALOR_VALIDO1F   = 3;
    inline static float VALOR_VALIDO2F   = 4;
    inline static float VALOR_VALIDO3F   = 1;
    Nota *nota;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso1();
    void testarCenarioSucesso2();
    void testarCenarioSucesso3();
    void testarCenarioFalha1();
    void testarCenarioFalha2();


public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

class TUEmail {   //200062743
private:
    inline const static string VALOR_VALIDO  = "cAs#i.!mi/ro@Mi.G777u-El";
    inline const static string VALOR_INVALIDO1 = ".casimiro@miguel";
    inline const static string VALOR_INVALIDO2 = "casimiro.@miguel";
    inline const static string VALOR_INVALIDO3 = "casimi..ro@miguel";
    inline const static string VALOR_INVALIDO4 = "casimiro@.miguel";
    inline const static string VALOR_INVALIDO5 = "casimiro@m..iguel";
    inline const static string VALOR_INVALIDO6 = "casimiro@m!guel";
    inline const static string VALOR_INVALIDO7 = "casimiroooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo@miguel";
    inline const static string VALOR_INVALIDO8 = "casimiro@miiiiiiiiiii"
                                                 "iiiiiiiiiiiiiiiiiiiiiiiii"
                                                 "iiiiiiiiiiiiiiiiiiiiiiiiiiii"
                                                 "iiiiiiiiiiiiiiiiiiiiiiiiiiiiii"
                                                 "iiiiiiiiiiiiiiiiiiiiiiiiiiiiii"
                                                 "iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii"
                                                 "iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii"
                                                 "iiiiiiiiiiiiiiiiiiiiiiiii"
                                                 "iiiiiiiiiiiiiiiiiiiiiiiiiii"
                                                 "iiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiguel";

    Email *email;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha1();
    void testarCenarioFalha2();
    void testarCenarioFalha3();
    void testarCenarioFalha4();
    void testarCenarioFalha5();
    void testarCenarioFalha6();
    void testarCenarioFalha7();
    void testarCenarioFalha8();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

#endif //PROJETO_TRABALHO_1_TESTES_H
