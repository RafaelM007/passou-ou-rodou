#include <iostream>
#include <locale.h>
#include <iomanip>
#include <cmath>

using namespace std;

struct infoMaterias
{
	int qtdAtv = 0;
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

void faltamAtividades(float notaMinima)
{
	cout << "Ainda faltam atividades. Para passar com 60, você precisa de " << notaMinima << " pontos entre NP1 e NP2" << endl;
}

bool PassouAlgoritmos(infoMaterias &aluno, float Pj1)
{
	//calcula a NP1 se ele ja fez as duas atividades
	if (aluno.qtdAtv >= 2)
	{
		aluno.NP1 = 0.8 * aluno.P1 + 0.2 * aluno.EX1;
	}
	//calcula a NP2 se ele já fez todas as atividades
	if(aluno.qtdAtv == 5)
	{
		aluno.NP2 = 0.8 * aluno.P2 + 0.2 * pow((aluno.EX2 * Pj1), 0.2);

		//nota parcial do aluno
		aluno.NPA = (aluno.NP1 + aluno.NP2) / 2; 
	}

	//calcula a nota minima a ser tirada na NP2
	float notaMinima = 120 - aluno.NP1;

	// Quando só tem a nota na NP1
	if (aluno.qtdAtv == 2)
	{
		// Mostra quanto falta na NP2 para alcançar a media de 60

		cout << "É necessário que você tire pelo menos: " << fixed << setprecision(2) << notaMinima << " na NP2" << endl;

		//falta exibir quanto deve tirar em cada matéria;

	}

	// quando fez até a P2
	else if (aluno.qtdAtv == 3)
	{
		float parteFixa = 0.8 * aluno.P2; // parte já disponivel da NP2
		if (parteFixa <= notaMinima)
		{
			float restante = notaMinima - parteFixa; // só se ainda precisar de nota fora a P2
		}
	}

	// quando fez até o Ex2
	else if (aluno.qtdAtv == 4)
	{
		float parteFixa = 0.8 * aluno.P2;
		float notaRestante =
	}

	if (aluno.qtdAtv < 5) // se nem todas as atividades já foram feitas
	{
		// soma a nota que ele já tem
		aluno.NPA = aluno.NP1 + aluno.NP2;
		// se a nota ainda não é suficiente para ter passado
		if (aluno.NPA < 60)
		{
			float notaMinima = 120 - aluno.NPA; // quanto falta para média 60;
			faltamAtividades(notaMinima);
		}
	}
	{

		
	}

	if (aluno.NPA >= 60)
	{
		aluno.passou = true;
		aluno.NF = aluno.NPA;
	}
	else
	{
		aluno.passou = false;
		aluno.NP3 = 100 - aluno.NPA; // calcula quantos pontos são necessarios tirar na NP3
	}

	return aluno.passou;
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
		float Pj1 = 0;
		cout << "" << endl;
		cout << "Algoritimos e Estrutura de Dados |" << endl
			 << endl;

		cout << "Qual o número de atividades já feitas?" << endl;
		cin >> aluno.qtdAtv;

		cout << "" << endl;
		if (aluno.qtdAtv >= 1)
		{
			cout << "Nota da primeira prova: ";
			cin >> aluno.P1;
		}

		else if (aluno.qtdAtv >= 2)
		{
			cout << "Nota da primeira lista de exercícios do Moodle: ";
			cin >> aluno.EX1;
		}

		else if (aluno.qtdAtv >= 3)
		{
			cout << "Nota da segunda prova: ";
			cin >> aluno.P2;
		}

		else if (aluno.qtdAtv >= 4)
		{
			cout << "Nota da segunda lista de exercícios do Moodle: ";
			cin >> aluno.EX2;
		}
		else if (aluno.qtdAtv == 5)
		{
			cout << "Nota do projeto: ";
			cin >> Pj1;
		}

		aluno.passou = PassouAlgoritmos(aluno, Pj1);

		if (aluno.passou == true)
		{
			cout << "Passou com " << aluno.NF << " pontos";
		}
		else // quando o aluno nao passou com mesmo com todas notas (fora NP3)
		{
			cout << "Você deve tirar " << aluno.NP3 << " pontos na NP3 para a aprovação em algoritmos";
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