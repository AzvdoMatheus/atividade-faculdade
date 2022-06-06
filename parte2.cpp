
/* 2. Faça um algoritmo com as funções de um caixa eletrônico de Banco. 
- Utilize Vetores para resolver a questão. 
- O Algoritmo deve armazenar em vetores as informações de conta corrente e de saldo de 1000 clientes.
- Ao rodar o algoritmo deve ser solicitado a conta corrente numérica do cliente, armazena-la e em seguida apresentar o seguinte Menu:

	MENU: 		  
	                 
	1 - Saldo      2 - Saque      3 - Deposito   4 - Sair       
    
  Escolher a opção: 

- O algoritmo deve executar as operações de cada cliente até que ele digite a opção 4 - Sair, após essa operação deve seguir para o próximo cliente.
- Caso o cliente digite uma opção que não exista informe "Opção invalida".
- Algoritmo deve operar as quatro funções do caixa eletrônico.
- O Saldo inicial é igual a 0,00.
- O deposito soma um valor ao saldo.
- O saque subtrai um valor ao saldo.
- Caso o usuário tente sacar um valor maior que o saldo disponível o programa deve apresentar a mensagem "Saldo insuficiente".
- No final de cada operação deve ser apresentada a conta corrente desse cliente e seu saldo atual.
- Apos finalizar as operações dos 1000 clientes apresente um relatório de conta corrente do cliente e saldo atualizado. */
#include <iostream>
using namespace std;

int main(){

  int nro_conta[3], op_Menu, nro_clientes, i;
  float saldo_conta[3], valor_saque, valor_deposito;
  bool logout = false;

  nro_clientes = 3;
  saldo_conta[i] = 0;
  i = 0;

  while (i < nro_clientes){ 
    cout << "\nDigite o numero de sua conta corrente: ";
    cin >> nro_conta[i];
    cout << "Bem-vindo(a), conta numero " << nro_conta[i] << endl;
    
      do{
            cout << "---------------------------------\n";
            cout << "Qual operacao deseja realizar:\n";
            cout << "---------------------------------\n";
            cout << "1 - Visualizar saldo\n";
            cout << "2 - Sacar valor\n" ;
            cout << "3 - Depositar valor\n";
            cout << "4 - Sair da conta\n";
        
          cout << "\nDigite o numero da opcao desejada: ";
          cin >> op_Menu;
    
            if (op_Menu == 1){
                cout << "\nSaldo atual: " << saldo_conta[i] << " reais." << endl;
                cout << "Conta numero " << nro_conta[i] << endl;
            }
    
            else if (op_Menu == 2){
                cout << "\nSaldo atual: " << saldo_conta[i] << " reais." << endl;
                cout << "Quantia que deseja sacar: ";
                cin >> valor_saque;
                    if (valor_saque > saldo_conta[i]){
                        cout << "Saldo insuficiente! " << endl;
                    }
                    else{
                        saldo_conta[i] -= valor_saque;
                    }
                    cout << "\nSaldo atual: " << saldo_conta[i] << " reais." << endl;
                    cout << "Conta numero " << nro_conta[i] << endl;
            }
    
            else if (op_Menu == 3){
                cout << "\nQuantia que deseja depositar: ";
                cin >> valor_deposito;
                cout << "Valor depositado: " << valor_deposito << endl;
                    saldo_conta[i] += valor_deposito;
                    cout << "\nSaldo atual: " << saldo_conta[i] << " reais." << endl;
                    cout << "Conta numero " << nro_conta[i] << endl;
            }
    
            else if (op_Menu == 4){
                logout = true;
                cout << "\nMenu da conta encerrado!\n";
            }
    
            else{
                cout << "Opcao invalida!\n\n";
            }
    
      }while (logout == false);
    i++;
  }

    cout << "\n\nRELATORIO DE CONTAS BANCO\n\n";

    for (i=0; i < nro_clientes; i++){
        cout << "Conta corrente numero " << nro_conta[i] << endl;
        cout << "Saldo atual: " << saldo_conta[i] << endl;
    }
}
