//Nome: Marcos Alexandre de Andrade Junior Matr�cula: UC21103326 Curso: Engenharia de Softtware

//Biblioteca para entrada de dados;
#include<stdio.h>

//Biblioteca para usar o comando system("cls");
#include <stdlib.h>

//Bibliotecas para usar acentua��o na lingua portuguesa;
#include <locale.h>

//fun��o para manipular strings
#include <string.h>

int main(){
	//fun��o para acentua��o na lingua portuquesa
    setlocale(LC_ALL, "Portuguese");

    //Espa�amnto/c�digo limpo (P�gina 91)
    //Declara��o de vari�veis do tipo inteiro/c�digo limpo/Use nomes que revelem seu prop�sito(P�GINA 27);
    //Use nomes pronunci�veis(P�GINA 30);
    int quantidadeDeSecoesRealizadas = 0, quantidadeDePessoas = 0, i = 0, somaSexoFeminino = 0,somaSexoMasculino = 0,somaIdadeCriancas = 0, somaIdadeAdolescentes = 0, somaIdadeAdultos = 0,somaIdadeIdosos = 0, publicoFemininoPresente = 0, publicoMasculinoPresente = 0, idade = 0;


    //declara��o de vari�veis do tipo caractere/texto/um �nico caractere
    //Use nomes pronunci�veis(P�GINA 30);
    char nomeDoFilme[100], sexo,escolhaDoUsuario,repeticaoDoPrograma;


    size_t tamanho;//size_t � um tipo inteiro n�o assinado de pelo menos 16 bits
	               

do{ //Nova funcionalidade: Nosso programa foi colocado dentro de um do/while,fazendo com que possamos executar o programa novamente
   
   
    system("cls");//A fun��o system("cls") vai limpar a tela se o usu�rio decidir executar o programa novamente
    
    
    printf("\nSEJA BEM-VINDO AO SOFTWARE CINEMA BRAS�LIA\n\n");//Mensagem de apresenta��o do software


    printf("DIGITE A QUANTIDADE DE SE��ES QUE SER�O REALIZADAS HOJE: ");//  Quantidade de se��es que ser�o realizadas
    scanf("%d",&quantidadeDeSecoesRealizadas);//Leitura da quantidade de se��es realizadas
    
	while(quantidadeDeSecoesRealizadas != 2){  //  Valida��o da quantidade de se��es realizadas,n�o podendo ser diferente de 2
	    printf("ATEN��O: VOC� DEVE CADASTRAR DUAS SE��ES!\n\n");//printf usado para imprimir um alerta ao usu�rio
        printf("DIGITE A QUANTIDADE DE SE��ES QUE SER�O REALIZADAS HOJE: ");// Quantidade de se��es que ser�o realizadas
        scanf("%d",&quantidadeDeSecoesRealizadas);//Leitura da quantidade de se��es realizadas
	}

    do{//estrutura de repeti��o utilizada para definir o nome do filme e valida��o do mesmo 
     printf("\nDIGITE O NOME DO FILME: ");//printf utilizado para imprimir uma mensagem ao usu�rio
     fflush(stdin);//Usamos o fflush(stdin) para limpar o lixo de mem�ria
     fgets(nomeDoFilme, 99, stdin);//usamos o fgets(nomeDoFilme, 99, stdin) para ler o nome do filme
     tamanho = strlen(nomeDoFilme);// a vari�vel TAMANHO recebe tamanho da string nomeDoFilme

     if(tamanho <= 3){//Estrutura condicional para validar o nome do filme,a vari�vel TAMANHO n�o pode ser menor que 3
          printf("ATEN��O: ESTE FILME N�O EXISTE!\n");//printf usado para imprimir um alerta ao usu�rio
    }
     else{//
     	printf("FILME V�LIDO\n\n");//imprime uma mensagem na tela 
	 }
    }while(tamanho <= 3);//Enquanto a vari�vel TAMANHO menor igual a tr�s,o usu�rio dever� repetir os comando dentro da estrutura
    
    
    printf("DIGITE A QUANTIDADE DE PESSOAS QUE ASSISTIRAM AO FILME: ");//printf para imprimir uma mensagem ao usu�rio,quantidade de pessoas que assistiram ao filme
    fflush(stdin);//Limpeza do lixo de mem�ria
    scanf("%d",&quantidadeDePessoas);//leitura da quantidade de pessoas que assistiram ao filme 

    while(quantidadeDePessoas < 10){//Valida��o da uantidade de pessoas,tendo que ser maior que 10
        printf("ATEN��O: DIGITE UM N�MERO MAIOR OU IGUAL A 10!\n");//printf utilizado para imprimir um alerta na tela
        printf("DIGITE A QUANTIDADE DE PESSOAS QUE ASSISTIRAM AO FILME: ");//printf para imprimir uma mensagem na tela
        fflush(stdin);//Limpeza do lixo de mem�ria 
        scanf("%d",&quantidadeDePessoas);//leitura da quantidade de pessoas que assistiram ao filme
    }


    for(i = 0; i < quantidadeDePessoas; i++){//estrutura de repeti��o for,utilizado para executar nossos blocos de comando mais de uma vez
        fflush(stdin);//Limpeza do lixo de mem�ria
        
        
        
        printf("\nDIGITE O SEXO DA %d PESSOA (APENAS M OU F): ",i+1);//Requisi��o do sexo da pessoa
        fflush(stdin);//Limpeza do lixo de mem�ria
        scanf("%c", &sexo);//leitura do sexo da pessoa



        while(sexo !='M' && sexo !='F'){//Valida��o do sexo da pessoa
            printf("ATEN��O: DIGITE UM SEXO V�LIDO!");//printf utilizado para imprimir um alerta ao usu�rio
            printf("\nDIGITE O SEXO DA %d PESSOA (M/F): ",i+1);//Requisi��o do sexo da pessoa
            fflush(stdin);//Limpeza do lixo de mem�ria
            scanf("%c",&sexo);//leitura do sexo da pessoa
        }
        
        
    
        printf("DIGITE A IDADE DA %d PESSOA: ",i+1);//Requisi��o da idade
        fflush(stdin);//Limpeza do lixo de mem�ria
        scanf(" %d", &idade);//Leitura da idade da pessoa
        
        
        
        while(idade < 3 || idade > 100){//Valida��o da idade,enquanto idade menor que 3 Ou maior que 100 executar os comandos
            printf("ATEN��O: IDADE INV�LIDA!\n");//printf utilizado para imprimir um alerta ao usu�rio
            fflush(stdin);//limpeza do lixo de mem�ria
            printf("DIGITE A IDADE DA %d PESSOA: ",i+1);
			scanf("%d", &idade);//leitura da idade do usu�rio
        }
        
        
        
        if(sexo == 'F'){//Estrutura condicional para contabilizar pessoas do sexo feminino e masculino
            somaSexoFeminino = somaSexoFeminino + 1;// a vari�vel somaSexoFeminino recebe somaSexoFeminino mais um
        }
        else if(sexo == 'M'){//Estrutura condicional,n�o se sexo igual a M executar os comandos abaixo
            somaSexoMasculino = somaSexoMasculino + 1;// a vari�vel somaSexoMasculino recebe somaSexoMasculino mais um
        }
        
        
        
        if(idade <= 13){//Estrutura condicional,se idade menor que 13,executar os comandos
            somaIdadeCriancas = somaIdadeCriancas + 1;//somaIdadeCriancas recebe somaIdadeCriancas mais um
        }
         else if(idade <= 17){//Estrutura condicional,se idade menor que 17,executar os comandos
            somaIdadeAdolescentes = somaIdadeAdolescentes + 1;//somaIdadeAdolescentes recebe somaIdadeAdolescentes mais um
        }
        else if(idade <= 64){//Estrutura condicional,se idade menor que 64,executar os comandos
            somaIdadeAdultos = somaIdadeAdultos + 1;//somaIdadeAdultos recebe somaIdadeAdultos mais um
        }
        else if(idade <= 100){//Estrutura condicional,se idade menor que 100,executar os comandos
            somaIdadeIdosos = somaIdadeIdosos + 1;//somaIdadeIdosos recebe somaIdadeIdosos mais um 
        }
        
        
        
        if(sexo == 'F' && idade >= 18){//Estrutura condicional,se sexo igual a F e idade maior igual a 18 execute os comandos
            publicoFemininoPresente += 1;//Vari�vel do publicoFemininoPresente recebe ele mesmo mais um
        }
        else if(sexo == 'M' && idade >= 18){//Estrutura condicional,se sexo igual a M e idade maior igual a 18 execute os comandos
            publicoMasculinoPresente += 1;//Vari�vel do publicoMasculinoPresente recebe ele mesmo mais um
        }
        
    }
    
    system("cls");//A fun��o system("cls") vai limpar a tela se o usu�rio decidir executar o programa novamente
    fflush(stdin);//limpar lixo de mem�ria
    
    
    printf("NOME DO FILME %s\n", nomeDoFilme);//printf vai imprimir nome do filme
    printf("QUANTIDADE DE MULHERES QUE ASSISTIRAM AO FILME: %d\n",somaSexoFeminino);//printf vai imprimir o resultado da vari�vel somaSexoFeminino
    printf("QUANTIDADE DE HOMENS QUE ASSISTIRAM AO FILME: %d\n\n\n",somaSexoMasculino);//printf vai imprimir o valor da vari�vel somaSexoMasculino


    printf("QUANTIDADE DE PESSOAS DE ACORDO COM A CLASSIFICA��O DE IDADE:\n\n");//printf vai imprimir mensagem para o usu�rio
    printf("QUANTIDADE DE CRIAN�AS: %d\n",somaIdadeCriancas);//printf vai imprimir valor da vari�vel somaIdadeCriancas
    printf("QUANTIDADE DE ADOLESCENTES: %d\n",somaIdadeAdolescentes);//printf vai imprimir valor da vari�vel somaIdadeAdolescentes
    printf("QUANTIDADE DE ADULTOS: %d\n",somaIdadeAdultos);//printf vai imprimir valor da vari�vel somaIdadeAdultos
    printf("QUANTIDADE DE IDOSOS: %d\n\n",somaIdadeIdosos);//printf vai imprimir valor da vari�vel somaIdadeIdosos

    
    printf("DESEJA VER A QUANTIDADE DE PESSOAS MAIORES DE 18 ANOS?(S/N): ");//printf vai imprimir uma mensagem para o usu�rio
    scanf("%c",&escolhaDoUsuario);//leitura da vari�vel escolhaDoUsuario
      
      
	system("cls");//A fun��o system("cls") vai limpar a tela se o usu�rio decidir executar o programa novamente


    switch(escolhaDoUsuario){//Estrutura switch/Case usado para comparar nossa vari�vel escolhaDoUsuario com um dos casos abaixo
    
    	case 'S'://Caso o valor da vari�vel escolhaDoUsuario for S ele vai executar os comandos abaixo
    		 printf("QUANTIDADE DE PESSOAS MAIORES DE 18 ANOS SEPARADO POR SEXO E QUE ESTAVAM PRESENTE NA SE��O:\n\n");
			 printf("P�BLICO FEMININO PRESENTE COM MAIS DE 18 ANOS: %d\n",publicoFemininoPresente);//O printf vai imprimir o valor da vari�vel publicoFemininoPresente
             printf("P�BLICO MASCULINO PRESENTE COM MAIS DE 18 ANOS: %d\n",publicoMasculinoPresente);//O printf vai imprimir o valor da vari�vel publicoMasculinoPresente
        break;//Vai parar a execu��o dos comandos subsequente
        
        
        case 'N'://Caso o valor da vari�vel escolhaDoUsuario for N ele vai executar os comandos abaixo
		     printf("A INFORMA��O SOBRE A QUANTIDADE DE PESSOAS MAIORES DE 18 ANOS FOI OMITIDA\n");//o printf vai imprimir uma mensagem na tela do usu�rio
		break;//Vai parar a execu��o dos comandos subsequente
		
		
    	default://Caso o valor da vari�vel scolhaDoUsuario n�o tenha nenhuma correspond�ncia com os casos acima
			printf("VALOR INV�LIDO");//O printf vai imprimir uma mensagem na tela
		break;//Vai parar a execu��o dos comandos subsequente
		
	}
	

	printf("\nDESEJA REPETIR O PROGRAMA NOVAMENTE(S/N)?");//printf vai imprimir uma mensagem para o usu�rio
	fflush(stdin);//Limpeza do lixo de mem�ria
	scanf("%c",&repeticaoDoPrograma);//Leitura da vari�vel repeticaoDoPrograma
	
}while(repeticaoDoPrograma == 'S' );// Nova funcionalidade :Nosso programa foi colocado dentro de um do/while,fazendo com que possamos executar o programa novamente
	
    return 0;//Vai finalizar nosso programa
}

