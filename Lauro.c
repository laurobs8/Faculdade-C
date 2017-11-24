# include <stdio.h>
# include <stdlib.h>


main ()
{
    float val,produto;
    int x=0,esc,car=0,sn,a;    
    char y,n;
      
           
         do
         {
      
	     system ("color 8");
         system ("cls");
      
                  printf ("\t=============================================================\n");
                  printf ("\t                ====LEGAL RENT A CAR ====                    \n");
                  printf ("\t=============================================================\n\n");
		 


         printf ("\t Escolha o carro para ser alugado:  \n\n");
         printf ("\t (1) Sandero  \n");
         printf ("\t (2) HB20    \n");
         printf ("\t (3) Uno    \n");
         printf ("\t (4) Civic  \n");
         printf ("\t (5) Sonata    \n");
         scanf ("%i",&esc);


     system ("cls");
                  printf ("\t=============================================================\n");
                  printf ("\t                ====LEGAL RENT A CAR ====                    \n");
                  printf ("\t=============================================================\n\n");
         printf ("\t Confirmar o aluguel        \n\n");
         printf (" \t(1) Confirmar e avancar     \n");    
         printf (" \t(2) Menu principal         \n");
         printf (" \t(3) Sair  \n");
         scanf ("%i",&car);


         if (car==1)
                 {
                  switch(esc)
              {
              case 1:

                  system ("cls");
                  printf ("\t=============================================================\n");
                  printf ("\t                ====LEGAL RENT A CAR ====                    \n");
                  printf ("\t=============================================================\n\n");
                   printf ("\t O modelo que voce escolheu e um Sandero.        \n");
                   printf ("\t Placa: GGT 9823 \n");
                   printf ("\t Cor Cinza  Ano 2010 \n");
                   printf ("\t Valor da diaria: R$ 100,00                    \n");
                   printf ("\t Quantos dias pretende ficar com o carro ? \n");
                   scanf ("%f",&val);
                   produto = 100 * val;
                   printf ("\t Seu aluguel vai ficar no valor de R$%.000f \n",produto );
                   printf ("\t Deseja alugar o carro: \n");
                   printf ("\t (1) SIM \n");
                   printf ("\t (2) NAO \n");
                   scanf ("%i",&sn);
                   
                   if (sn == 1)
                   {
						printf("\t====================================================\n");
						printf("\t=====================TICKET=========================\n");
						printf("\t====================================================\n");
		                printf("\tAutomovel: Sandero\n\tPlaca: GGT 9823\n\tValor da diaria R$%.000f\n", produto);
		                printf("\tData: ");system("date /t" );
						printf("\tHorario da retirada: ");system ("time /t\n");
						printf("\t---------------------\tATENCAO!!!-----------------------\n");
						printf("\tAcima de 65 anos tem desconto de 10 por cento, apresente\n");
						printf("\tesse ticket com seu RG e e referente a suas diarias, pague R$%.000f\n", produto/100 * 10);
						printf("\ta menos \n");
						printf("\tComprovando que faz parte de uma ONG parceira de nossa empresa\n");
						printf("\ttenha um desconto de 5 por cento, apresente seu comprovante e referente a");
						printf("\tsuas diarias, pague R$%.000f a menos apresentando esse ticket\n", produto/100 * 5);
						printf("\tA Cada 5 diarias, daremos 1 dias de cortesia\n");
					    printf ("\t--------------------- Carro liberado. -----------------\n");
                        printf ("\t -----------------------Ate Breve----------------------- \n");
                   }             

                   else if (sn == 2)
                   {
                        printf ("\t Seu carro nao esta liberado. \n");
                        printf ("\t Tenha um Bom Dia. \n");
                   }

                   system ("pause");
                   break;
                   
                   
                 
                  case 2:

               system ("cls");
                  printf ("\t=============================================================\n");
                  printf ("\t                ====LEGAL RENT A CAR ====                    \n");
                  printf ("\t=============================================================\n\n");
                   printf ("\t O modelo que voce escolheu e uma HB20          \n");
                   printf ("\t Placa: HMN 3523 \n");
                   printf ("\t Cor Prata  Ano 2011 \n");
                   printf ("\t Valor da diaria: R$ 120,00                    \n");
                   printf ("\t Quantos dias pretende ficar com o carro ? \n");
                   scanf ("%f",&val);
                   produto = 120 * val;
                   if(val == 5){
                   		printf("O 6 dia e cortesia!\n");
				   }else{
				   		
				   }
                   printf ("\t Seu aluguel vai ficar vai no valor de R$%.000f \n",produto );
                   printf ("\t Deseja alugar o carro: \n");
                   printf ("\t (1) SIM \n");
                   printf ("\t (2) NAO \n");
                   scanf ("%i",&sn);
                  
                   

                   if (sn == 1)
                   {
						printf("\t====================================================\n");
						printf("\t=====================TICKET=========================\n");
						printf("\t====================================================\n");
		                printf("\tAutomovel: HB20\n\tPlaca:HMN 3523\n\tValor da diaria R$%.000f\n", produto);
		                printf("\tData: ");system("date /t" );
						printf("\tHorario da retirada: ");system ("time /t\n");
						printf("\t---------------------ATENÇAO!!!-------------------------\n");
						printf("\tAcima de 65 anos tem desconto de 10 por cento, apresente\n");
						printf("\tesse ticket com seu RG e e referente a suas diarias, pague R$%.000f\n", produto/100 * 10);
						printf("\ta menos \n");
						printf("\tComprovando que faz parte de uma ONG parceira de nossa empresa\n");
						printf("\ttenha um desconto de 5 por cento, apresente seu comprovante e referente a");
						printf("\tsuas diarias, pague R$%.000f a menos apresentando esse ticket\n", produto/100 * 5);
						printf("\tA Cada 5 diarias, daremos 1 dias de cortesia\n");
					    printf ("\t--------------------- Carro liberado. -----------------\n");
                        printf ("\t -----------------------Ate Breve----------------------- \n");
                   }             

                   else if (sn == 2)
                   {
                        printf ("\t Seu carro nao esta liberado. \n");
                        printf ("\t Tenha um Bom Dia. \n");
                   }

                   system ("pause");
                   break;
              case 3:

             system ("cls");
                  printf ("\t=============================================================\n");
                  printf ("\t                ====LEGAL RENT A CAR ====                    \n");
                  printf ("\t=============================================================\n\n");
                   printf ("\t O modelo que voce escolheu e um Uno.          \n");
                   printf ("\t Placa: NOP 6593 \n");
                   printf ("\t Cor Prata  Ano 2015 \n");
				   printf ("\t  \n");
                   printf ("\t Valor da diaria: R$ 150,00                    \n");
                   printf ("\t Quantos dias pretende ficar com o carro ? \n");
                   scanf ("%f",&val);
                   produto = 150 * val;
                   printf ("\t Seu aluguel vai ficar no valor de R$%.000f \n",produto );
                   printf ("\t Deseja alugar o carro: \n");
                   printf ("\t (1) SIM \n");
                   printf ("\t (2) NAO \n");
                   scanf ("%i",&sn);

                  if (sn == 1)
                   {
						printf("\t====================================================\n");
						printf("\t=====================TICKET=========================\n");
						printf("\t====================================================\n");
		                printf("\tAutomovel: Uno\n\tPlaca:NOP 6593\n\tValor da diaria R$%.000f\n", produto);
		                printf("\tData: ");system("date /t" );
						printf("\tHorario da retirada: ");system ("time /t\n");
						printf("\t---------------------ATENÇAO!!!-------------------------\n");
						printf("\tAcima de 65 anos tem desconto de 10 por cento, apresente\n");
						printf("\tesse ticket com seu RG e e referente a suas diarias, pague R$%.000f\n", produto/100 * 10);
						printf("\ta menos \n");
						printf("\tComprovando que faz parte de uma ONG parceira de nossa empresa\n");
						printf("\ttenha um desconto de 5 por cento, apresente seu comprovante e referente a");
						printf("\tsuas diarias, pague R$%.000f a menos apresentando esse ticket\n", produto/100 * 5);
						printf("\tA Cada 5 diarias, daremos 1 dias de cortesia\n");
					    printf ("\t--------------------- Carro liberado. -----------------\n");
                        printf ("\t -----------------------Ate Breve----------------------- \n");
                   }             

                   else if (sn == 2)
                   {
                        printf ("\t Seu carro nao esta liberado. \n");
                        printf ("\t Tenha um Bom Dia. \n");
                   }

                   system ("pause");
                   break;
              case 4:

                  system ("cls");
                  printf ("\t=============================================================\n");
                  printf ("\t                ====LEGAL RENT A CAR ====                    \n");
                  printf ("\t=============================================================\n\n");;
                   printf ("\t O modelo que voce escolheu e um Civic.        \n");
                   printf ("\t Placa: NSC 2343 \n");
                   printf ("\t Cor Prata  Ano 2011 \n");
				   printf ("\t Valor da diaria: R$ 170,00                    \n");
                   printf ("\t Quantos dias voce pretende ficar com o carro ? \n");
                   scanf ("%f",&val);
                   produto = 170 * val;
                   printf ("\t Seu aluguel ficar vai no valor de R$%.000f \n",produto );
                   printf ("\t Deseja alugar o carro: \n");
                   printf ("\t (1) SIM \n");
                   printf ("\t (2) NAO \n");
                   scanf ("%i",&sn);

                  if (sn == 1)
                   {
						printf("\t====================================================\n");
						printf("\t=====================TICKET=========================\n");
						printf("\t====================================================\n");
		                printf("\tAutomovel: Civic\n\tPlaca:NSC 2343\n\tValor da diaria R$%.000f\n", produto);
		                printf("\tData: ");system("date /t" );
						printf("\tHorario da retirada: ");system ("time /t\n");
						printf("\t---------------------ATENÇAO!!!-------------------------\n");
						printf("\tAcima de 65 anos tem desconto de 10 por cento, apresente\n");
						printf("\tesse ticket com seu RG e e referente a suas diarias, pague R$%.000f\n", produto/100 * 10);
						printf("\ta menos \n");
						printf("\tComprovando que faz parte de uma ONG parceira de nossa empresa\n");
						printf("\ttenha um desconto de 5 por cento, apresente seu comprovante e referente a");
						printf("\tsuas diarias, pague R$%.000f a menos apresentando esse ticket\n", produto/100 * 5);
						printf("\tA Cada 5 diarias, daremos 1 dias de cortesia\n");
					    printf ("\t--------------------- Carro liberado. -----------------\n");
                        printf ("\t -----------------------Ate Breve----------------------- \n");
                   }             

                   else if (sn == 2)
                   {
                        printf ("\t Seu carro nao esta liberado. \n");
                        printf ("\t Tenha um Bom Dia. \n");
                   }

                   system ("pause");
                   break;
              case 5:

                  system ("cls");
                  printf ("\t=============================================================\n");
                  printf ("\t                ====LEGAL RENT A CAR ====                    \n");
                  printf ("\t=============================================================\n\n");
                   printf ("\t O modelo que voce escolheu e um Sonata.         \n");     
                    printf ("\t Placa: HKI 5623 \n");
                   printf ("\t Cor Prata  Ano 2014 \n");
				   printf ("\t Valor da diaria: R$ 400,00                    \n");
                   printf ("\t Quantos dias voce pretende ficar com o carro ? \n");
                   scanf ("%f",&val);
                   produto = 400 * val;
                   printf ("\t Seu aluguel vai ficar no valor de R$%.000f \n",produto );
                   printf ("\t Deseja alugar o carro: \n");
                   printf ("\t (1) SIM \n");
                   printf ("\t (2) NAO \n");
                   scanf ("%i",&sn);

                   if (sn == 1)
                   {
						printf("\t====================================================\n");
						printf("\t=====================TICKET=========================\n");
						printf("\t====================================================\n");
		                printf("\tAutomovel: Sonata\n\tPlaca:HKI 5623\n\tValor da diaria R$%.000f\n", produto);
		                printf("\tData: ");system("date /t" );
						printf("\tHorario da retirada: ");system ("time /t\n");
						printf("\t---------------------ATENÇAO!!!-------------------------\n");
						printf("\tAcima de 65 anos tem desconto de 10 por cento, apresente\n");
						printf("\tesse ticket com seu RG e e referente a suas diarias, pague R$%.000f\n", produto/100 * 10);
						printf("\ta menos \n");
						printf("\tComprovando que faz parte de uma ONG parceira de nossa empresa\n");
						printf("\ttenha um desconto de 5 por cento, apresente seu comprovante e referente a");
						printf("\tsuas diarias, pague R$%.000f a menos apresentando esse ticket\n", produto/100 * 5);
						printf("\tA Cada 5 diarias, daremos 1 dias de cortesia\n");
					    printf ("\t--------------------- Carro liberado. -----------------\n");
                        printf ("\t -----------------------Ate Breve----------------------- \n");
                   }             

                   else if (sn == 2)
                   {
                        printf ("\t Seu carro nao esta liberado. \n");
                        printf ("\t Tenha um Bom Dia. \n");
                   }

                   system ("pause");
                   break;

                  }
                 }

          else if (car==2)        
                 { 
                  system ("cls");
                  printf ("\t=============================================================\n");
                  printf ("\t                ====LEGAL RENT A CAR ====                    \n");
                  printf ("\t=============================================================\n\n");
                  printf ("\t Escolha o carro para ser alugado:  \n\n");
                  printf ("\t (1) Sandero \n");
                  printf ("\t (2) HB20    \n");
                  printf ("\t (3) Uno   \n");
                  printf ("\t (4) Civic  \n");
                  printf ("\t (5) Sonata   \n");
                  scanf ("%f",&esc);
                 }
          else if (car==3)
                 { 
              system ("cls");
                  printf ("\t=============================================================\n");
                  printf ("\t                ====LEGAL RENT A CAR ====                    \n");
                  printf ("\t=============================================================\n\n");
                  printf ("\t=============================================================\n\n");
                  printf ("\t Voce saiu da locacao de carros. \n\n");
                  printf ("\t A LEGAL RENT A CAR AGRADECE.  \n");
                  printf ("\t TENHA UM BOM DIA. \n");
                  printf ("\t VOLTE SEMPRE. \n\n\n");
                  system ("pause");
                 }

         

           }while (car!=3);  

      system (" pause ");

}


//9e37c8cc-eecd-4f9f-b35f-44745a481fa3
