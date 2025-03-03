#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h> 

#define largura 12
#define altura 12

#define nova_lar 20
#define nova_alt 20

#define nov_lar 40
#define nov_alt 40



int main(int argc, char *argv[]) {
    srand(time(NULL));
    int p_x = 2;
    int p_y = 1;
    int g_x = largura - 3;
    int g_y = altura - 2;
    int c_x = largura - 6;
    int c_y = altura - 2;
    int por_x = largura - 7;
    int por_y = altura - 12;
    int chave_p = 0;
    int p;
    int x;
    int i;
    int j;
    int move;
    int move_g;
    char mapa[largura][altura];

    system("cls");
    while (x != 3) {
    	printf("-----------------------------------\n");
        printf("|********ENTER THE DUNGEON********|\n");
        printf("-----------------------------------\n");
        printf("|                                 |\n");
        printf("|   1)START                       |\n");
        printf("|   2)TUTORIAL                    |\n");
        printf("|   3)SAIR                        |\n");
        printf("|                                 |\n");
        printf("-----------------------------------\n");

        scanf("%d", &x);
        if (x == 1) {
			
			printf("Os itens continuam no mesmo lugar pos coleta!\n");
			
            // Limpar tabuleiro
            for (i = 0; i < largura; i++) {
                for (j = 0; j < altura; j++) {
                    // Verifica se está na borda
                    if (i == 0 || i == largura - 1 || j == 0 || j == altura - 1) {
                        mapa[i][j] = '*'; // Se estiver na borda, coloca *
                    } else {
                        mapa[i][j] = ' '; // Caso contrário, deixa vazio
                    }
                }
            }

            // Posição inicial//
            mapa[p_y][p_x] = '&'; // jogador
            mapa[g_y][g_x] = 'X'; // Ini 1
            mapa[c_y][c_x] = 'C'; // Chave
            mapa[por_y][por_x] = 'D'; // Porta

            // Desenho
            for (i = 0; i < largura; i++) {
                for (j = 0; j < altura; j++) {
                    printf("%c", mapa[i][j]);
                }
                printf("\n");
            }

            // Lógica
            // Movimento jogador
            while (1) {
                move = getch();
                mapa[p_y][p_x] = ' ';
                switch (move) {
                    case 'a':
                        if (p_x > 1)
                            p_x--;
                        break;
                    case 'd':
                        if (p_x < largura - 2)
                            p_x++;
                        break;
                    case 'w':
                        if (p_y > 1)
                            p_y--;
                        break;
                    case 's':
                        if (p_y < altura - 2)
                            p_y++;
                        break;
                }
                // Atualiza a posição do jogador no mapa
                mapa[p_y][p_x] = '&';
				
				
                // Movimento inimigo (desativado)
                mapa[g_y][g_x] = ' ';
                move_g = rand() % 4;
                switch (move_g) {
                    case 0:
                        if (g_x > 1)
                            g_x--;
                        break;
                    case 1:
                        if (g_x < largura - 2)
                            g_x++;
                        break;
                    case 2:
                        if (g_y > 1)
                            g_y--;
                        break;
                    case 3:
                        if (g_y < altura - 2)
                            g_y++;
                        break;
                }
                
                // Atualiza a posição do inimigo no mapa
                mapa[g_y][g_x] = 'X'; // Desativar

                // Desenhar mapa
                system("cls");
                for (i = 0; i < largura; i++) {
                    for (j = 0; j < altura; j++) {
                        printf("%c", mapa[i][j]);
                    }
                    printf("\n");
                }
                
                if (p_x == c_x && p_y == c_y) {
                    chave_p = 1;
                    mapa[c_y][c_x] = ' ';
                    mapa[por_y][por_x] = '*';
                    por_y = altura - 11;
                    mapa[por_y][por_x] = '=';
                    printf("Chave encontrada\n");
                }

                // Verifica se o jogador alcançou o objetivo
                if (p_x == por_x && p_y == por_y) {
                    system("cls");
                    printf("Voce acabou por ir mais fundo na dungeon!\n");
                    break;
                }
                if(p_x == g_x && p_y == g_y){
        			system("cls");
        			printf ("Um inimigo surgiu das sombras e te matou...\n");
        			getch();
        			exit(0);
				} 
				
            }
            
            
			//NOVA DG
            int p_x2 = 4;
            int p_y2 = 2;
            int bo_x2 = 8;
            int bo_y2 = 8;
            int es_x2 = nova_lar - 11;
            int es_y2 = nova_alt - 19;
            int g_x2 = nova_lar - 19;
            int g_y2 = nova_alt - 2;
            int g_x3 = nova_lar - 10;
            int g_y3 = nova_alt - 8;
            int c_x2 = nova_lar - 6;
            int c_y2 = nova_alt - 2;
            int por_x2 = nova_lar - 11;
            int por_y2 = nova_alt - 20;
            int chave_p2 = 0;
            char map2[nova_lar][nova_alt];

        // DUNGEON 2
        printf("*********NOVA DUNGEON ENCONTRADA*********\n");
        move = getch();
        system("cls");

        // FORMAÇÃO
        for (i = 0; i < nova_lar; i++) {
            for (j = 0; j < nova_alt; j++) {
                if (i == 0 || i == nova_lar - 1 || j == 0 || j == nova_alt - 1) {
                    map2[i][j] = '*';
                } else {
                    map2[i][j] = ' ';
                }
            }
        }

        // Posição inicial//
            map2[p_y2][p_x2] = '&'; // jogador
            map2[g_y2][g_x2] = 'V'; // Ini 2
            map2[g_y3][g_x3] = 'X'; // Ini 1
            map2[c_y2][c_x2] = 'C'; // Chave
            map2[por_y2][por_x2] = 'D'; // Porta
            map2[bo_y2][bo_x2] = 'O'; // Botão
            map2[es_y2][es_x2] = '#'; // Espinho

        // Desenho
            for (i = 0; i < nova_lar; i++) {
                for (j = 0; j < nova_alt; j++) {
                    printf("%c", map2[i][j]);
                }
                printf("\n");
            }

        // Movimento jogador
            while (1) {
                move = getch();
                map2[p_y2][p_x2] = ' ';

                switch (move) {
                    case 'a':
                        if (p_x2 > 1)
                            p_x2--;
                        break;
                    case 'd':
                        if (p_x2 < nova_lar - 2)
                            p_x2++;
                        break;
                    case 'w':
                        if (p_y2 > 1)
                            p_y2--;
                        break;
                    case 's':
                        if (p_y2 < nova_alt - 2)
                            p_y2++;
                        break;
                }

        // Atualiza a posição do jogador no mapa
        map2[p_y2][p_x2] = '&';
            
            
        //MOVIMENTO INIMIGO // DESATIVAR 
		// Movimentação do inimigo V
            map2[g_y2][g_x2] = ' ';
            move_g = rand() % 2;
            if (move_g == 0) {
                if (p_x2 > g_x2 && g_x2 < nova_lar - 2) {
                    g_x2++;
                } else if (g_x2 > 1) {
                    g_x2--;
                }
            } else {
                if (p_y2 < g_y2 && g_y2 > 1) {
                    g_y2--;
                } else if (g_y2 < nova_alt - 2) {
                    g_y2++;
                }
            }
        	
        // Atualiza a posição do INIMIGO no mapa
		map2[g_y2][g_x2] = 'V';// DESATIVAR 
		
		// Movimentação do inimigo X	
		
		map2[g_y3][g_x3] = ' ';
        move_g = rand() % 4;
        switch (move_g) {
            case 0:
                if (g_x3 > 1)
                    g_x3--;
                break;
            case 1:
                if (g_x3 < nova_lar - 2)
                    g_x3++;
                break;
            case 2:
                if (g_y3 > 1)
                    g_y3--;
                break;
            case 3:
                if (g_y3 < nova_alt - 2)
                    g_y3++;
                break;
                }
                
        // Atualiza a posição do inimigo no mapa
        map2[g_y3][g_x3] = 'X';
        
        //Morte Inimigo
		if (p_x2 == g_x2 && p_y2 == g_y2) {
			system("cls");
            printf("Um inimigo surgiu das sombras e te matou... \n");
            break;
        }
			

            // Desenhar mapa
                system("cls");
                for (i = 0; i < nova_lar; i++) {
                    for (j = 0; j < nova_alt; j++) {
                        printf("%c", map2[i][j]);
                    }
                    printf("\n");
                }
		
		//Morte Inimigo
		if (p_x2 == g_x2 && p_y2 == g_y2) {
			system("cls");
            printf("Um inimigo surgiu das sombras e te matou... \n Talvez outros achem a saida...\n");
            break;
        }
		
        // Interações Espinho/Butão
            if (p_x2 == bo_x2 && p_y2 == bo_y2) {
            	map2[es_y2][es_x2] = ' ';
            	es_y2 = nova_alt - 20;
            	printf("Espinhos foram quebrados!\n");
        	} 
			if(p_x2 == es_x2 && p_y2 == es_y2){
        		system("cls");
        		printf ("Os espinhos eram venenosos\n voce morreu\n");
        		break;
			}
				
		//Chave e Porta
		if (p_x2 == c_x2 && p_y2 == c_y2) {
                map2[c_y2][c_x2] = ' ';
                map2[por_y2][por_x2] = '*';
                por_y2 = nova_alt - 19;
                map2[por_y2][por_x2] = '=';
                printf("Chave encontrada\n");
            }

        // Verifica se o jogador alcançou o objetivo
            if (p_x2 == por_x2 && p_y2 == por_y2) {
                system("cls");
                printf("Ao passar pela porta, voce sente um frio na espinha!\n");
                getch ();
                printf("Voce acabou por ir mais fundo na dungeon!\n");
                break;    
            }
        }
        
        //Nova DUNGEON 3
        
        int pa_x = 10;
        int pa_y = 1;
        int bot_x = 8;
        int bot_y = 8;
        int esp_x = -1;
        int esp_y = -1;
        int v_x = nov_lar - 9;
        int v_y = nov_alt - 18;
        int x_x = nov_lar - 35;
        int x_y = nov_alt - 2;
        int ch_x = nov_lar - 39;
        int ch_y = nov_alt - 2;
        int por_x3 = nov_lar - 10;
        int por_y3 = nov_alt - 40;
        int chave_p3 = 0;
        int tp1_x = 1;          
    	int tp1_y = nov_alt / 2;
    	int tp2_x = nov_lar - 2; 
    	int tp2_y = nov_alt / 2;
        char map3[nov_lar][nov_alt];
        
        //DUNGEON 3
        printf("*********NOVA DUNGEON ENCONTRADA*********\n");
            move = getch();
            system("cls");
            
            
        // FORMAÇÃO
        for (i = 0; i < nov_lar; i++) {
            for (j = 0; j < nov_alt; j++) {
                if (i == 0 || i == nov_lar - 1 || j == 0 || j == nov_alt - 1) {
                    map3[i][j] = '*';
                } else {
                    map3[i][j] = ' ';
                }
            }
        }
        
        //DIVIDIR O MAPA
        int meio = nov_lar / 2;
    	for (i = 0; i < nov_alt; i++) {
        	map3[i][meio] = '*';
    	}
    	
    	// Adicionar uma linha de espinhos horizontal no meio do mapa
    	int linha_espinhos = nov_alt - 31; 
    	for (i = 1; i < nov_lar - 20; i++) { 
        map3[linha_espinhos][i] = '#';
    	}
		
		// TELEPORT
    	map3[tp1_y][tp1_x] = '>';
    	map3[tp2_y][tp2_x] = '<';
		
		// Posição inicial//
        map3[pa_y][pa_x] = '&'; // jogador
        map3[v_y][v_x] = 'V'; // Ini 2
        map3[x_y][x_x] = 'X'; // Ini 1
        map3[ch_y][ch_x] = 'C'; // Chave
        map3[por_y3][por_x3] = 'D'; // Porta
        map3[bot_y][bot_x] = 'O'; // Botão
        map3[esp_y][esp_x] = '#'; // Espinho    
        
        // Desenho
        for (i = 0; i < nov_lar; i++) {
            for (j = 0; j < nov_alt; j++) {
                printf("%c", map3[i][j]);
            }
            printf("\n");
        }
        
        // Movimento jogador
        while (1) {
            move = getch();
            map3[pa_y][pa_x] = ' ';
            
            switch (move) {
        case 'a': // Movimento para a esquerda
            // Verifica se não está tentando atravessar a parede '*'
            if (pa_x > 1 && map3[pa_y][pa_x - 1] != '*') {
                pa_x--;
            }
            break;
        case 'd': // Movimento para a direita
            // Verifica se não está tentando atravessar a parede '*'
            if (pa_x < nov_lar - 2 && map3[pa_y][pa_x + 1] != '*') {
                pa_x++;
            }
            break;
        case 'w': // Movimento para cima
            // Verifica se não está tentando atravessar a parede '*'
            if (pa_y > 1 && map3[pa_y - 1][pa_x] != '*') {
                pa_y--;
            }
            break;
        case 's': // Movimento para baixo
            // Verifica se não está tentando atravessar a parede '*'
            if (pa_y < nov_alt - 2 && map3[pa_y + 1][pa_x] != '*') {
                pa_y++;
            }
            break;
    }
		
		// Movimentação do inimigo X	
		map3[x_y][x_x] = ' ';
        move_g = rand() % 4;
        switch (move_g) {
            case 0:
                if (x_x > 1)
                    x_x--;
                break;
            case 1:
                if (x_x < nov_lar - 2)
                    x_x++;
                break;
            case 2:
                if (x_y > 1)
                    x_y--;
                break;
            case 3:
                if (x_y < nov_alt - 2)
                    x_y++;
                break;
                }
                
        // Atualiza a posição do inimigo no mapa
        map3[x_y][x_x] = 'X';
        
        //MOVIMENTO INIMIGO // DESATIVAR 
		// Movimentação do inimigo V
            map3[v_y][v_x] = ' ';
            move_g = rand() % 2;
            if (move_g == 0) {
    	// Movimento horizontal
    	if (v_x > 1 && map3[v_y][v_x - 1] != '*') {
        	v_x--;
    	} else if (v_x < nov_lar - 2 && map3[v_y][v_x + 1] != '*') {
        	v_x++;
    	}
		} else {
    	// Movimento vertical
    	if (v_y > 1 && map3[v_y - 1][v_x] != '*') {
        	v_y--;
    	} else if (v_y < nov_alt - 2 && map3[v_y + 1][v_x] != '*') {
        	v_y++;
    	}
	}
	
	
        // Atualiza a posição do INIMIGO no mapa
		map3[v_y][v_x] = 'V';// DESATINVAR 
		
		//VERIFICAR TP
		if (pa_x == tp1_x && pa_y == tp1_y) {
			pa_x = tp2_x - 1;
			pa_y = tp2_y;
		} else if (pa_x == tp2_x && pa_y == tp2_y){
			pa_x = tp1_x + 1;
			pa_y = tp1_y;
		} 
		
		// Atualiza a posição do jogador no mapa
        map3[pa_y][pa_x] = '&';
        
        // Verifica se o jogador está na posição do botão
        if (pa_x == bot_x && pa_y == bot_y) {
            // Remove a linha de espinhos
            for (i = 1; i < nov_lar - 1; i++) {
                map3[linha_espinhos][i] = ' ';
            }
            linha_espinhos = nov_alt - 41;
            printf("Espinhos foram quebrados!\n");
        }

        // Verifica se o jogador colidiu com espinhos
        if (pa_x && pa_y == linha_espinhos) {
    	system("cls");
    		printf("O jogador morreu nos espinhos!\n");
    	break;
		}
		
		// Desenhar mapa
        system("cls");
        for (i = 0; i < nov_lar; i++) {
            for (j = 0; j < nov_alt; j++) {
                printf("%c", map3[i][j]);
            }
            printf("\n");
        }
        
        // Morte Inimi V
        if (pa_x == v_x && pa_y == v_y){
        	system("cls");
        		printf("Um inimigo surgiu das sombras e te matou... \n");
        	break;
		}
		// Morte Inimi X
        if (pa_x == x_x && pa_y == x_y){
        	system("cls");
        		printf("Um inimigo surgiu das sombras e te matou... \n Talvez outros achem a saida...\n");
        	break;
		}
			
		//Chave e Porta
		if (pa_x == ch_x && pa_y == ch_y) {
            map3[ch_y][ch_x] = ' ';
            map3[por_y3][por_x3] = '*';
            por_y3 = nov_alt - 39;
            map3[por_y3][por_x3] = '=';
            printf("Chave encontrada\n");
        }
        // Verifica se o jogador alcançou o objetivo
        if (pa_x == por_x3 && pa_y == por_y3) {
            system("cls");
            printf("Voce escapou da Dungeon\n");
            break;    
        }
		
    	}
	}
		
		//TUTORIAL
		if (x==2){
			
		system("cls");
		printf(" W: O jogador movimenta uma unidade para cima\n A: O jogador movimenta uma unidade para esquerda;\n S: O jogador movimenta uma unidade para baixo;\n D: O jogador movimenta uma unidade para direita;\n I: O jogador interage com o objeto que está em cima. \n");
		printf(" &: Simbolo que representa o jogador.");
		printf(" *: Simbolo que representa uma parede, o jogador ao se movimentar não pode passar pela parede.\n ");	
		printf(" @: Simbolo que representa a chave para abrir a porta para finalizar a fase, a porta abre no momento que o jogador interage com a chave.\n");	
		printf(" D: Simbolo que representa a porta fechada.\n");	
		printf(" =: Simbolo que representa a porta aberta quando o jogador interage com a chave.\n");	
		printf(" O: Simbolo que representa um botão que o usuário pode interagir, o botão fica no chão e o jogador deve ficar em cima dele para poder interagir.\n");	
		printf(" #: Simbolo que representa um espinho. A fase é reiniciada quando o jogador toca no espinho, caso a fase seja reiniciada três vezes, o jogo volta para o menu principal.\n");	
		printf(" >::Simbolo que representa um teletransporte. O teletransporte sempre deve vir em pares, quando o jogador toca em um ele é transportado para o outro e vice-versa.\n");	
		printf(" X: Simbolo que representa o monstro nível 1. Esse monstro tem um movimento aleatório para cima, para esquerda, para baixo e para direita. Caso o monstro toque no jogador, a fase é reiniciada.\n");	
		printf(" V: Símbolo que representa o monstro nível 2. Esse monstro tem uma inteligência para seguir o jogador (há várias maneiras de implementar isso). Caso o monstro toque no jogador, a fase é reiniciada. \n");	
		printf(" \n5)<--BACK \n");	
		scanf("%d", &x);
		system("cls");
        }
    }
    return 0;
}

