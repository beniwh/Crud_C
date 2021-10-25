
/*
===========================================
               CRUD em C++ 
        Introducao a programacao
                 2018
===========================================
*/

#include <iostream>
#include <algorithm>
#include<array>
#include <vector>
using namespace std;

int main()
{
    cout << " -## Bem vindo a base de dados ##-" << endl;
    char escolha;
    string nomeregistro;
    string removeregistro;
    int countnum;
    string autornome;
    string completo;
    vector<string> registrorray;

    do{
        cout << " a- Adicionar um registro" << endl;
        cout << " b- Remover um registro" << endl;
        cout << " c- Limpar banco de dados" << endl;
        cout << " d- Mostrar o numero de registros" << endl;
        cout << " e- Mostrar todos os registros" << endl;
        cout << " f- Sair" << endl;
        cin >> escolha;
        if(escolha == 'f' ) {
            printf("Encerrando o programa ...");
        }
        else{
            if(escolha == 'a'){
                cout << "Digite o nome do registro" ;
                cin >> nomeregistro;
                cout << ":";
                cin >> autornome;
                completo = nomeregistro + " " + autornome;
                registrorray.push_back(completo);
                cout << "Adiconado" << endl;
            }else if(escolha =='b'){
                cout << "Digite o numero do registro: " ;
                cin >> removeregistro;
                for(int i = 0; i < registrorray.size() ; i++){
                    if (registrorray[i].find(removeregistro) != std::string::npos) {
                        registrorray.erase (registrorray.begin()+i);
                        break;
                    }
                }
                cout << " " << endl;
                cout << "Ristro removido" << endl;
                cout << " " << endl;
            }else if(escolha == 'c'){
                registrorray.clear();
                cout << "Banco de dados apagado"  << endl;
                cout << " " << endl;
            }else if(escolha == 'd'){
                countnum = registrorray.size();
                cout << "O numero de reistro é :" << countnum << endl;
            }else if(escolha == 'e'){
                cout << "Os registro são: " << endl;
                for(int i = 0; i < registrorray.size() ; i++){
                    cout << i << " " << registrorray[i] <<  " " << endl; ;

                }
                cout << " " << endl;
            }
        }
    }while(escolha != 'f');

    return 0;
}
