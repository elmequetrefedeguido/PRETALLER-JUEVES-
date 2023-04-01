#include <stdio.h>
#include <stdlib.h>
#define rondas 2
int main()
{

   int i,votos_myweter1=0,votos_alvarez2=0,voto_empate=0;
   int puntos_resultante_alvarez2=0,puntos_resultante_mywheter1=0, gano_myweter1=0, gano_alvarez2=0, perdio_myweter1=0, perdio_alvarez=0;
   int puntos_j1_mywheter1=0,puntos_j1_alvarez2=0,puntos_j2_mywheter1=0,puntos_j2_alvarez2=0,puntos_j3_mywheter1=0,puntos_j3_alvarez2=0;
   int ganador_ronda,aux,carta_mayor=0;
   float ganacia_mywether=0, ganacia_alvarez=0,precio_inicial=100000;
   float sd_bonus=1.05, md_bonus=1.15, ud_bonus=1.10,menosdinero_pormalo=0.40;
   int j1=0,j2=0,j3=0;

   for(i=1;i<=rondas;i++){
    printf("cual es el ganador de la ronda segun los jurados:\n");
    printf("0 para empate/1 para myweter/2 para caramelo\n\n");
    /*decision del primer juez*/
    do
    {
    printf("voto del juez Nro 1:\n");
    scanf("%i",&j1);

    if(j1<0 || j1>2)
    printf("padre te equivocaste de numero,lee mejor pana");
    }while(j1<0 || j1>2);
    switch(j1)
    {
    case 0:

        printf("empate.\n");
        voto_empate++;
        break;
    case 1:

        printf("Voto para Myweater.\n");
        puntos_j1_mywheter1 = puntos_j1_mywheter1 + 10;
        puntos_j1_alvarez2 = puntos_j1_alvarez2 + 9;
        votos_myweter1++;

        puntos_resultante_mywheter1 += 10;
        puntos_resultante_alvarez2 += 9;
        break;

    case 2:
        printf("Voto para Caramelo.\n");
        puntos_j1_alvarez2 = puntos_j1_alvarez2 + 10;
        puntos_j1_mywheter1 = puntos_j1_mywheter1 + 9;
        votos_alvarez2++;

        puntos_resultante_alvarez2 += 10;
        puntos_resultante_mywheter1 += 9;
        break;
    }
        /*fin de decision del primer juez*/

        /*decision del segundo juez*/
    do{
    printf("voto del juez Nro 2: \n");
    scanf("%i",&j2);
    if(j2<0 || j2>2)
    printf("padre te equivocaste de numero,lee mejor pana");
    }while(j2<0 || j2>2);
    switch(j2)
    {
    case 0:
        printf("empate.\n");
        voto_empate++;
        break;
    case 1:
        printf("Voto para Myweater.\n");
        puntos_j2_mywheter1 = puntos_j2_mywheter1 + 10;
        puntos_j2_alvarez2 = puntos_j2_alvarez2 + 9;
        votos_myweter1++;

        puntos_resultante_mywheter1 += 10;
        puntos_resultante_alvarez2 += 9;
        break;
    case 2:
        printf("Voto para Caramelo.\n");
        puntos_j1_alvarez2 = puntos_j1_alvarez2 + 10;
        puntos_j1_mywheter1 = puntos_j1_mywheter1 + 9;
        votos_alvarez2++;

        puntos_resultante_alvarez2 += 10;
        puntos_resultante_mywheter1 += 9;
        break;
        }
        /*fin de decision del segundo juez*/
             /*decision del tercer juez*/
    do{
    printf("voto del juez Nro 3: \n");
    scanf("%i",&j3);
    if(j3<0 || j3>2)
    printf("padre te equivocaste de numero,lee mejor pana\n");
    }while(j3<0 || j3>2);
    switch(j3)
    {
    case 0:
        printf("empate.\n");
        voto_empate++;
        break;
    case 1:
        printf("Voto para Myweater.\n");
        puntos_j3_mywheter1 = puntos_j3_mywheter1 + 10;
        puntos_j3_alvarez2 = puntos_j3_alvarez2 + 9;
        votos_myweter1++;

        puntos_resultante_mywheter1 += 10;
        puntos_resultante_alvarez2 += 9;
        break;
    case 2:
        printf("Voto para Caramelo.\n");
        puntos_j3_alvarez2 = puntos_j3_alvarez2 + 10;
        puntos_j3_mywheter1 = puntos_j3_mywheter1 + 9;
        votos_alvarez2++;

        puntos_resultante_alvarez2 += 10;
        puntos_resultante_mywheter1 += 9;
        break;
        }
        /*fin de decision del tercer juez*/

    //decision unanime //
    if((votos_myweter1 == 3))
    {
        printf("le destrozaron el caramelo, victoria unanime para: mywether\n\n");

        ganador_ronda=1;
        gano_myweter1=gano_myweter1+1;
        perdio_alvarez=perdio_alvarez+1;

        ganacia_mywether= ganacia_mywether+(precio_inicial*ud_bonus);
        ganacia_alvarez= ganacia_alvarez+(precio_inicial*menosdinero_pormalo);
    }
     if((votos_alvarez2 == 3))
    {
        printf("destrozaron a mywether, victoria unanime para: alvarez\n\n");
        ganador_ronda=1;
        gano_alvarez2=gano_alvarez2+1;
        perdio_myweter1=perdio_myweter1+1;

        ganacia_alvarez= ganacia_alvarez+(precio_inicial*ud_bonus);
        ganacia_mywether= ganacia_mywether+(precio_inicial*menosdinero_pormalo);
    }
    //fin de unanimegod//
    /* DECISION DIVIDIDA */
        if ((votos_myweter1 == 2) && (votos_alvarez2== 1))
        {
            printf("Victoria por decision dividida: Mayweather\n\n");
            ganador_ronda= 1;
            gano_myweter1=gano_myweter1+1;
            perdio_alvarez=perdio_alvarez+1;

          ganacia_mywether= ganacia_mywether+(precio_inicial*sd_bonus);
          ganacia_alvarez= ganacia_alvarez+(precio_inicial*menosdinero_pormalo);
        }

        if ((votos_alvarez2 == 2) && (votos_myweter1== 1))
        {
            printf("Victoria por decision dividida: Caramelo\n\n");

            ganador_ronda = 2;
             gano_alvarez2=gano_alvarez2+1;
             perdio_myweter1=perdio_myweter1+1;

            ganacia_alvarez= ganacia_alvarez+(precio_inicial*sd_bonus);
            ganacia_mywether= ganacia_mywether+(precio_inicial*menosdinero_pormalo);
        }
        /* FIN DECISION DIVIDIDA */
     /* DECISION POR MAYORIA */
        if ((votos_myweter1 == 2) && (voto_empate == 1))
        {
            printf("Victoria por mayoria: Myweter\n\n");
            ganador_ronda = 1;
            gano_myweter1=gano_myweter1+1;
            perdio_alvarez=perdio_alvarez+1;

            ganacia_mywether= ganacia_mywether+(precio_inicial*md_bonus);
            ganacia_alvarez= ganacia_alvarez+(precio_inicial*menosdinero_pormalo);
        }

        if ((votos_alvarez2 == 2) && (voto_empate == 1))
        {
            printf("Victoria por mayoria: Caramelo\n\n");
            ganador_ronda = 2;
            gano_alvarez2=gano_alvarez2+1;
            perdio_myweter1=perdio_myweter1+1;

            ganacia_alvarez= ganacia_alvarez+(precio_inicial*md_bonus);
            ganacia_mywether= ganacia_mywether+(precio_inicial*menosdinero_pormalo);
        }
        printf("Alguno de los peleadores cayo a la lona?\n");
        printf("0 para ninguno  1 para Myweter 2 para Caramelo 3 para los dos\n");

        do
        {
            printf("Ingrese una opcion (0/1/2/3): ");
            scanf(" %i", &aux);

            if (aux < 0 || aux > 3)
                printf("padre te equivocaste de numero,lee mejor pana");

        } while (aux < 0 || aux > 3);

        switch (aux)
        {
        case 0:
            printf("Ninguno se resbalo con una banana, sin penalizacion.\n\n");
            break;
        case 1:
            printf("Mywater no vio el cambur, penalizacion de 2 puntos.\n\n");
            puntos_j1_mywheter1= puntos_j1_mywheter1 - 2;
            puntos_j2_mywheter1 = puntos_j2_mywheter1 - 2;
            puntos_j3_mywheter1 = puntos_j3_mywheter1 - 2;
            break;
        case 2:
            printf("Caramelito no vio el cambur, penalizacion de 2 puntos.\n\n");
            puntos_j1_alvarez2 = puntos_j1_alvarez2 - 2;
            puntos_j2_alvarez2 = puntos_j2_alvarez2 - 2;
            puntos_j3_alvarez2 = puntos_j3_alvarez2 - 2;
            break;
        case 3:
            printf("ambos se dieron rolo e platanazo, penalizacion de 2 puntos.\n\n");
            puntos_j1_mywheter1= puntos_j1_mywheter1 - 2;
            puntos_j2_mywheter1 = puntos_j2_mywheter1 - 2;
            puntos_j3_mywheter1 = puntos_j3_mywheter1 - 2;

            puntos_j1_alvarez2 = puntos_j1_alvarez2 - 2;
            puntos_j2_alvarez2 = puntos_j2_alvarez2 - 2;
            puntos_j3_alvarez2 = puntos_j3_alvarez2 - 2;

            break;
        }
        /* FIN PENALIZACION POR CAER A LA LONA */
        /* PUNTUACION DEL GANADOR Y PERDEDOR  DEL ROUND */

        if (ganador_ronda == 1)
        {
            printf("Gano myweter, su puntuacion del round es: %i\n", puntos_resultante_mywheter1);
            printf("Perdio caramelito, su puntuacion del round es: %i\n", puntos_resultante_alvarez2);
        }
        else
        {
            printf("Gano caramelito, su puntuacion del round es: %i\n", puntos_resultante_alvarez2);
            printf("Perdio myweter, su puntuacion del round es: %i\n", puntos_resultante_mywheter1);
        }

        /* FIN PUNTUACION DEL GANADOR Y PERDEDOR  DEL ROUND */

        /* GANANCIA DE CADA BOXEADOR POR ROUND */
        printf("Myweter ganara: %.2f$\n", ganacia_mywether);
        printf("Caramelo ganara: %.2f$\n\n", ganacia_alvarez);
        /* FIN GANANCIA DE CADA BOXEADOR POR ROUND */

        /* RESETEAR OPCIONES */
        ganador_ronda = 0;
        puntos_resultante_mywheter1 = 0;
        puntos_resultante_alvarez2 = 0;
        votos_myweter1 = 0;
        votos_alvarez2= 0;
        voto_empate = 0;
        /* FIN RESETEAR OPCIONES */
}

    printf("Rondas Jugadas: %i\n\n", rondas);
    printf("Caramelito\nRondas ganadas: %i\nRondas perdidas: %i\n", gano_alvarez2, perdio_alvarez);
    printf("\nMyweter\nRondas ganadas: %i\nRondas perdidas: %i\n\n", gano_myweter1, perdio_myweter1);

    carta_mayor= ((puntos_j1_mywheter1 + puntos_j1_alvarez2) > (puntos_j2_mywheter1 + puntos_j3_alvarez2)) ? 1 : 2;

    if (carta_mayor == 1)
    {
        carta_mayor = ((puntos_j1_mywheter1 + puntos_j1_alvarez2) > (puntos_j3_mywheter1 + puntos_j3_alvarez2)) ? 1 : 3;
    }
    else
    {
        carta_mayor = ((puntos_j2_mywheter1 + puntos_j2_alvarez2) > (puntos_j3_mywheter1 + puntos_j3_alvarez2)) ? 2 : 3;
    }

    switch (carta_mayor)
    {
    case 1:
        printf("Carta de mayor valor: Juez 1\n Mayweather:%i, Canelo:%i\n\n", puntos_j1_mywheter1, puntos_j1_alvarez2);
        break;
    case 2:
         printf("Carta de mayor valor: Juez 2 \n Mayweather:%i, Canelo:%i\n\n", puntos_j2_mywheter1, puntos_j2_alvarez2);
        break;
    case 3:
        printf("Carta de mayor valor: Juez 3 \n Mayweather:%i, Canelo:%i\n\n", puntos_j3_mywheter1, puntos_j3_alvarez2);
        break;

    default:
        break;
    }

    if (gano_myweter1 > gano_alvarez2)
    {
        printf("Ganador de la pelea: Mayweather");
    }
    else
    {
        printf("Ganador de la pelea: Caramelito");
    }
}




