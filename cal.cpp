#include <iostream>
#include <string>

int main()
{	
	float operando1 = 0;
	float operando2 = 0;
	char operacao = 'v';
	float resultado = 0;
	bool rodando = true;
	
	while (rodando)
	{
		
		system("cls");
	std::cout << "guia: 'q' para sair ,'c' para limpar o resultado ,quando resultado e diferente de 0 voce so podera operar em cima dalel, caso nao queria digite 'c'\nnumeros racionais sao  escritos com '.' \n\n";  

		std::cout << "escreva uma exprecao matematic\n"
		<< "+---------------+ \n"
		<< "|   |   | c | q | \n"
		<< "|---+---+---+---| \n"
		<< "| 7 | 8 | 9 | * | \n"
		<< "|---+---+---+---| \n"
		<< "| 4 | 5 | 6 | / | \n"
		<< "|---+---+---+---| \n"
		<< "| 1 | 2 | 3 | - | \n"
		<< "|---+---+---+---| \n"
		<< "|+/-| 0 | , | + | \n"
		<< "+---------------+ \n";


		std::cout <<"resultado ="<< resultado << "\n";
		  
		 
		
		if(resultado == 0)
		{
			std::cin >> operando1>> operacao >> operando2;
		}	
		else
		{
			operando1 = resultado;
			std::cin >> operacao ;
			if(operacao != 'c' && operacao != 'q')
			{
				std::cin >> operando2;
			}
		}

		switch (operacao)
		{
			case '+':
			resultado = operando1 + operando2;
			break;
			case '-':
			resultado = operando1 - operando2;
			break;
			case '*':
			resultado = operando1 * operando2;
			break;
			case '/':
			resultado = operando1/operando2;
			break;
			case 'c':
			resultado = 0;
			break;
			case 'q':
			rodando = false;
			break;
		}
	}
return 0;
}