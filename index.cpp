#include <iostream>
#include <locale.h>
#include <iomanip>
#include <cmath>

using namespace std;

struct infoMaterias
{
	int fezNP2 = false;
	bool passou = false;
	int disciplina;

	float P1 = 0; // C02, M01
	float P2 = 0; // C02, M01
	float P3 = 0; // M01
	float P4 = 0; // M01

	float EX1 = 0; // C02
	float EX2 = 0; // C02

	float NP1 = 0; // nota parcial 1
	float NP2 = 0; // nota parcial 2
	float NP3 = 0; // nota parcial 3
	float NPA = 0; // nota parcial sem NP3

	float NF = 0; // nota final
};


float PassouAlgoritmos(infoMaterias &aluno)
{
	
}

int main()
{

	setlocale(LC_ALL, "PORTUGUESE");

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
	cin >> aluno.disciplina; // selecionar materia

	if (aluno.disciplina == 1)
	{
		cout << "" << endl;
		cout << "Algoritimos e Estrutura de Dados |" << endl
			 << endl;

		cout << "Você já concluiu a NP2? Digite 1 para sim e 2 para não" << endl;
		cin >> aluno.fezNP2;

		cout << "" << endl;
		
		cout << "Insira sua nota da NP1: ";
		cin >> aluno.NP1;

		if(aluno.fezNP2 == 2){
			cout << "Falta"
		}

	}
	else if (aluno.disciplina == 2)
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
	else if (aluno.disciplina == 3)
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
	else if (aluno.disciplina == 4)
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
	else if (aluno.disciplina == 5)
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
		cin >> aluno.disciplina;
	}

	return 0;
}