//Nome: Marcos Alexandre de Andrade Junior Matrícula: UC21103326 Curso: Engenharia de Softtware

//Biblioteca para entrada de dados;
#include<stdio.h>

//Biblioteca para usar o comando system("cls");
#include <stdlib.h>

//Bibliotecas para usar acentuação na lingua portuguesa;
#include <locale.h>

//função para manipular strings
#include <string.h>

int main(){
	//função para acentuação na lingua portuquesa
    setlocale(LC_ALL, "Portuguese");

    //Espaçamnto/código limpo (Página 91)
    //Declaração de variáveis do tipo inteiro/código limpo/Use nomes que revelem seu propósito(PÁGINA 27);
    //Use nomes pronunciáveis(PÁGINA 30);
    int quantidadeDeSecoesRealizadas = 0, quantidadeDePessoas = 0, i = 0, somaSexoFeminino = 0,somaSexoMasculino = 0,somaIdadeCriancas = 0, somaIdadeAdolescentes = 0, somaIdadeAdultos = 0,somaIdadeIdosos = 0, publicoFemininoPresente = 0, publicoMasculinoPresente = 0, idade = 0;


    //declaração de variáveis do tipo caractere/texto/um único caractere
    //Use nomes pronunciáveis(PÁGINA 30);
    char nomeDoFilme[100], sexo,escolhaDoUsuario,repeticaoDoPrograma;


    size_t tamanho;//size_t é um tipo inteiro não assinado de pelo menos 16 bits
	               

do{ //Nova funcionalidade: Nosso programa foi colocado dentro de um do/while,fazendo com que possamos executar o programa novamente
   
   
    system("cls");//A função system("cls") vai limpar a tela se o usuário decidir executar o programa novamente
    
    
    printf("\nSEJA BEM-VINDO AO SOFTWARE CINEMA BRASÍLIA\n\n");//Mensagem de apresentação do software


    printf("DIGITE A QUANTIDADE DE SEÇÕES QUE SERÃO REALIZADAS HOJE: ");//  Quantidade de seções que serão realizadas
    scanf("%d",&quantidadeDeSecoesRealizadas);//Leitura da quantidade de seções realizadas
    
	while(quantidadeDeSecoesRealizadas != 2){  //  Validação da quantidade de seções realizadas,não podendo ser diferente de 2
	    printf("ATENÇÃO: VOCÊ DEVE CADASTRAR DUAS SEÇÕES!\n\n");//printf usado para imprimir um alerta ao usuário
        printf("DIGITE A QUANTIDADE DE SEÇÕES QUE SERÃO REALIZADAS HOJE: ");// Quantidade de seções que serão realizadas
        scanf("%d",&quantidadeDeSecoesRealizadas);//Leitura da quantidade de seções realizadas
	}

    do{//estrutura de repetição utilizada para definir o nome do filme e validação do mesmo 
     printf("\nDIGITE O NOME DO FILME: ");//printf utilizado para imprimir uma mensagem ao usuário
     fflush(stdin);//Usamos o fflush(stdin) para limpar o lixo de memória
     fgets(nomeDoFilme, 99, stdin);//usamos o fgets(nomeDoFilme, 99, stdin) para ler o nome do filme
     tamanho = strlen(nomeDoFilme);// a variável TAMANHO recebe tamanho da string nomeDoFilme

     if(tamanho <= 3){//Estrutura condicional para validar o nome do filme,a variável TAMANHO não pode ser menor que 3
          printf("ATENÇÃO: ESTE FILME NÃO EXISTE!\n");//printf usado para imprimir um alerta ao usuário
    }
     else{//
     	printf("FILME VÁLIDO\n\n");//imprime uma mensagem na tela 
	 }
    }while(tamanho <= 3);//Enquanto a variável TAMANHO menor igual a três,o usuário deverá repetir os comando dentro da estrutura
    
    
    printf("DIGITE A QUANTIDADE DE PESSOAS QUE ASSISTIRAM AO FILME: ");//printf para imprimir uma mensagem ao usuário,quantidade de pessoas que assistiram ao filme
    fflush(stdin);//Limpeza do lixo de memória
    scanf("%d",&quantidadeDePessoas);//leitura da quantidade de pessoas que assistiram ao filme 

    while(quantidadeDePessoas < 10){//Validação da uantidade de pessoas,tendo que ser maior que 10
        printf("ATENÇÃO: DIGITE UM NÚMERO MAIOR OU IGUAL A 10!\n");//printf utilizado para imprimir um alerta na tela
        printf("DIGITE A QUANTIDADE DE PESSOAS QUE ASSISTIRAM AO FILME: ");//printf para imprimir uma mensagem na tela
        fflush(stdin);//Limpeza do lixo de memória 
        scanf("%d",&quantidadeDePessoas);//leitura da quantidade de pessoas que assistiram ao filme
    }


    for(i = 0; i < quantidadeDePessoas; i++){//estrutura de repetição for,utilizado para executar nossos blocos de comando mais de uma vez
        fflush(stdin);//Limpeza do lixo de memória
        
        
        
        printf("\nDIGITE O SEXO DA %d PESSOA (APENAS M OU F): ",i+1);//Requisição do sexo da pessoa
        fflush(stdin);//Limpeza do lixo de memória
        scanf("%c", &sexo);//leitura do sexo da pessoa



        while(sexo !='M' && sexo !='F'){//Validação do sexo da pessoa
            printf("ATENÇÃO: DIGITE UM SEXO VÁLIDO!");//printf utilizado para imprimir um alerta ao usuário
            printf("\nDIGITE O SEXO DA %d PESSOA (M/F): ",i+1);//Requisição do sexo da pessoa
            fflush(stdin);//Limpeza do lixo de memória
            scanf("%c",&sexo);//leitura do sexo da pessoa
        }
        
        
    
        printf("DIGITE A IDADE DA %d PESSOA: ",i+1);//Requisição da idade
        fflush(stdin);//Limpeza do lixo de memória
        scanf(" %d", &idade);//Leitura da idade da pessoa
        
        
        
        while(idade < 3 || idade > 100){//Validação da idade,enquanto idade menor que 3 Ou maior que 100 executar os comandos
            printf("ATENÇÃO: IDADE INVÁLIDA!\n");//printf utilizado para imprimir um alerta ao usuário
            fflush(stdin);//limpeza do lixo de memória
            printf("DIGITE A IDADE DA %d PESSOA: ",i+1);
			scanf("%d", &idade);//leitura da idade do usuário
        }
        
        
        
        if(sexo == 'F'){//Estrutura condicional para contabilizar pessoas do sexo feminino e masculino
            somaSexoFeminino = somaSexoFeminino + 1;// a variável somaSexoFeminino recebe somaSexoFeminino mais um
        }
        else if(sexo == 'M'){//Estrutura condicional,não se sexo igual a M executar os comandos abaixo
            somaSexoMasculino = somaSexoMasculino + 1;// a variável somaSexoMasculino recebe somaSexoMasculino mais um
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
            publicoFemininoPresente += 1;//Variável do publicoFemininoPresente recebe ele mesmo mais um
        }
        else if(sexo == 'M' && idade >= 18){//Estrutura condicional,se sexo igual a M e idade maior igual a 18 execute os comandos
            publicoMasculinoPresente += 1;//Variável do publicoMasculinoPresente recebe ele mesmo mais um
        }
        
    }
    
    system("cls");//A função system("cls") vai limpar a tela se o usuário decidir executar o programa novamente
    fflush(stdin);//limpar lixo de memória
    
    
    printf("NOME DO FILME %s\n", nomeDoFilme);//printf vai imprimir nome do filme
    printf("QUANTIDADE DE MULHERES QUE ASSISTIRAM AO FILME: %d\n",somaSexoFeminino);//printf vai imprimir o resultado da variável somaSexoFeminino
    printf("QUANTIDADE DE HOMENS QUE ASSISTIRAM AO FILME: %d\n\n\n",somaSexoMasculino);//printf vai imprimir o valor da variável somaSexoMasculino


    printf("QUANTIDADE DE PESSOAS DE ACORDO COM A CLASSIFICAÇÃO DE IDADE:\n\n");//printf vai imprimir mensagem para o usuário
    printf("QUANTIDADE DE CRIANÇAS: %d\n",somaIdadeCriancas);//printf vai imprimir valor da variável somaIdadeCriancas
    printf("QUANTIDADE DE ADOLESCENTES: %d\n",somaIdadeAdolescentes);//printf vai imprimir valor da variável somaIdadeAdolescentes
    printf("QUANTIDADE DE ADULTOS: %d\n",somaIdadeAdultos);//printf vai imprimir valor da variável somaIdadeAdultos
    printf("QUANTIDADE DE IDOSOS: %d\n\n",somaIdadeIdosos);//printf vai imprimir valor da variável somaIdadeIdosos

    
    printf("DESEJA VER A QUANTIDADE DE PESSOAS MAIORES DE 18 ANOS?(S/N): ");//printf vai imprimir uma mensagem para o usuário
    scanf("%c",&escolhaDoUsuario);//leitura da variável escolhaDoUsuario
      
      
	system("cls");//A função system("cls") vai limpar a tela se o usuário decidir executar o programa novamente


    switch(escolhaDoUsuario){//Estrutura switch/Case usado para comparar nossa variável escolhaDoUsuario com um dos casos abaixo
    
    	case 'S'://Caso o valor da variável escolhaDoUsuario for S ele vai executar os comandos abaixo
    		 printf("QUANTIDADE DE PESSOAS MAIORES DE 18 ANOS SEPARADO POR SEXO E QUE ESTAVAM PRESENTE NA SEÇÃO:\n\n");
			 printf("PÚBLICO FEMININO PRESENTE COM MAIS DE 18 ANOS: %d\n",publicoFemininoPresente);//O printf vai imprimir o valor da variável publicoFemininoPresente
             printf("PÚBLICO MASCULINO PRESENTE COM MAIS DE 18 ANOS: %d\n",publicoMasculinoPresente);//O printf vai imprimir o valor da variável publicoMasculinoPresente
        break;//Vai parar a execução dos comandos subsequente
        
        
        case 'N'://Caso o valor da variável escolhaDoUsuario for N ele vai executar os comandos abaixo
		     printf("A INFORMAÇÃO SOBRE A QUANTIDADE DE PESSOAS MAIORES DE 18 ANOS FOI OMITIDA\n");//o printf vai imprimir uma mensagem na tela do usuário
		break;//Vai parar a execução dos comandos subsequente
		
		
    	default://Caso o valor da variável scolhaDoUsuario não tenha nenhuma correspondência com os casos acima
			printf("VALOR INVÁLIDO");//O printf vai imprimir uma mensagem na tela
		break;//Vai parar a execução dos comandos subsequente
		
	}
	

	printf("\nDESEJA REPETIR O PROGRAMA NOVAMENTE(S/N)?");//printf vai imprimir uma mensagem para o usuário
	fflush(stdin);//Limpeza do lixo de memória
	scanf("%c",&repeticaoDoPrograma);//Leitura da variável repeticaoDoPrograma
	
}while(repeticaoDoPrograma == 'S' );// Nova funcionalidade :Nosso programa foi colocado dentro de um do/while,fazendo com que possamos executar o programa novamente
	
    return 0;//Vai finalizar nosso programa
}

