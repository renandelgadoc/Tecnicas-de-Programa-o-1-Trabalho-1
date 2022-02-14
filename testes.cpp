//
// Created by Thiago on 09/02/2022.
//

#include "testes.h"

void TUDuracao::setUp() {
    duracao = new Duracao();
    estado = SUCESSO;
}

void TUDuracao::tearDown() {
    delete duracao;
}

void TUDuracao::testarCenarioSucesso() {
    try {
        duracao->setDuracao(DURACAO_VALIDA);
        if (duracao->getDuracao() != DURACAO_VALIDA) {
            estado = FALHA;
        }

    }
    catch(invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUDuracao::testarCenarioFalha() {
    try {
        duracao->setDuracao(DURACAO_INVALIDA);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if (duracao->getDuracao() == DURACAO_INVALIDA) {
            estado = FALHA;
        }
    }
}

int TUDuracao::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUEndereco::setUp() {
    endereco = new Endereco();
    estado = SUCESSO;
}

void TUEndereco::tearDown() {
    delete endereco;
}

void TUEndereco::testarCenarioSucesso() {
    try {
        endereco->setEndereco(ENDERECO_VALIDO);
        if (endereco->getEndereco() != ENDERECO_VALIDO) {
            estado = FALHA;
        }

    }
    catch(invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUEndereco::testarCenarioFalha1() {
    try {
        endereco->setEndereco(ENDERECO_INVALIDO1);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if (endereco->getEndereco() == ENDERECO_INVALIDO1) {
            estado = FALHA;
        }
    }
}

void TUEndereco::testarCenarioFalha2() {
    try {
        endereco->setEndereco(ENDERECO_INVALIDO2);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if (endereco->getEndereco() == ENDERECO_INVALIDO2) {
            estado = FALHA;
        }
    }
}

void TUEndereco::testarCenarioFalha3() {
    try {
        endereco->setEndereco(ENDERECO_INVALIDO3);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if (endereco->getEndereco() == ENDERECO_INVALIDO3) {
            estado = FALHA;
        }
    }
}

int TUEndereco::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha1();
    testarCenarioFalha2();
    testarCenarioFalha3();
    tearDown();
    return estado;
}

void TUDescricao::setUp() {
    descricao = new Descricao();
    estado = SUCESSO;
}

void TUDescricao::tearDown() {
    delete descricao;
}

void TUDescricao::testarCenarioSucesso() {
    try {
        descricao->setDescricao(DESCRICAO_VALIDA);
        if (descricao->getDescricao() != DESCRICAO_VALIDA) {
            estado = FALHA;
        }

    }
    catch(invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUDescricao::testarCenarioFalha1() {
    try {
        descricao->setDescricao(DESCRICAO_INVALIDA1);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if (descricao->getDescricao() == DESCRICAO_INVALIDA1) {
            estado = FALHA;
        }
    }
}

void TUDescricao::testarCenarioFalha2() {
    try {
        descricao->setDescricao(DESCRICAO_INVALIDA2);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if (descricao->getDescricao() == DESCRICAO_INVALIDA2) {
            estado = FALHA;
        }
    }
}

void TUDescricao::testarCenarioFalha3() {
    try {
        descricao->setDescricao(DESCRICAO_INVALIDA3);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if (descricao->getDescricao() == DESCRICAO_INVALIDA3) {
            estado = FALHA;
        }
    }
}

int TUDescricao::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha1();
    testarCenarioFalha2();
    testarCenarioFalha3();
    tearDown();
    return estado;
}

void TUTitulo::setUp() {
    titulo = new Titulo();
    estado = SUCESSO;
}

void TUTitulo::tearDown() {
    delete titulo;
}

void TUTitulo::testarCenarioSucesso() {
    try {
        titulo->setTitulo(TITULO_VALIDO);
        if (titulo->getTitulo() != TITULO_VALIDO) {
            estado = FALHA;
        }

    }
    catch(invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUTitulo::testarCenarioFalha1() {
    try {
        titulo->setTitulo(TITULO_INVALIDO1);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if (titulo->getTitulo() == TITULO_INVALIDO1) {
            estado = FALHA;
        }
    }
}

void TUTitulo::testarCenarioFalha2() {
    try {
        titulo->setTitulo(TITULO_INVALIDO2);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if (titulo->getTitulo() == TITULO_INVALIDO2) {
            estado = FALHA;
        }
    }
}

void TUTitulo::testarCenarioFalha3() {
    try {
        titulo->setTitulo(TITULO_INVALIDO3);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if (titulo->getTitulo() == TITULO_INVALIDO3) {
            estado = FALHA;
        }
    }
}

void TUTitulo::testarCenarioFalha4() {
    try {
        titulo->setTitulo(TITULO_INVALIDO4);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if (titulo->getTitulo() == TITULO_INVALIDO4) {
            estado = FALHA;
        }
    }
}

void TUTitulo::testarCenarioFalha5() {
    try {
        titulo->setTitulo(TITULO_INVALIDO5);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if (titulo->getTitulo() == TITULO_INVALIDO5) {
            estado = FALHA;
        }
    }
}

int TUTitulo::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha1();
    testarCenarioFalha2();
    testarCenarioFalha3();
    testarCenarioFalha4();
    testarCenarioFalha5();
    tearDown();
    return estado;
}

void TUHorario::setUp() {
    horario = new Horario();
    estado = SUCESSO;
}

void TUHorario::tearDown() {
    delete horario;
}

void TUHorario::testarCenarioSucesso() {
    try {
        horario->setHorario(HORARIO_VALIDO);
        if (horario->getHorario() != HORARIO_VALIDO) {
            estado = FALHA;
        }

    }
    catch(invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUHorario::testarCenarioFalha1() {
    try {
        horario->setHorario(HORARIO_INVALIDO1);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if (horario->getHorario() == HORARIO_INVALIDO1) {
            estado = FALHA;
        }
    }
}

void TUHorario::testarCenarioFalha2() {
    try {
        horario->setHorario(HORARIO_INVALIDO2);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if (horario->getHorario() == HORARIO_INVALIDO2) {
            estado = FALHA;
        }
    }
}


int TUHorario::run() {
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha1();
    testarCenarioFalha2();
    tearDown();
    return estado;
}

void TUData::setUp() {
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown() {
    delete data;
}

void TUData::testarCenarioSucesso1() {
    try {
        data->setData(DATA_VALIDA1);
        if (data->getData() != DATA_VALIDA1) {
            estado = FALHA;
        }

    }
    catch(invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUData::testarCenarioSucesso2() {
    try {
        data->setData(DATA_VALIDA2);
        if (data->getData() != DATA_VALIDA2) {
            estado = FALHA;
        }

    }
    catch(invalid_argument &excecao) {
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha1() {
    try {
        data->setData(DATA_INVALIDA1);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if (data->getData() == DATA_INVALIDA1) {
            estado = FALHA;
        }
    }
}

void TUData::testarCenarioFalha2() {
    try {
        data->setData(DATA_INVALIDA2);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if (data->getData() == DATA_INVALIDA2) {
            estado = FALHA;
        }
    }
}

void TUData::testarCenarioFalha3() {
    try {
        data->setData(DATA_INVALIDA3);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if (data->getData() == DATA_INVALIDA3) {
            estado = FALHA;
        }
    }
}

void TUData::testarCenarioFalha4() {
    try {
        data->setData(DATA_INVALIDA4);
        estado = FALHA;
    }
    catch(invalid_argument &excecao) {
        if (data->getData() == DATA_INVALIDA4) {
            estado = FALHA;
        }
    }
}


int TUData::run() {
    setUp();
    testarCenarioSucesso1();
    testarCenarioSucesso2();
    testarCenarioFalha1();
    testarCenarioFalha2();
    testarCenarioFalha3();
    testarCenarioFalha4();
    tearDown();
    return estado;
}