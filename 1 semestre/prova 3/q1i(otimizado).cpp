#include <iostream>
using namespace std;

struct medico{
    string nome, especialidade;

    void preencher(){
        cout << "Qual o nome do medico? ";
        cin >> nome;
        cout << "Qual a especialidade? ";
        cin >> especialidade;
    }
};

struct paciente{
    string nome, queixa;
    int idade;

    void preencher(){
        cout << "Qual o nome do paciente? ";
        cin >> nome;
        cout << "Qual a queixa? ";
        cin >> queixa;
        cout << "Qual a idade? ";
        cin >> idade;
    }
};

struct remedio{
    string nome;
    int dosagem;
    float preco;

    void preencher(){
        cout << "Qual o nome do remedio? ";
        cin >> nome;
        cout << "Qual a dosagem? ";
        cin >> dosagem;
        cout << "Qual o preco? ";
        cin >> preco;
    }
};

struct atendimento{
    float preco;
    paciente p1;
    medico m1;
    int quant;
    remedio *re = nullptr;

    void preencher(){

        p1.preencher();
        m1.preencher();

        cout << "Quantos remedios? ";
        cin >> quant;

        re = new remedio[quant];

        for(int i=0; i<quant; i++){
            cout << "Remedio " << i+1 << ":" << endl;
            re[i].preencher();
        }

        cout << "Qual o preco do atendimento? ";
        cin >> preco;
    }

};

void funcaoE(atendimento &a, medico &m){

    cout << "\nPaciente:\n";
    cout << "Nome: " << a.p1.nome << endl;
    cout << "Queixa: " << a.p1.queixa << endl;
    cout << "Idade: " << a.p1.idade << endl;
    cout << "Preco do atendimento: " << a.preco << endl;

    if(a.m1.nome == m.nome){
        cout << "Medico presente." << endl;
    }
}

float funcaoF(atendimento &a){
    float soma = 0;
    for(int i=0; i<a.quant; i++){
        soma += a.re[i].preco;
    }

    return soma;
}

float funcaoG(atendimento &a){
    return funcaoF(a) + a.preco;
}

void funcaoH(atendimento &a1, atendimento &a2){

    if(funcaoG(a1) > funcaoG(a2)){
        cout << "\nPaciente que mais gastou: "
             << a1.p1.nome << endl;
    }
    else{
        cout << "\nPaciente que mais gastou: "
             << a2.p1.nome << endl;
    }

}

int main(){
    atendimento p[2];
    medico m;

    cout << "MEDICO DE COMPARACAO\n";
    m.preencher();

    for(int i=0; i<2; i++){

        cout << "\nATENDIMENTO " << i+1 << endl;

        p[i].preencher();

    }

    cout << "\n===== FUNCAO E =====\n";

    funcaoE(p[0], m);
    cout << endl;
    funcaoE(p[1], m);

    cout << "\n===== FUNCAO H =====\n";

    funcaoH(p[0], p[1]);

    return 0;
}