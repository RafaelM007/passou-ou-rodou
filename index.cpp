#include <iostream>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL,"PORTUGUESE");
	
	int opcao;
	
	cout << "Programa auxiliar à estudantes de Engenharia - Inatel" << endl << endl;
	
	cout << "Disciplinas" << endl;
	cout << "(1) Algoritimos e Estrutura de Dados | " << endl;
	cout << "(2) Álgebra e Geometria Analítica " << endl;
	cout << "(3) Circuitos Elétricos em Corrente Contínua" << endl;
	cout << "(4) Matemática Aplicada à Engenharia" << endl;
	cout << "(5) Química e Ciência dos Materiais" << endl << endl;
	
	cout << "Qual sua opção? " << endl;
	cin >> opcao;

    if(opcao == 1){
		cout << "" << endl;
		cout << "Algoritimos e Estrutura de Dados |" << endl << endl;
		
		int p1Algoritimos;
		int atividades1;
		
		cout << "Nota da primeira prova: ";
		cin >> p1Algoritimos;
		
		cout << "Nota dos exercícios do Moodle: ";
		cin >> atividades1;
		
		cout << "Possui nota da segunda prova? ";
	}
	else if(opcao == 2){
		cout << "" << endl;
		cout << "Álgebra e Geometria Analítica" << endl << endl;
		
		int p1Algebra;
		int p2Algebra;
		int pontoExtraAlgebra;
		
		cout << "Nota da primeira prova: ";
		cin >> p1Algebra;
		
		cout << "Nota da segunda prova: ";
		cin >> p2Algebra;
		
		cout << "Ponto extra: ";
		cin >> pontoExtraAlgebra;
	}
    else if(opcao == 3){
		cout << "" << endl;
		cout << "Circuitos Elétricos em Corrente Contínua" << endl << endl;
		
		int p1Circuitos;
		int p2Circuitos;
		int pontoExtraCircuitos;
		
		cout << "Nota da primeira prova: ";
		cin >> p1Circuitos;
		
		cout << "Nota da segunda prova: ";
		cin >> p2Circuitos;		
	}
	else if(opcao == 4){
		cout << "" << endl;
		cout << "Matemática Aplicada à Engenharia" << endl << endl;
		
		int p1Matematica;
		int p2Matematica;
		int p3Matematica;
		int p4Matematica;

        cout << "Nota da primeira prova: ";
		cin >> p1Matematica;
		
		cout << "Nota da seguda prova: ";
		cin >> p2Matematica;
		
		cout << "Nota da terceira prova: ";
		cin >> p3Matematica;
		
		cout << "Nota da quarta prova: ";
		cin >> p4Matematica;	
	}
	else if(opcao == 5){
		cout << "" << endl;
		cout << "Química e Ciência dos Materiais" << endl << endl;
		
		int p1Quimica;
		int p2Quimica;
		int at1Quimica;
		int at2Quimica;
		int at3Quimica;
		int at4Quimica;
		int at5Quimica;
		
		cout << "Nota da primeira prova: ";
		cin >> p1Quimica;
        
        cout << "Nota da seguda prova: ";
		cin >> p2Quimica;
		
		cout << "Nota da atividade 1: ";
		cin >> at1Quimica;
		
		cout << "Nota da atividade 2: ";
		cin >> at2Quimica;
		
		cout << "Nota da atividade 3: ";
		cin >> at3Quimica;
		
		cout << "Nota da atividade 4: ";
		cin >> at4Quimica;
		
		cout << "Nota da atividade 5: ";
		cin >> at5Quimica;

	}
	else{
		cout << "" << endl;
		cout << "Opção inválida. Digite novamente." << endl ;
		cin >> opcao;
	}

	return 0;
}