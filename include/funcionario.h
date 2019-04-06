#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <iostream>
#include <string>
#include <ostream>

class Funcionario
{
	//Atributos Privados
private:
	double salario;
	std::string nome;
public:
	//Atributos Publicos

	//Construtores e Destrutores Publicos
	Funcionario();
	Funcionario(std::string nome_, double salario_);
	~Funcionario();

	//Metodos Publicos

	//Getter e setters
	std::string getNome();
	double getSalario();
	void setNome(std::string nome_);
	void setSalario(double salario_);

	//Outros Metodos
	void setAumento(double aumento_);
	friend std::ostream& operator<< (std::ostream &o, Funcionario const func);

	//Metodos e Atributos estaticos
	static int totalFuncionarios;
	static int getTotalFuncionarios();
};

#endif