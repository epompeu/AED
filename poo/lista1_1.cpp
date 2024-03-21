#include <iostream>
#include <string>

class Agenda_Telefonica {
private:
  std::string nome;
  std::string telefone;

public:
  Agenda_Telefonica(std::string _nome, std::string _telefone) : nome(_nome), telefone(_telefone) {}

  
  void imprimirDados() {
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Telefone: " << telefone << std::endl;
  }
};

int main() {
  Agenda_Telefonica contato("João","123456789");
  contato.imprimirDados();
  
  return 0;
}
