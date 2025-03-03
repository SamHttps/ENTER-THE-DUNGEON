# ENTER-THE-DUNGEON

<h2>HISTORIA<h2>

Em um mundo fantasioso e medieval, o jogador, um aventureiro, havia saído sozinho para explorar uma masmorra suspeita que havia surgido da noite para o dia. Ao adentrar aquela construção bizarra, 
o aventureiro irá se deparar com um cenário sombrio e estranho, mas algo assustador acontece e o local pelo qual ele acabou de entrar é fechado com pedras. Assim, ele terá que seguir em frente e 
enfrentar os desafios estranhos daquela masmorra perigosa.

<h3>CONTROLES / TUTORIAL<h3>

    W: O jogador movimenta uma unidade para cima
  	A: O jogador movimenta uma unidade para esquerda 
  	S: O jogador movimenta uma unidade para baixo 
  	D: O jogador movimenta uma unidade para direita
    & : Simbolo que representa o jogador. <br>
    * : Simbolo que representa uma parede, o jogador ao se movimentar não pode passar pela parede. <br>
    @ : Simbolo que representa a chave para abrir a porta para finalizar a fase, a porta abre no momento que o jogador interage com a chave. <br>
    D : Simbolo que representa a porta fechada.<br>
    = : Simbolo que representa a porta aberta quando o jogador interage com a chave.<br>
    O : Simbolo que representa um botão que o usuário pode interagir, o botão fica no chão e o jogador deve ficar em cima dele para poder interagir. <br>
    # : Simbolo que representa um espinho. A fase é reiniciada quando o jogador toca no espinho, caso a fase seja reiniciada três vezes, o jogo volta para o menu principal. <br>
    > : Simbolo que representa um teletransporte. O teletransporte sempre deve vir em pares, quando o jogador toca em um ele é transportado para o outro e vice-versa. <br>
    X : Simbolo que representa o monstro nível 1. Esse monstro tem um movimento aleatório para cima, para esquerda, para baixo e para direita. Caso o monstro toque no jogador, a fase é encerrada. <br>
    V : Símbolo que representa o monstro nível 2. Esse monstro tem uma inteligência para seguir o jogador (há várias maneiras de implementar isso). Caso o monstro toque no jogador, a fase é encerrada. <br>

 <h3>SOBRE O JOGO<h3>
 Possui 3 fases. <br>
 Fase 1: mapa 10 x 10 com apenas um inimigo de nvl 1(anda aleatoriamente), chave e uma porta. <br>
 Fase 2: mapa 20 x 20 com dois inimigos, um de nv1(anda aleatoriamente) e outro de nv2 (Persegue o player), com espinhos impedindo a saida, um botão para quebrar os espinhos e uma porta. <br>
 Fase 3: mapa 40 x 40 com dois inimigos, um de nv1(anda aleatoriamente) e outro de nv2 (Persegue o player), com espinhos que impedem o avanço na sala, um botão para quebrar os espinhos e
 teleporte para que o jogador alcançe a porta. <br>
- Jogo feito inteiramente em linguagem C, como um projeto do primeiro semestre de BCC. <br>
- OBJETIVO: Pegar as chaves (C) e avançar pelas portas (D), desviando dos seres que se escondem na escuridão, assim se libertando da masmorra. <br>

 Membros: Samuel Henrique
