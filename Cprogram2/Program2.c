/*
 * Program2.c

 *
 *  Created on: Feb 9, 2023
 *      Author: g982v599
 */
#include <stdio.h>

int main(){
    int score = 0;
    int tD2P = 0;
    int tDFG = 0;
    int tD = 0;
    int fG = 0;
    int safety = 0;
	do {
        printf("Enter a 1 or 0 to STOP\nEnter a score: ");
	scanf("%d", &score);
	if (score == 1 || score == 0)
	{
	    break;
	}
	printf("possible combinations of scoring plays:\n");
        for(tD2P = 0; tD2P < (score/8)+1; tD2P++)
        {
            for(tDFG = 0; tDFG < ((score-(8*tD2P))/7)+1; tDFG++)
            {
                for(tD = 0; tD < ((score-(8*tD2P)-(7*tDFG))/6)+1; tD++)
                {
                    for(fG = 0; fG <((score-(8*tD2P)-(7*tDFG)-(6*tD))/3)+1; fG++)
                    {
                        for(safety = 0; safety <((score-(8*tD2P)-(7*tDFG)-(6*tD)-(3*fG))/2)+1; safety++)
                        {
			    //printf("%d", safety);
                            if (((safety*2) + (fG*3) + (tD*6) + (tDFG*7) + (tD2P*8)) == score)
                            {
                                printf("%d TD + 2PT, %d TD + FG, %d TD, %d FG, %d Safety\n", tD2P, tDFG, tD, fG, safety);
                            }
                        }
                    }
                }
            }
        }
	} while (1);
}