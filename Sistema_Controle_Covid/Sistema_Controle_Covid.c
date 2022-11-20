#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>

int main()
{
	setlocale(LC_ALL, "Portuguese");
	
    char username[6];
    int password;
    int verifies_login = 0;
    int starts_program;
	
	do{
		printf("\t\t\t\t\tSecretaria do Ministério da Saúde\n\n");
		sleep(1);
		printf("Digite o username: ");
	    fgets(username,6,stdin);
	    
	    printf("Digite a senha: ");
	    scanf("%d", &password);
	    getchar();
	    
	    
		if (strcmp(username, "admin") == 0 && password == 123456) {
			verifies_login = 1;
			printf("\nLogin realizado com sucesso.");
			sleep(2);
			system("cls");
		}
		else{
			printf("O login informado está incorreto. Favor verificar o username e password.");
			sleep(2);
			system("cls");
		}	
	}
	while(verifies_login != 1);
	
	do{
		
		char endereco[60];
		char bairro[60];
		char cidade[60];
		char estado[30];
		char cep[10];
		
		printf(" * Endereço * \n\n");
		printf("Informe o endereço: ");
    	fgets(endereco,60,stdin);
    	  	
    	printf("Informe o bairro: ");
    	fgets(bairro,60,stdin);
    	
    	printf("Informe a cidade: ");
    	fgets(cidade,60,stdin);
    	
    	printf("Informe o estado: ");
    	fgets(estado,60,stdin);
    	
    	printf("Informe o CEP: ");
    	fgets(cep,60,stdin);
    	
    	printf("\n\nEndereço: %s\nBairro: %s\nCidade: %s\nEstado: %s\nCEP: %s",endereco,bairro,cidade,estado,cep);
    	printf("\n\nDados Cadastrados com Sucesso!.");
		sleep(2);
		system("cls");
		
		char data_diagnostico[10];
		char sta_comorbidade[1];
		int idade;
		char run_again[1];
		
		printf(" * Dados Médicos * \n\n");
		printf("Informe a data de diagnóstico: ");
    	fgets(data_diagnostico,10,stdin);
    	
    	printf("Possui alguma comorbidade? (S = Sim, N = Não): ");
    	fgets(sta_comorbidade,1,stdin);
    	printf("\n\nInformações Salvas!");
    	
    	printf("\nDeseja Cadastrar Outra Pessoa? (S = Sim, N = Não): ");
    	fgets(run_again,1,stdin);		

    	if(strcmp(run_again, "S") == 0){
    		verifies_login = 0;
		}
    	
	}
	while(verifies_login = 1);
	
	
	return 0;
}

