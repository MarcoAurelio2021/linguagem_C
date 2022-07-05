/* Uma Subrotina é um bloco de instruções que realiza tarefa especificas
   Durante a execução são carregadas apenas uma vez e podem ser executas quantas vezes for necessário
   */

  float convertPeso(float quilos) {
    float gramas;
    gramas = quilos * 1000;
    return gramas;
  }

  int main() {
    float qui, gra;
    printf("Digite o peso em quilos:\n");
    scanf("%f", &qui);
    gra = convertPeso(qui);
    printf(" O peso e de %.1f gramas.\n", gra);
  }