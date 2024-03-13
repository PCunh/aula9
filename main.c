#include <stdio.h>

int main(void) {
  int opcao;
  do{
    printf("Menu principal\n");
    printf("1 - Cadastrar contato\n");
    printf("2 - listar contatos\n");
    printf("3 - deletar comtato\n");
    printf("4 - editar contatos\n");
    printf("5 - salvar lista de contatos\n");
    printf("0 - sair\n");
    printf("opcao: ");
    scanf("%d", &opcao);
  }
}
