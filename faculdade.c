#include <stdio.h>

struct Faculdade{
	char nome_facul[20];
	int codigo_facul;
	
	struct estudante{
		char id[30];
		char nome_aluno[20];
		int matricula;
	}aluno;
};

int main(){
	struct Faculdade facul;
	
	
	printf("Digite o nome da faculdade: ");
	scanf("%s", &facul.nome_facul);
	printf("\nDigite o codigo da faculdade: ");
	scanf("%d", &facul.codigo_facul);
	
	printf("\nDigite o seu id: ");
	scanf("%s", &facul.aluno.id);
	printf("\nDigite o seu nome: ");
	scanf("%s", &facul.aluno.nome_aluno);
	printf("\nDigite seu rgm: ");
	scanf("%d", &facul.aluno.matricula);
	
	
	printf("\nFaculdade: %s", facul.nome_facul);
	printf("\nCodigo da faculdade: %d", facul.codigo_facul);
	printf("\nSeu id: %s",facul.aluno.id);
	printf("\nSeu nome: %s", facul.aluno.nome_aluno);
	printf("\nSeu RGM: %d", facul.aluno.matricula);
	
}
