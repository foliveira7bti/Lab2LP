#include <iostream>
#include <string>
#include <ostream>
#include "empresa.h"
#include "funcionario.h"

int Empresa::totalEmpresas = 0;
int Funcionario::totalFuncionarios = 0;

int main (void)
{
	std::cout <<"Total de Empresas: " << Empresa::getTotalEmpresas() << std::endl;
	std::cout <<"Total de Funcionarios: " << Funcionario::getTotalFuncionarios() << std::endl;
	Funcionario a1("Ana", 200);
	Funcionario a2("Beatriz", 300);
	Funcionario a3("Carlos", 400);

	Empresa p("Corporacao Estudantes BTI", "54355434-7542");
	p.addFuncionario(a1);
	p.addFuncionario(a2);
	p.addFuncionario(a3);
	Funcionario a4("Douglas", 100);
	Funcionario a5("Eleanor", 220);
	Funcionario a6("Fernando", 650);
	Funcionario a7("Gustavo", 80);
	//Funcionario a8("Helena", 620);

	Empresa q("Corporacao Estudantes BTI", "54355434-7542");
	q.addFuncionario(a4);
	q.addFuncionario(a5);
	q.addFuncionario(a6);
	q.addFuncionario(a7);
	//q.addFuncionario(a8);

	std::cout << "Listando Funcionarios da Empresa p: " << std::endl;

	p.listarFuncionarios();

	std::cout << "Listando Funcionarios da Empresa q: " << std::endl;
	q.listarFuncionarios();

	std::cout << "Aplicando aumento de 20 porcento na Empresa p: " << std::endl;
	p.aplicarAumento(1.20);

	std::cout << "Listando Funcionarios da Empresa p: " << std::endl;
	p.listarFuncionarios();

	std::cout << "Total de Funcionarios de qualquer empresa: " << std::endl;
	std::cout << Funcionario::getTotalFuncionarios() << std::endl;

	std::cout << "Total de Empresas: " << std::endl;
	std::cout << Empresa::getTotalEmpresas() << std::endl;

	std::cout << "Media de funcionario por empresa: " << std::endl;
	std::cout << (double)Funcionario::getTotalFuncionarios()/Empresa::getTotalEmpresas() << std::endl;
	//std::cout << "Hello world" << std::endl << a1 << std::endl;

	return 0;
}