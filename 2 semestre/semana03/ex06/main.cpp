#include <iostream>
#include <string>
#include "Lista.h"
#include "Livro.h"

using namespace std;

void menu(){
		cout << "\nMenu de Opcoes:" << endl;
        cout << "1. Adicionar Livro" << endl;
        cout << "2. Remover Livro" << endl;
        cout << "3. Consultar Livro" << endl;
        cout << "4. Exibir Todos os Livros" << endl;
        cout << "S. Sair" << endl;
        cout << "Escolha uma opção: ";
}

int main() {

    Lista biblioteca(3);
    
    char opcao;

    do {
        menu();
        cin>>opcao;

        switch (opcao) {
            case '1': {
                Livro novo;
                novo.preencher();
                
                biblioteca.insert(novo,0);
                biblioteca.imprimir();
                break;
            }
            case '2': {
                biblioteca.remove(0);
                biblioteca.imprimir();
                break;
            }
            case '3': {
                int id;
                cout << "\nDigite o ID do livro para consultar: ";
                cin >> id;

                Livro* l = biblioteca.buscar(id);
                if (l != nullptr) {
                    cout << "\nLivro Encontrado:" << endl;
                    l->imprimir();
                } else {
                    cout << "Livro com ID " << id << " não encontrado!" << endl;
                }
                break;
            }
            case '4': {
                cout << "\nLista de Livros:" << endl;
                biblioteca.imprimir();
                break;
            }
            default:
                cout << "Opção inválida!" << endl;
                break;
        }

    } while (opcao != 's' and opcao != 'S');

    cout << "\nPrograma encerrado." << endl;
    return 0;
}