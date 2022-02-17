//
// Created by Thiago 200073303
//

#ifndef PROJETO_TRABALHO_1_DOMINIOS_H
#define PROJETO_TRABALHO_1_DOMINIOS_H

#include <stdexcept>
#include <cstdio>
#include <cstdlib>
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

class Duracao {  //200073303
    private:
        int valoresValidos[5] = {30,60,90,120,180};
        int valorDuracao;
        bool validar(int);
    public:
        void setValor(int);
        int getValor() const;
};

inline int Duracao::getValor() const {  //200073303
    return valorDuracao;
}

class Endereco {  //200073303
    private:
        static const int minCaracteres = 0;
        static const int maxCaracteres = 20;
        string valorEndereco;
        bool validar(string);
    public:
        void setValor(string);
        string getValor() const;
};

inline string Endereco::getValor() const {  //200073303
    return valorEndereco;
}

class Descricao {  //200073303
private:
    static const int minCaracteres = 0;
    static const int maxCaracteres = 30;
    string valorDescricao;
    bool validar(string);
public:
    void setValor(string);
    string getValor() const;
};

inline string Descricao::getValor() const {  //200073303
    return valorDescricao;
}

class Titulo {  //200073303
private:
    static const int minCaracteres = 5;
    static const int maxCaracteres = 20;
    string valorTitulo;
    bool validar(string);
public:
    void setValor(string);
    string getValor() const;
};

inline string Titulo::getValor() const {  //200073303
    return valorTitulo;
}

class Horario {  //200073303
private:
    static const int maxHoras = 23;
    static const int minHoras = 0;
    static const int maxMinutos = 59;
    static const int minMinutos = 0;
    string valorHorario;
    bool validar(string);
public:
    void setValor(string);
    string getValor() const;
};

inline string Horario::getValor() const {  //200073303
    return valorHorario;
}

class Data {  //200073303
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
    void setValor(string);
    string getValor() const;
};

inline string Data::getValor() const {  //200073303
    return valorData;
}

//
// Created by Renan 200062743
//

using namespace std;

class Cidade {   //200062743
private:
    string cidade;
    string cidadesValidas[16] = {"Hong Kong", "Bangkok", "Macau", "Singapura",
                                 "Londres","Paris", "Dubai", "Delhi",
                                 "Istambul", "Kuala","Lumpur", "Nova Iorque",
                                 "Antalya", "Mumbai", "Shenzhen", "Phuket"};
    void validar(string);

public:
    void setValor(string);
    string getValor() const;
};

inline string Cidade::getValor() const {   //200062743
    return cidade;
}

//---------------------------------------------------------------------------------------------------------------

class Idioma {   //200062743
private:
    string idioma;
    string idiomasValidos[16] = {"Ingles", "Chines Mandarim", "Hindi",
                                 "Espanhol", "Frances", "Arabe", "Bengali",
                                 "Russo", "Portugues", "Indonesio"};
    void validar(string);

public:
    void setValor(string);
    string getValor() const;
};

inline string Idioma::getValor() const {   //200062743
    return idioma;
}

class Senha {   //200062743
private:
    string senha;
    void validar(string);

public:
    void setValor(string);
    string getValor() const;

};

inline string Senha::getValor() const {   //200062743
    return senha;
}

class Nome {   //200062743
private:
    string nome;
    void validar(string);
public:
    void setValor(string);
    string getValor() const;
};

inline string Nome::getValor() const {   //200062743
    return nome;
}

class Nota {   //200062743
private:
    float nota = 0;
    int numeroNotas = 0;
    void validar(int);
public:
    void setValor(int);
    float getValor() const;
};

inline float Nota::getValor() const {   //200062743
    return nota;
}

class Email {   //200062743
private:
    string email;
    void validar(string);
public:

    void setValor(string);
    string getValor() const;
};

inline string Email::getValor() const {   //200062743
    return email;
}

class Codigo {
private:
    string codigo;
    static int semente;
    static string codigosExistentes[100];
    bool verificar(string);
public:
    Codigo();
    void setValor();
    string getValor() const;
};


inline string Codigo::getValor() const {
    return codigo;
}

#endif //PROJETO_TRABALHO_1_DOMINIOS_H
