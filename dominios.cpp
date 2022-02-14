//
// Created by Thiago on 09/02/2022.
//

#include "dominios.h"

bool Duracao::validar(int valorDuracao) {
    int i;
    bool valido = false;
    for (i=0; i < 5; i++) {
        if (valoresValidos[i] == valorDuracao) {
            valido = true;
            break;
        }
    }
    if (valido == false) {
        throw invalid_argument("Argumento Invalido.");
    }
    return valido;
}

void Duracao::setDuracao(int valorDuracao) {
    if (validar(valorDuracao)) {
        this->valorDuracao=valorDuracao;
    }
}

bool Endereco::validar(string valorEndereco) {
    bool valido = false;
    int quantidadeCaracteres = valorEndereco.length();
    if (quantidadeCaracteres > maxCaracteres) {
        valido = false;
    } else if (quantidadeCaracteres < minCaracteres) {
        valido = false;
    } else {
        valido = true;
    }
    if (valorEndereco.find("  ") <= quantidadeCaracteres or valorEndereco.find("..") <= quantidadeCaracteres) {
        valido = false;
    }
    if (valido == false) {
        throw invalid_argument("Argumento Invalido.");
    }
    return valido;
}

void Endereco::setEndereco(string valorEndereco) {
    if (validar(valorEndereco)) {
        this->valorEndereco=valorEndereco;
    }
}

bool Descricao::validar(string valorDescricao) {
    bool valido = true;
    int quantidadeCaracteres = valorDescricao.length();
    if (quantidadeCaracteres > maxCaracteres) {
        valido = false;
    } else if (quantidadeCaracteres < minCaracteres) {
        valido = false;
    } else {
        valido = true;
    }
    if (valorDescricao.find("  ") <= quantidadeCaracteres or valorDescricao.find("..") <= quantidadeCaracteres) {
        valido = false;
    }
    if (valido == false) {
        throw invalid_argument("Argumento Invalido.");
    }
    return valido;
}

void Descricao::setDescricao(string valorDescricao) {
    if (validar(valorDescricao)) {
        this->valorDescricao=valorDescricao;
    }
}

bool Titulo::validar(string valorTitulo) {
    bool valido = false;
    int quantidadeCaracteres = valorTitulo.length();
    if (quantidadeCaracteres > maxCaracteres) {
        valido = false;
    } else if (quantidadeCaracteres < minCaracteres) {
        valido = false;
    } else {
        valido = true;
    }
    if (valorTitulo.find("  ") <= quantidadeCaracteres or valorTitulo.find("..") <= quantidadeCaracteres) {
        valido = false;
    }
    for (int i = 0; i < valorTitulo.length(); i++) {
        if (valorTitulo[i] < 'A' or valorTitulo[i] > 'Z' and valorTitulo[i] < 'a' or valorTitulo[i] > 'z') {
            if (valorTitulo[i] != ' ' and valorTitulo[i] != '.') {
                valido = false;
            }
        }
    }
    if (valido == false) {
        throw invalid_argument("Argumento Invalido.");
    }
    return valido;
}

void Titulo::setTitulo(string valorTitulo) {
    if (validar(valorTitulo)) {
        this->valorTitulo=valorTitulo;
    }
}

bool Horario::validar(string valorHorario) {
    bool valido = false;
    string stringHora;
    string stringMinuto;
    int doisPontos = 0;
    for (int i = 0; i<valorHorario.length(); i++) {
        if (valorHorario[i] == ':') {
            doisPontos = 1;
        } else if (doisPontos == 0) {
            stringHora = stringHora + valorHorario[i];
        } else {
            stringMinuto = stringMinuto + valorHorario[i];
        }
    }
    int inteiroHora;
    int inteiroMinuto;
    stringstream converteHora(stringHora);
    stringstream converteMinuto(stringMinuto);
    converteHora >> inteiroHora;
    converteMinuto >> inteiroMinuto;

    if (inteiroHora >= minHoras and inteiroHora <= maxHoras) {
        if (inteiroMinuto >= minMinutos and inteiroMinuto <= maxMinutos) {
            valido = true;
        }
    }
    if (valido == false) {
        throw invalid_argument("Argumento Invalido.");
    }
    return valido;

}

void Horario::setHorario(string valorHorario) {
    if (validar(valorHorario)) {
        this->valorHorario = valorHorario;
    }
}

bool Data::validar(string valorData) {
    bool valido = true;
    string stringDia;
    string stringMes;
    string stringAno;
    int hifen = 0;
    for (int i = 0; i < valorData.length(); i++) {
        if (valorData[i] == '-') {
            hifen = hifen + 1;
        } else if (hifen == 0) {
            stringDia = stringDia + valorData[i];
        } else if (hifen == 1) {
            stringMes = stringMes + valorData[i];
        } else {
            stringAno = stringAno + valorData[i];
        }
    }
    int inteiroDia;
    int inteiroAno;
    stringstream converteDia(stringDia);
    stringstream converteAno(stringAno);
    converteDia >> inteiroDia;
    converteAno >> inteiroAno;

    if (inteiroDia < minDiasTotal or inteiroDia > maxDiasTotal) {
        valido = false;
    }
    if (inteiroAno < minAnos or inteiroAno > maxAnos) {
        valido = false;
    }

    int anoBissexto = 0;
    if (inteiroAno % 400 == 0){
        anoBissexto = 1;
    } else if ((inteiroAno % 4 == 0) and (inteiroAno % 100 != 0)) {
        anoBissexto = 1;
    }

    int maxDiasMes;
    if (mesesValidos.count(stringMes) > 0) {
        maxDiasMes = mesesValidos.find(stringMes)->second;
    } else {
        maxDiasMes = 0;
    }
    if (stringMes == "Fev" and anoBissexto == 1) {
        maxDiasMes = maxDiasMes + 1;
    }
    if (inteiroDia > maxDiasMes or inteiroDia < minDiasTotal) {
        valido = false;
    }
    if (valido == false) {
        throw invalid_argument("Argumento Invalido.");
    }
    return valido;
}

void Data::setData(string valorData) {
    if (validar(valorData)) {
        this->valorData = valorData;
    }
}
