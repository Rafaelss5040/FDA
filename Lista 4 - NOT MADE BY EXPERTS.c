#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void ex1 () {
	int a, b;
	float x, conta, raiz;
	printf("Digite o valor a ser dividido: ");
	scanf("%d", & x);
	printf("Digite dois valores a serem somados, dando espaco entre os valores: ");
	scanf("%d %d", & a, & b);
	while (a + b <= 0) {
		printf("Por favor, insira valores que sua soma de maior que zero:");
		scanf("%d %d", & a, & b);
	}
	conta = x / (a + b);
	raiz = sqrt(conta);
	printf("O resultado e: %f", raiz);
	return 0;
}

void ex2() {
	int num;
	float raiz;
	printf("Inforome um numero para calcular sua raiz:");
	scanf("%d", & num);
	while (num <= 0) {
		printf("Por favor, informar numeros maior que zero: ");
		scanf("%d", & num);
	}
	raiz = sqrt(num);
	printf("A raiz de %d e %.3f\n", num, raiz);
	return 0;
}

void ex3() {
	int ano;
	printf("Informe um ano para saber se ele e bissexto:");
	scanf("%d", & ano);
	if (ano % 4 == 0 || ano % 400 == 0) {
		printf("O ano %d e bissexto\n", ano);
	} else {
		printf("O ano %d nao e bissexto\n", ano);
	}
	return 0;
}

void ex4() {
	float sal, conta, rea;
	printf("Informe o salario a ser reajustado:");
	scanf("%f", & sal);
	if (sal >= 2000) {
		printf("O salario informado nao deve sofrer reajuste!\n");
	}
	conta = sal * (0.3);
	rea = conta + sal;
	printf("O salario reajustado sera de RS%.2f", rea);
	return 0;
}

void ex5() {
	int a, b, c;
	float s, area, conta;
	printf("Informe a medida do lado a do triangulo: ");
	scanf("%d", & a);
	while (a <= 0) {
		printf("Insira uma medida maior que 0: ");
		scanf("%d", & a);
	}
	printf("Informe a medida do lado b do triangulo: ");
	scanf("%d", & b);
	while (b <= 0) {
		printf("Insira uma medida maior que 0: ");
		scanf("%d", & b);
	}
	printf("Informe a medida do lado c do triangulo: ");
	scanf("%d", & c);
	while (c <= 0) {
		printf("Insira uma medida maior que 0: ");
		scanf("%d", & c);
	}
	s = (a + b + c) / 2;
	if (s >= a || b || c) {
		printf("A soma das duas menores medidas nao pode ser maior ou igual a terceira medida pois isso nao implica em um triangulo!");
		return 0;
	}
	area = sqrt((s - a) * (s - b) * (s - c) * s);
	printf("A area do triangulo e %f u.a.\n", area);
	return 0;
}

void ex6() {
	char opc;
	printf("Menu:\n1)Digite 1 para calcular o volume da esfera.\n2)Digite 2 para calcular o volume do paralelepipedo.\nOpcao: ");
	scanf("%c", & opc);
	if (opc == '1') {
		int r;
		float vol;
		printf("Opcao 1 selecionado. Calculo do volume da esfera.\n");
		printf("Digite o raio da esfera para saber o seu volume: ");
		scanf("%d", & r);
		vol = (pow(r, 3) * M_PI * 4) / 3;
		printf("O volume da sua esfera e de aproximadamente %.3f u.v.\n", vol);
		return 0;
	} else {
		if (opc == '2') {
			int b, b1, h, volp;
			printf("Opcao 2 selecionado. Calculo do volume do paralelepipedo.\n");
			printf("Informe as medidas da base e sua altura. Separe os numeros com espaco: ");
			scanf("%d""%d""%d", & b, & b1, & h);
			volp = b * b1 * h;
			printf("O volume do paralelepipedo e de %d u.v.\n", volp);
			return 0;
		}
	}
	printf("Opcao inexistente!\n");
	return 0;
}

void ex7() {
	float h;
	printf("Informe o H+: ");
	scanf("%f", & h);
	if (h <= 6 && h >= 0) {
		printf("O Ph da solucao e ACIDA!\n");
	} else {
		if (h == 7) {
			printf("O Ph da solucao e NEUTRA.\n");
		} else {
			if (h >= 8 && h <= 14)
				printf("O Ph da solucao e BASICA.\n");
		}
	}
	printf("Ph invalido!\n");
	return 0;
}

