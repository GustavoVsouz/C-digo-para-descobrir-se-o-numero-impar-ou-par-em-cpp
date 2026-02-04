#include <iostream>
#include <cstdio>
#include <locale.h>

int main() {
    setbuf(stdout, NULL); 
setlocale(LC_ALL,"");
	
    int n;
    
    while (true) {
        std::cout << "Digite um número (ou pressione Enter para sair): ";
        if (std::cin >> n) { 
            if (n % 2 == 0)
                std::cout << "Número par" << std::endl;
            else
                std::cout << "Número ímpar" << std::endl;
        } else { 
            std::cin.clear(); 
            std::string input;
            std::getline(std::cin, input);
            if (input.empty()) 
                break;
            else
                std::cout << "Entrada inválida. Por favor, insira um número." << std::endl;
        }
    }
    
    std::cout << "Programa encerrado." << std::endl;
    
    return 0;
}

