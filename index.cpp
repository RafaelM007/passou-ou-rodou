#include <iostream>
#include <locale.h>
#include <iomanip>
#include <cmath>

using namespace std;

struct infoMaterias
{
	int fezNP2;
	bool passou = false;
	float NP1 = 0; // nota parcial 1
	float NP2 = 0; // nota parcial 2
	float NP3 = 0; // nota parcial 3
	float NPA = 0; // nota parcial sem NP3

};


void PassouAlgoritmos(infoMaterias &aluno)
{
	if (aluno.fezNP2 == 2)
	{
		aluno.NP2 = 120 - aluno.NP1; //quanto deve tirar na NP2 para que pegue a média
	}
	else if(aluno.fezNP2 == 1)
	{
		//se ja fez a NP2, atribuir a NP3 quanto ele deve tirar para que pegue média e passe
		aluno.NPA = (aluno.NP1 + aluno.NP2) / 2;
		aluno.NP3 = 100 - aluno.NPA;
	}
}

int main()
{

	setlocale(LC_ALL, "PORTUGUESE");
	int disciplina;
	infoMaterias aluno;

	cout << "Programa auxiliar à estudantes de Engenharia - Inatel" << endl
		 << endl;

	// Menu de seleção das materias
	cout << "Disciplinas" << endl;
	cout << "(1) Algoritmos e Estrutura de Dados | " << endl;
	cout << "(2) Álgebra e Geometria Analítica " << endl;
	cout << "(3) Circuitos Elétricos em Corrente Contínua" << endl;
	cout << "(4) Matemática Aplicada à Engenharia" << endl;
	cout << "(5) Química e Ciência dos Materiais" << endl
		 << endl;

	cout << "Qual sua opção? " << endl;
	cin >> disciplina; // selecionar materia

	if (disciplina == 1)
	{
		cout << "" << endl;
		cout << "Algoritimos e Estrutura de Dados |" << endl
			 << endl;

		cout << "Você já concluiu a NP2? Digite 1 para sim e 2 para não" << endl;
		cin >> aluno.fezNP2;

		
		cout << "Insira sua nota da NP1: ";
		cin >> aluno.NP1;

		PassouAlgoritmos(aluno);
		

	}
	else if (disciplina == 2)
	{
		cout << "" << endl;
		cout << "Álgebra e Geometria Analítica" << endl
			 << endl;

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
	else if (disciplina == 3)
	{
		cout << "" << endl;
		cout << "Circuitos Elétricos em Corrente Contínua" << endl
			 << endl;

		int p1Circuitos;
		int p2Circuitos;
		int pontoExtraCircuitos;

		cout << "Nota da primeira prova: ";
		cin >> p1Circuitos;

		cout << "Nota da segunda prova: ";
		cin >> p2Circuitos;
	}
	else if (disciplina == 4)
	{
		cout << "" << endl;
		cout << "Matemática Aplicada à Engenharia" << endl
			 << endl;

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
	else if (disciplina == 5)
	{
		cout << "" << endl;
		cout << "Química e Ciência dos Materiais" << endl
			 << endl;

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
	else
	{
		cout << "" << endl;
		cout << "Opção inválida. Digite novamente." << endl;
		cin >> disciplina;
	}

	return 0;
}