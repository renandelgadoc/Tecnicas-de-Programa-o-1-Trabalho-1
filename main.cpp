//
// Created by Thiago 200073303
//

#include <iostream>
#include "testes.h"

using namespace std;

int main() {
//---------------------------------------------------------------------------
// Estrutura de c�digo para instanciar e executar teste de unidade.

/* --------------------------------------------------------------------------

    // Instanciar classe de teste de unidade.

    TUnidade teste;

    // Invocar m�todo e apresentar mensagem acerca do resultado.

    switch(teste.run()){
        case TUnidade::SUCESSO: cout << "SUCESSO" << endl;
                                break;
        case TUnidade::FALHA  : cout << "FALHA" << endl;
                                break;
    }

-------------------------------------------------------------------------- */

    TUDuracao testeDuracao{};

    switch (testeDuracao.run()) {
        case TUDuracao::SUCESSO:
            cout << "SUCESSO - DURACAO" << endl;
            break;
        case TUDuracao::FALHA:
            cout << "FALHA - DURACAO" << endl;
            break;
    }

    TUEndereco testeEndereco{};

    switch (testeEndereco.run()) {
        case TUEndereco::SUCESSO:
            cout << "SUCESSO - ENDERECO" << endl;
            break;
        case TUEndereco::FALHA:
            cout << "FALHA - ENDERECO" << endl;
            break;
    }

    TUDescricao testeDescricao{};

    switch (testeDescricao.run()) {
        case TUDescricao::SUCESSO:
            cout << "SUCESSO - DESCRICAO" << endl;
            break;
        case TUDescricao::FALHA:
            cout << "FALHA - DESCRICAO" << endl;
            break;
    }

    TUTitulo testeTitulo{};

    switch (testeTitulo.run()) {
        case TUTitulo::SUCESSO:
            cout << "SUCESSO - TITULO" << endl;
            break;
        case TUTitulo::FALHA:
            cout << "FALHA - TITULO" << endl;
            break;
    }

    TUHorario testeHorario{};

    switch (testeHorario.run()) {
        case TUHorario::SUCESSO:
            cout << "SUCESSO - HORARIO" << endl;
            break;
        case TUHorario::FALHA:
            cout << "FALHA - HORARIO" << endl;
            break;
    }

    TUData testeData{};

    switch (testeData.run()) {
        case TUData::SUCESSO:
            cout << "SUCESSO - DATA" << endl;
            break;
        case TUData::FALHA:
            cout << "FALHA - DATA" << endl;
            break;
    }

//
// Created by Renan 200062743
//

    TUCidade testeA;

    switch(testeA.run()){
        case TUCidade::SUCESSO: cout << "SUCESSO - CIDADE" << endl;
            break;
        case TUCidade::FALHA  : cout << "FALHA   - CIDADE" << endl;
            break;
    }

    //------------------------------------------------------------------------

    TUIdioma testeB;

    switch(testeA.run()){
        case TUCidade::SUCESSO: cout << "SUCESSO - IDIOMA" << endl;
            break;
        case TUCidade::FALHA  : cout << "FALHA   - IDIOMA" << endl;
            break;
    }

    //----------------------------------------------------------

    TUSenha testeC;

    switch(testeC.run()){
        case TUCidade::SUCESSO: cout << "SUCESSO - SENHA" << endl;
            break;
        case TUCidade::FALHA  : cout << "FALHA   - SENHA" << endl;
            break;
    }

    //-----------------------------------------------------

    TUNome testeD;

    switch(testeD.run()){
        case TUCidade::SUCESSO: cout << "SUCESSO - NOME" << endl;
            break;
        case TUCidade::FALHA  : cout << "FALHA   - NOME" << endl;
            break;
    }

//-------------------------------------------------------------------------

    TUNota testeE;

    switch(testeE.run()){
        case TUCidade::SUCESSO: cout << "SUCESSO - NOTA" << endl;
            break;
        case TUCidade::FALHA  : cout << "FALHA   - NOTA" << endl;
            break;
    }

//-----------------------------------------------------------------------------------

    TUEmail testeF;

    switch(testeF.run()){
        case TUCidade::SUCESSO: cout << "SUCESSO - EMAIL" << endl;
            break;
        case TUCidade::FALHA  : cout << "FALHA   - EMAIL" << endl;
            break;
    }

//---------------------------

}

