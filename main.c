#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <windows.h>
#include <conio.h>

#define altura 26
#define largura 105

char cenario[altura][largura], jogador[10][50];
int pontos, fimX, fimY, pontuacao[11];

void criarCen(int nivel)
{
	switch (nivel)
	{
	case 0:
		system("color 1F");
		strcpy(cenario[0], "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[1], "|.......||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[2], "|||||||..........................................|||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[3], "|||||||.||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[4], "|||||||.||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[5], "|||||||.||||||||||.............................|....................................................");
		strcpy(cenario[6], "|||||||..........|.|||||||||||||||||||||||||||||.|||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[7], "||......||||||||||.................|.............|||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[8], "||.|||||||||||||||.||||||||||||||||||||.||||||||.|||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[9], "||.............................................|.|||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[10], "||.|||||||||||||||||||||||||||||||||||||||||||||.|||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[11], "||.|||||||||||||||||||||||||||||||||||||||||||||.|||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[12], "||...............................................|||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[13], "||.|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[14], "||.|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[15], "||.|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[16], "||.|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[17], "||.|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[18], "||.|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[19], "||.|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[20], "||.|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[21], "||.|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[22], "||.|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[23], "||.|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[24], "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		break;
	case 1:
		system("color 20");
		strcpy(cenario[0], "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[1], "|..................................................................................................|");
		strcpy(cenario[2], "|.||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||.|||||||||||||||||||||||||||");
		strcpy(cenario[3], "|.||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||.|||||||||||||||||||||||||||");
		strcpy(cenario[4], "|.||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||.|||||||||||||||||||||||||||");
		strcpy(cenario[5], "|.||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||.|||||||||||||||||||||||||||");
		strcpy(cenario[6], "|.||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||.|||||||||||||||||||||||||||");
		strcpy(cenario[7], "|.||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||.|||||||||||||||||||||||||||");
		strcpy(cenario[8], "|........................||..................................|||||||||||.|||||||||||||||||||||||||||");
		strcpy(cenario[9], "|.|||||||||||||||.||||||.|||||||||.||||||||||||||.||||||||||.|||||||||||.||||......................|");
		strcpy(cenario[10], "|...........|||||.||||||.|||||||||.|||||...................|.................|||||||||||||||||||||.|");
		strcpy(cenario[11], "|.||||.||||||.....||||||.||||||||||.||||.|||||||||||||||||.|.|||||||||||||||||||||||||||||||||||||.|");
		strcpy(cenario[12], "|.||||.|||||||||||||||||.||..............|||||||||||||||||.|.|||||||||||||||.....................|.|");
		strcpy(cenario[13], "|.||||...................||.|||||||.||||.|||||||||||||||||.|.|||||||||||||||.|.|||||||.|||||||||.|.|");
		strcpy(cenario[14], "|.||||||||||||.||||||||||.|.|||||||.||||...................|.|||||||||||||||.|........|..........|.|");
		strcpy(cenario[15], "|..................||.......|||||||.|||||||||||.|.||||||||||.|||||||||||||...|||||||||.||||.||||||.|");
		strcpy(cenario[16], "|.||||||||||||.|||.||.|||||...|||||.|||||||||||.||...........|||||||||||||.||......................|");
		strcpy(cenario[17], "|.||||||||||||.|||.||.|||||.||.||||.|||||||||||.||||||||||||||||||||||||||.||||||||||||.||||||||||||");
		strcpy(cenario[18], "|.||||||||||||.||..||.|||||.||.||||.|||||||||||.||||||||||||||||||||||||||.||||||||||||.||||||||||||");
		strcpy(cenario[19], "|..|||||||||||.||.|||.|||||.........|||||||||||............................||||||||||||.||||||||||||");
		strcpy(cenario[20], "||...........|.||.|||.|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||.||||||||||||");
		strcpy(cenario[21], "|.|||||||||||||||.|||..||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||.||||||||||||");
		strcpy(cenario[22], "|.....................|.............................................................................");
		strcpy(cenario[23], "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[24], "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		break;
	case 2:
		system("color 5F");
		strcpy(cenario[0], "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[1], "|...........................|||||||||||.......|||||||||||..........................................|");
		strcpy(cenario[2], "|.|||||||.||||||||||.|||||||............|||.|||||||||||||.||||||||||||.|||||||||||||||||.|||||||||||");
		strcpy(cenario[3], "|.....|||............|||||||||||||||||||||..............................................||||||||||||");
		strcpy(cenario[4], "|.|||.|||||||||.||||||||||||||||||||||||||.||||||||||||||||||||||||||||||||||||.||||||||||||||||||||");
		strcpy(cenario[5], "|.|||.........|.............................||||||||||||||||||||||||||||||||||||.|||||||||||||||||||");
		strcpy(cenario[6], "|.|||||||||||...||||||||||||||||||||||||||||........................................................");
		strcpy(cenario[7], "|....................||||||||||||||||||||||||||||||||||||||||||||||.||||||||||||||||||||||||.|||||.|");
		strcpy(cenario[8], "|.||||||||||||||||||.|..............................................||||||||||||||||||||||||.....|.|");
		strcpy(cenario[9], "|.|.......||||||||||.|.|||||||||||||||||.|||||.|||||||||||.|||||||||||||||||||||||||||||||||.|||.|.|");
		strcpy(cenario[10], "|.|||||||............|.|||||||||||||||||.|||||.|||||||||||.|||||||||||||||||||||||||||||||||.||.|.||");
		strcpy(cenario[11], "|.|||||||||||||||.|||||..................|||||.....|||||||||.......................................|");
		strcpy(cenario[12], "|.|||||||||||||||.||||||||||||||||||||||.|||||||||.||||||||..|||||||||||.|||||||||||||||.||.||.|||||");
		strcpy(cenario[13], "|.|||||||||||||||.||||||||||||||||||||||.|||||||||.||||||||.||||.........|||||||||||||||.|||.|||||||");
		strcpy(cenario[14], "|.......................................|.................|.....||||||||.................|||.|||||||");
		strcpy(cenario[15], "|.||||.|||.||||||||||||||||||||||||||||.|||||||||||||||||||.||||||||||||||||||.|||||||||||||.|||||||");
		strcpy(cenario[16], "|.||||.||..|||||||||||||||||||||||||||.||...................||||||||||||||||||||......||||||.|||||||");
		strcpy(cenario[17], "|.||||....|||........................||...|||||||.||||||||||||||||||||||||.........||.||||||.|||||||");
		strcpy(cenario[18], "|.||||.||||||.||.|||||||||||||||||||||..|||||||...||||||||||||||||||||||||.|||||||||||............||");
		strcpy(cenario[19], "|.||||........||.||||..................|||||...............................||||||||||||||||||||||.||");
		strcpy(cenario[20], "|.....||||||||||.||||.||||||||||||||||||||||.||||||||||||||||||||||||||||||||||||||||||||||||||||.||");
		strcpy(cenario[21], "|.|||.||||||||||.||||.............................................................................||");
		strcpy(cenario[22], "|.....................||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[23], "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[24], "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		break;
	case 3:
		system("color C0");
		strcpy(cenario[0], "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[1], "|..................................................................................................|");
		strcpy(cenario[2], "|||||||||||||||||||.||||||.||||||||||||||||||||||||.|||||||||||||||||.|||||||||||||.||||||||||||.|||");
		strcpy(cenario[3], "|...................|||..|......................................|||||.||||||||||||||.|||||||||||.|||");
		strcpy(cenario[4], "|.|.|.||.||||||||||.||..||.||||.||.|||||.||||||.|||.|.|.|||||||..||||............................|||");
		strcpy(cenario[5], "|....|............|....|||.||||...||||||.|||||.||||.|.|.|...||||.||||||||||||||||||.||||||||||||||||");
		strcpy(cenario[6], "|..|.||..||||||||||.|||||||.|||||..|||||.||||.|||||.|.|.|.|.|||||.||||.............................|");
		strcpy(cenario[7], "|.|||.............|.................................|.|.|.|.|||........||||||||.|||||||.||||||||||.|");
		strcpy(cenario[8], "|.||||.||||||||.|||.||.||||.|||||||||||||||||||||||.|.|.|.|.|||.||||||.||||||||...||||.|.......||.||");
		strcpy(cenario[9], "|.||||.||||||...|||.||||.|.||||||||||||||||||||||||.|.|.|.|.....||||...||||||||.|.||||.|.|.||.|.....");
		strcpy(cenario[10], "|.||||......|.|||||.||............................|.|.|.|.|||||.|....||||||||||.|...||.|.|.||.|||..|");
		strcpy(cenario[11], "|.||||.|||||..|||||..|.||||.||||||||||||.||||.|||.|.|.|...|||||.||||.||||||..||.|.|..|.|.|.||.||.|.|");
		strcpy(cenario[12], "||.|||||||||.||||||.||.|....|||||||..........||||.||.||||||||||.||||||......|...|..|.....|.||.||.|.|");
		strcpy(cenario[13], "||..................|.|..||.|||||||.||||.|||.||||.||............||||||.||||||.|.||||||.|||.||.||.|.|");
		strcpy(cenario[14], "||.|||||||||.||||||.|.|.||..|||||||.||||..........||.|||||.|||||...|||.|||||..|........|.|.||.||.|.|");
		strcpy(cenario[15], "||.|||||||||......|.|.|...|.|||||||.||||||||||||||||.|||||.|||.|||.|||.|||||.||.||||||.....||.||.|.|");
		strcpy(cenario[16], "||.|||||||||.||||.|.|.|.||..|||||||..................|||||.|||.|||.|||.|||||.||.......|.||||.|.|.|.|");
		strcpy(cenario[17], "||.........|.||||.|.|.|.|.|.||||||||||||||||||||||||||||||.|||...........|||.||.|||||||.||||.|||...|");
		strcpy(cenario[18], "||.|.||.||||.||||.|.|.|.|.|................................|||.||||.||||||||..||.................|.|");
		strcpy(cenario[19], "||.|..|.||||.||||.|.|.|.|.|.||||.||||||.|||||||||||||||||.||||.||||.........|....||||||.|||||.|||.||");
		strcpy(cenario[20], "||.||.||.||||.||||||.|.|.|.|.|||.....||...................||||.||||.|||||||||.||||||||.|||||||....||");
		strcpy(cenario[21], "||.||.||.|||.|||||.||.|.|.|||||||||||||.||||||||||||||||||||||.||||.|||||||||||.||||||.||||||||||.||");
		strcpy(cenario[22], "|..........|......................................................................................||");
		strcpy(cenario[23], "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[24], "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		break;
	case 4:
		system("color D0");
		strcpy(cenario[0], "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[1], "|.........................|................................................................|.|.....|");
		strcpy(cenario[2], "|||.|||.|.|.||||.|||.||.|.|.|||||||||.|||||||||||||||||||||||.|||||||||||||||||||||||||||.|.|...||.|");
		strcpy(cenario[3], "...|..|.|.|||.||.||.||.||||.|.........||||||.........||||||||.||||||||||||||||||||||||||||..||||.|||");
		strcpy(cenario[4], "||.|.||.|...................|||||||||.||||||.|||||||.||||.|||.|....................................|");
		strcpy(cenario[5], "||.|.||..||||||||.||||||||||||||||||.|||||||.|||||||.||||.||.||.|||||||||||||||.|.|.|.|..|.|.|||||.|");
		strcpy(cenario[6], "||.|..|..........||||||||....................|||||||.||||.||.||.|...............|.|...|.|.||.|.....|");
		strcpy(cenario[7], "||.|.|..||||||.|.||||||||.||||||||||||||||||||||||||........|.|.||..||.|||||.||.|..||.|....||.||||.|");
		strcpy(cenario[8], "||...|..||||||.|........|.||..||||||||||||||||||||||||.|||||.||.||.|.|.....|.||.||..|.||||........||");
		strcpy(cenario[9], "|.|.|.|.||||||.|.||.|.|.|.|.|.|.................................||.|||.|||...||...|.|.....|.|||||.||");
		strcpy(cenario[10], "|.|.||||||.....|..........|.|.|.||.||.||||||||||.||||||||||||||||||||.|||||||||||.|.|||||.......|..|");
		strcpy(cenario[11], "|.|.||||||||.|||.||||||||||||.|..||.||.||||....|.|..............................|.|||||||||||||||.||");
		strcpy(cenario[12], "|.|.||||||||.|||.|.......||||.|.|...........||...|.||||||||||||||||||||||||||||.|.|||||||||||||||.||");
		strcpy(cenario[13], "|.|.|.||||||.|||.||.||||......|.||||||.|||||.|||||.||||||||||||||||||........||.|.|||||||||||||||.||");
		strcpy(cenario[14], "|.|.||.......|||.||.|..|.||||.|.||.||..|...........|.....||||.........|.|.||.||.|.|||||||||||||||.||");
		strcpy(cenario[15], "|.|.|||||.||||||.|.||.|.|||||.|.||..|.|.|||.|||||||..|||.||||.||||||.||..|.|.||.|.|||||||||||||||.||");
		strcpy(cenario[16], "|.|.|||||.||||||.|.||.|.||||||..||.||.|...|.|..........|..|||.||||||....|.|..||..||||||||||||||||.||");
		strcpy(cenario[17], "|.|.|||||.||||||................|.....|.|.|.|.|.|.||||.||.....|||||||||||.||.||.|||||||||||||||||.||");
		strcpy(cenario[18], "||..|||||.||||||||||||||||||||||.||||...|...|.||.|.|||..||||||||||||||||..........................||");
		strcpy(cenario[19], "|.|.||||||.|||||||||||||||||||||||||.||||||||.||.|.||||||||||.......||||||.||||.||||||||||||||||||||");
		strcpy(cenario[20], "|................................................|.||||||||||.|||||.||||||.||||.||||||||||||||||||||");
		strcpy(cenario[21], "||||||||||||||||||||||||||||||||||||||||||||||||||.||||||||||.|||.|||||||||||||.||||||||||||||||||||");
		strcpy(cenario[22], "||||||||||||||||||||||||||||||||||||||||||||||||||..............................||||||||||||||||||||");
		strcpy(cenario[23], "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		strcpy(cenario[24], "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||");
		break;
	}
}

void exibirCen(int x, int y)
{
	system("cls");
	int i, j;

	for (i = 0; i < altura; i++)
	{
		for (j = 0; j < largura; j++)
		{
			if (i == y && j == x)
			{
				printf("O");
			}
			else if (cenario[i][j] == '.')
			{
				printf(" ");
			}
			else
			{
				printf("%c", cenario[i][j]);
			}
		}
		printf("\n");
	}
}

void andar(int *x, int *y)
{
	char move;
	int auxX = *x, auxY = *y;
	while (1)
	{
		move = getch();
		switch (move)
		{
		case 'q':
		case 'Q':
		{
			while (1)
			{
				char resp;

				gotoxy(0, altura + 2);
				printf("Voc� tem certeza que deseja sair? Voc� perder� seu progresso. (s/n)\n");

				ocultarCursor(1);

				scanf(" %c", &resp);
				if (resp == 's' || resp == 'S')
				{
					printf("\nQue pena, voc� desistiu do jogo!\n");
					exit(0);
				}
				else if (resp != 'n' && resp != 'N')
				{
					printf("N�o entendi :O\n");
					continue;
				}

				gotoxy(0, altura + 2);
				printf("                                                                    \n   ");
				ocultarCursor(0);
				break;
			}
		}
		break;
		case 'w':
		case 'W':
			if (auxY > 0 && cenario[auxY - 1][auxX] != '|')
			{
				auxY--;
				show();
			}
			break;
		case 's':
		case 'S':
			if (auxY < altura - 1 && cenario[auxY + 1][auxX] != '|')
			{
				auxY++;
				show();
			}
			break;
		case 'a':
		case 'A':
			if (auxX > 0 && cenario[auxY][auxX - 1] != '|')
			{
				auxX--;
				show();
			}
			break;
		case 'd':
		case 'D':
			if (auxX < largura - 1 && cenario[auxY][auxX + 1] != '|')
			{
				auxX++;
				show();
			}
			break;
		default:
			break;
		}

		if (auxX >= 0 && auxX < largura && auxY >= 0 && auxY < altura && cenario[auxY][auxX] != '|')
		{
			gotoxy(*x, *y);
			printf(" ");

			gotoxy(auxX, auxY);
			*x = auxX;
			*y = auxY;
			printf("O");
		}

		if (auxX == fimX && auxY == fimY)
		{
			gotoxy(0, altura - 1);
			char continuar;
			gotoxy(0, 30);
			printf("Voc� alcan�ou o fim do n�evel!\nDeseja continuar? (s/qualquer tecla para sair):");
			scanf(" %c", &continuar);
			if (continuar == 's' || continuar == 'S')
			{
				break;
			}
			else
			{
				exit(0);
			}
		}
	}
}

void show()
{
	pontos--;
	gotoxy(11, altura);
	printf("%i ", pontos);
}

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void salvarPontos(char nome[50])
{
	int i, j, k, aux[10];
	for (i = 0; i < 10; i++)
	{
		aux[i] = pontuacao[i];
	}

	for (i = 0; i < 10; i++)
	{
		if (pontos > pontuacao[i])
		{
			pontuacao[i] = pontos;
			strcat(jogador[i], nome);
			j = i + 1;
			if (j < 10)
			{
				for (k = j; k < 10; k++)
				{
					pontuacao[k + 1] = aux[k];
				}
				break;
			}
		}
	}

	system("cls");
	printf("Ranking final\n");
	for (i = 0; i < 10; i++)
	{
		printf("%s ..... %i\n", jogador[i], pontuacao[i]);
	}
	char encerrar;
enc:
	printf("Deseja jogar novamente? (s/n): ");
	scanf(" %c", encerrar);
	if (encerrar == 's' || encerrar == 'S')
	{
		main();
	}
	else if (encerrar != 'n' || encerrar != 'N')
	{
		printf("N�o entendi");
		goto enc;
	}
	else
	{
		exit(0);
	}
}

void jogar(int nivel, char nome[50])
{
	int x, y;

	switch (nivel)
	{
	case 0:
		x = 1;
		y = 1;
		fimX = 99;
		fimY = 5;
		break;
	case 1:
		x = 1;
		y = 1;
		fimX = 99;
		fimY = 22;
		break;
	case 2:
		x = 1;
		y = 1;
		fimX = 99;
		fimY = 6;
		break;
	case 3:
		x = 1;
		y = 1;
		fimX = 99;
		fimY = 9;
		break;
	case 4:
		x = 1;
		y = 1;
		fimX = 0;
		fimY = 3;
		break;
	}

	criarCen(nivel);
	exibirCen(x, y);
	printf("Pontua��o: %d  | Jogador: %s | N�vel: %d\nPara mover, utilize o modo WASD(^<v>). Aperte q para sair.\n", pontos, nome, nivel + 1);
	andar(&x, &y);
}

void ocultarCursor(int check)
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursorInfo;

	GetConsoleCursorInfo(hConsole, &cursorInfo);
	
	if (check == 0)
		cursorInfo.bVisible = FALSE;
	else
		cursorInfo.bVisible = TRUE;
	
	SetConsoleCursorInfo(hConsole, &cursorInfo);
}

int main()
{
	setlocale(LC_ALL, "Portuguese");
	int nivel = 0;
	pontos = 5000;
	char nome[50];
	printf("Ol�, jogador(a)! Digite seu nickname: ");
	scanf("%s", nome);

	ocultarCursor(0);

	while (nivel < 5)
	{
		jogar(nivel, nome);
		nivel++;
	}
	salvarPontos(nome);
	return 0;
}
