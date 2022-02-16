//
// Created by Thiago 200073303
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

//
// Created by Renan 200062743
//

void TUCidade::setUp(){
    cidade = new Cidade();
    estado = SUCESSO;
}

void TUCidade::tearDown(){
    delete cidade;
}

void TUCidade::testarCenarioSucesso(){
    try{
        cidade->setValor(VALOR_VALIDO);
        if (cidade->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCidade::testarCenarioFalha(){
    try{
        cidade->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (cidade->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCidade::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//--------------------------------------------------------------------

void TUIdioma::setUp(){
    idioma = new Idioma();
    estado = SUCESSO;
}

void TUIdioma::tearDown(){
    delete idioma;
}

void TUIdioma::testarCenarioSucesso(){
    try{
        idioma->setValor(VALOR_VALIDO);
        if (idioma->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUIdioma::testarCenarioFalha(){
    try{
        idioma->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (idioma->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUIdioma::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

//--------------------------------------------------------------------------------

void TUSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testarCenarioSucesso(){
    try{
        senha->setValor(VALOR_VALIDO);
        if (senha->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha1(){
    try{
        senha->setValor(VALOR_INVALIDO1);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (senha->getValor() == VALOR_INVALIDO1)
            estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha2(){
    try{
        senha->setValor(VALOR_INVALIDO2);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (senha->getValor() == VALOR_INVALIDO2)
            estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha3(){
    try{
        senha->setValor(VALOR_INVALIDO3);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (senha->getValor() == VALOR_INVALIDO3)
            estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha4(){
    try{
        senha->setValor(VALOR_INVALIDO4);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (senha->getValor() == VALOR_INVALIDO4)
            estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha5(){
    try{
        senha->setValor(VALOR_INVALIDO5);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (senha->getValor() == VALOR_INVALIDO5)
            estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha6(){
    try{
        senha->setValor(VALOR_INVALIDO6);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (senha->getValor() == VALOR_INVALIDO6)
            estado = FALHA;
    }
}

int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha1();
    testarCenarioFalha2();
    testarCenarioFalha3();
    testarCenarioFalha4();
    testarCenarioFalha5();
    testarCenarioFalha6();
    tearDown();
    return estado;
}

//--------------------------------------------------------------------


void TUNome::setUp(){
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown(){
    delete nome;
}

void TUNome::testarCenarioSucesso(){
    try{
        nome->setValor(VALOR_VALIDO);
        if (nome->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha1(){
    try{
        nome->setValor(VALOR_INVALIDO1);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (nome->getValor() == VALOR_INVALIDO1)
            estado = FALHA;
    }
}

void TUNome::testarCenarioFalha2(){
    try{
        nome->setValor(VALOR_INVALIDO2);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (nome->getValor() == VALOR_INVALIDO2)
            estado = FALHA;
    }
}

void TUNome::testarCenarioFalha3(){
    try{
        nome->setValor(VALOR_INVALIDO3);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (nome->getValor() == VALOR_INVALIDO3)
            estado = FALHA;
    }
}

void TUNome::testarCenarioFalha4(){
    try{
        nome->setValor(VALOR_INVALIDO4);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (nome->getValor() == VALOR_INVALIDO4)
            estado = FALHA;
    }
}

void TUNome::testarCenarioFalha5(){
    try{
        nome->setValor(VALOR_INVALIDO5);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (nome->getValor() == VALOR_INVALIDO5)
            estado = FALHA;
    }
}

void TUNome::testarCenarioFalha6(){
    try{
        nome->setValor(VALOR_INVALIDO6);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (nome->getValor() == VALOR_INVALIDO6)
            estado = FALHA;
    }
}

int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha1();
    testarCenarioFalha2();
    testarCenarioFalha3();
    testarCenarioFalha4();
    testarCenarioFalha5();
    testarCenarioFalha6();
    tearDown();
    return estado;
}

//--------------------------------------------------------------

void TUNota::setUp(){
    nota = new Nota();
    estado = SUCESSO;
}

void TUNota::tearDown(){
    delete nota;
}

void TUNota::testarCenarioSucesso1(){
    try{
        nota->setValor(VALOR_VALIDO1);
        if (nota->getValor() != VALOR_VALIDO1)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUNota::testarCenarioSucesso2(){
    try{
        nota->setValor(VALOR_VALIDO2);
        if (nota->getValor() != ((VALOR_VALIDO2F + VALOR_VALIDO1F)/2))
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUNota::testarCenarioSucesso3(){
    try{
        nota->setValor(VALOR_VALIDO3);
        if (nota->getValor() != ((VALOR_VALIDO2F + VALOR_VALIDO1F + VALOR_VALIDO3F)/3))
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUNota::testarCenarioFalha1(){
    try{
        nota->setValor(VALOR_INVALIDO1);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (nota->getValor() == VALOR_INVALIDO1)
            estado = FALHA;
    }
}

void TUNota::testarCenarioFalha2(){
    try{
        nota->setValor(VALOR_INVALIDO2);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (nota->getValor() == VALOR_INVALIDO2)
            estado = FALHA;
    }
}

int TUNota::run(){
    setUp();
    testarCenarioSucesso1();
    testarCenarioSucesso2();
    testarCenarioSucesso3();
    testarCenarioFalha1();
    testarCenarioFalha2();
    tearDown();
    return estado;
}

//---------------------------------------------------------------------

void TUEmail::setUp(){
    email = new Email();
    estado = SUCESSO;
}

void TUEmail::tearDown(){
    delete email;
}

void TUEmail::testarCenarioSucesso(){
    try{
        email->setValor(VALOR_VALIDO);
        if (email->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha1(){
    try{
        email->setValor(VALOR_INVALIDO1);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (email->getValor() == VALOR_INVALIDO1)
            estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha2(){
    try{
        email->setValor(VALOR_INVALIDO2);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (email->getValor() == VALOR_INVALIDO2)
            estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha3(){
    try{
        email->setValor(VALOR_INVALIDO3);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (email->getValor() == VALOR_INVALIDO3)
            estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha4(){
    try{
        email->setValor(VALOR_INVALIDO4);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (email->getValor() == VALOR_INVALIDO4)
            estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha5(){
    try{
        email->setValor(VALOR_INVALIDO5);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (email->getValor() == VALOR_INVALIDO5)
            estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha6(){
    try{
        email->setValor(VALOR_INVALIDO6);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (email->getValor() == VALOR_INVALIDO6)
            estado = FALHA;
    }
}
void TUEmail::testarCenarioFalha7(){
    try{
        email->setValor(VALOR_INVALIDO7);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (email->getValor() == VALOR_INVALIDO7)
            estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha8(){
    try{
        email->setValor(VALOR_INVALIDO8);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (email->getValor() == VALOR_INVALIDO8)
            estado = FALHA;
    }
}

int TUEmail::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha1();
    testarCenarioFalha2();
    testarCenarioFalha3();
    testarCenarioFalha4();
    testarCenarioFalha5();
    testarCenarioFalha6();
    testarCenarioFalha7();
    testarCenarioFalha8();
    tearDown();
    return estado;
}

void TUUsuario::setUp() {
    usuario = new Usuario();
    estado = SUCESSO;
}

void TUUsuario::tearDown() {
    delete usuario;
}

void TUUsuario::testarCenarioSucesso() {
    Nome nome;
    nome.setValor(NOME_VALIDO);
    usuario->setNome(nome);
    if (usuario->getNome().getValor() != NOME_VALIDO) {
        estado = FALHA;
    }

    Email email;
    email.setValor(EMAIL_VALIDO);
    usuario->setEmail(email);
    if (usuario->getEmail().getValor() != EMAIL_VALIDO) {
        estado = FALHA;
    }

    Senha senha;
    senha.setValor(SENHA_VALIDA);
    usuario->setSenha(senha);
    if (usuario->getSenha().getValor() != SENHA_VALIDA) {
        estado = FALHA;
    }
}

int TUUsuario::run() {
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

void TUAvaliacao::setUp() {
    avaliacao = new Avaliacao();
    estado = SUCESSO;
}

void TUAvaliacao::tearDown() {
    delete avaliacao;
}

void TUAvaliacao::testarCenarioSucesso() {
    //Codigo codigo;
    //codigo.setValor(CODIGO_VALIDO);
    //avaliacao->setCodigo(codigo);
    //if (avaliacao->getCodigo().getValor() != CODIGO_VALIDO) {
    //    estado = FALHA;
    //}

    //Nota nota;
    //nota.setValor(NOTA_VALIDA);
    //avaliacao->setNota(nota);
    //if (avaliacao->getNota().getValor() != NOTA_VALIDA) {
    //    estado = FALHA;
    //}

    Descricao descricao;
    descricao.setDescricao(DESCRICAO_VALIDA);
    avaliacao->setDescricao(descricao);
    if (avaliacao->getDescricao().getDescricao() != DESCRICAO_VALIDA) {
        estado = FALHA;
    }
}

int TUAvaliacao::run() {
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

void TUSessao::setUp() {
    sessao = new Sessao();
    estado = SUCESSO;
}

void TUSessao::tearDown() {
    delete sessao;
}

void TUSessao::testarCenarioSucesso() {
    Data data;
    data.setData(DATA_VALIDA);
    sessao->setData(data);
    if (sessao->getData().getData() != DATA_VALIDA) {
        estado = FALHA;
    }

    Horario horario;
    horario.setHorario(HORARIO_VALIDO);
    sessao->setHorario(horario);
    if (sessao->getHorario().getHorario() != HORARIO_VALIDO) {
        estado = FALHA;
    }

    Idioma idioma;
    idioma.setValor(IDIOMA_VALIDO);
    sessao->setIdioma(idioma);
    if (sessao->getIdioma().getValor() != IDIOMA_VALIDO) {
        estado = FALHA;
    }
}

int TUSessao::run() {
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

void TUExcursao::setUp() {
    excursao = new Excursao();
    estado = SUCESSO;
}

void TUExcursao::tearDown() {
    delete excursao;
}

void TUExcursao::testarCenarioSucesso() {
    //Codigo codigo;
    //codigo.setValor(CODIGO_VALIDO);
    //avaliacao->setCodigo(codigo);
    //if (avaliacao->getCodigo().getValor() != CODIGO_VALIDO) {
    //    estado = FALHA;
    //}

    Titulo titulo;
    titulo.setTitulo(TITULO_VALIDO);
    excursao->setTitulo(titulo);
    if (excursao->getTitulo().getTitulo() != TITULO_VALIDO) {
        estado = FALHA;
    }

    //Nota nota;
    //nota.setValor(NOTA_VALIDA);
    //avaliacao->setNota(nota);
    //if (avaliacao->getNota().getValor() != NOTA_VALIDA) {
    //    estado = FALHA;
    //}

    Cidade cidade;
    cidade.setValor(CIDADE_VALIDA);
    excursao->setCidade(cidade);
    if (excursao->getCidade().getValor() != CIDADE_VALIDA) {
        estado = FALHA;
    }

    Duracao duracao;
    duracao.setDuracao(DURACAO_VALIDA);
    excursao->setDuracao(duracao);
    if (excursao->getDuracao().getDuracao() != DURACAO_VALIDA) {
        estado = FALHA;
    }

    Descricao descricao;
    descricao.setDescricao(DESCRICAO_VALIDA);
    excursao->setDescricao(descricao);
    if (excursao->getDescricao().getDescricao() != DESCRICAO_VALIDA) {
        estado = FALHA;
    }

    Endereco endereco;
    endereco.setEndereco(ENDERECO_VALIDO);
    excursao->setEndereco(endereco);
    if (excursao->getEndereco().getEndereco() != ENDERECO_VALIDO) {
        estado = FALHA;
    }
}

int TUExcursao::run() {
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}