void ex8() {
	int hri, mini, hrf, minf, convi, convf, transi = 0, cmini, transf = 0, cminf, conta, tempoh, tempom, cor, tempohc, tempomc;
	printf("Informe a hora de inicio. De espao entre a hora e o minuto: "); ã
	scanf("%d %d", & hri, & mini);
	printf("Informe a hora de termino: ");
	scanf("%d %d", & hrf, & minf);
	if (hri > 12) {
		convi = hri - 12;
		transi = convi * 60;
	}
	if (hrf > 12) {
		convf = hrf - 12;
		transf = convf + minf;
	}
	transi = hri * 60;
	cmini = transi + mini;
	transf = hrf * 60;
	cminf = transf + minf;
	conta = cminf - cmini;
	if (conta <= 0) {
		cor = conta + 1440; // correção para caso o jogo dure mais que 24hr
		tempohc = cor / 60;
		tempomc = cor % 60;
		printf("Duracao do jogo: %d:%.2d horas\n", tempohc, tempomc);
		return 0;
	}
	tempoh = conta / 60;
	tempom = conta % 60;
	printf("Duracao do jogo: %d:%.2d horas\n", tempoh, tempom);
	return 0;
}

void ex9() {
	char opc;
	printf("Menu:\nDigite uma das seguintes opcoes para selecionar o cargo:\n1)Escriturario\n2)Secretario\n3)Caixa\n4)Gerente\n5)Diretor\nOpcao: ");
	scanf("%s", & opc);
	if (opc == '1') {
		printf("Escrituario selecionado.\nDigite o salario atual: ");
		float sale, contae;
		scanf("%f", & sale);
		contae = sale * 0.5;
		printf("O cargo Escrituario possui salario de R$%.2f e tera um aumento de R$%.2f sendo o salario final de R$%.2f\n", sale, contae, contae + sale);
		return 0;
	} else {
		if (opc == '2') {
			printf("Secretario selecionado.\nDigite o salario atual: ");
			float sals, contas;
			scanf("%f", & sals);
			contas = sals * 0.35;
			printf("O cargo Secretario possui salario de R$%.2f e tera um aumento de R$%.2f sendo o salario final de R$%.2f\n", sals, contas, contas + sals);
			return 0;
		} else {
			if (opc == '3') {
				printf("Caixa selecionado.\nDigite o salario atual: ");
				float salc, contac;
				scanf("%f", & salc);
				contac = salc * 0.2;
				printf("O cargo Caixa possui salario de R$%.2f e tera um aumento de R$%.2f sendo o salario final de R$%.2f\n", salc, contac, contac + salc);
				return 0;
			} else {
				if (opc == '4') {
					printf("Gerente selecionado.\nDigite o salario atual: ");
					float salg, contag;
					scanf("%f", & salg);
					contag = salg * 0.1;
					printf("O cargo Gerente possui salario de R$%.2f e tera um aumento de R$%.2f sendo o salario final de R$%.2f\n", salg, contag, contag + salg);
				} else {
					if (opc == '5') {
						printf("Diretor selecionado.\nInfelizmente o cargo selecionado nao possui aumento.");
						return 0;
					}
				}
			}
		}
	}

	printf("Opcao inexistente!");
	return 0;
}

void ex10() {
	float alt, peso;
	printf("Informe o seu peso: ");
	scanf("%f", & peso);
	printf("Informe a sua altura: ");
	scanf("%f", & alt);
	if (alt < 1.2) {
		if (peso <= 60) {
			printf("Sua classificacao e A");
		} else {
			if (peso <= 90) {
				printf("Sua classificacao e D");
			} else {
				if (peso > 91) {
					printf("Sua classificacao e G");
				}
			}
		}
	}
	if (alt < 1.7) {
		if (peso <= 60) {
			printf("Sua classificacao e B");
		} else {
			if (peso <= 90) {
				printf("Sua classificacao e E");
			} else {
				if (peso > 91) {
					printf("Sua classificacao e H");
				}
			}
		}
	}
	if (alt >= 1.7) {
		if (peso <= 60) {
			printf("Sua classificacao e C");
		} else {
			if (peso <= 90) {
				printf("Sua classificacao e F");
			} else {
				if (peso > 91) {
					printf("Sua classificacao e I");
				}
			}
		}
	}
	return 0;
}
