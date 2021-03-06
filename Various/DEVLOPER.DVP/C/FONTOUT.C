/****************************************************/
/*   Affichage de la police compl�te avec Bconout   */
/*   Megamax Laser C     FONTOUT.C                  */
/****************************************************/

#include <osbind.h>     /* D�finitions pour GEMDOS, BIOS et XBIOS */
#define  console 2
#define  ascii   5

int  i;

main()
{
  for (i=0; i<256; i++)
  {
    if (i % 16 == 0)            /* nouvelle ligne tous les 16 caract�res */
    {
      Bconout (console, 13);    /* Retour Chariot */
      Bconout (console, 10);    /* Saut de ligne */
    }
    Bconout (ascii, i);         /* Affichage proprement dit */
    Bconout (ascii, ' ');       /* Espaces entre les caract�res */
  }
    printf ("\n\n\nLa police de caract�res de l'ATARI ST\n"); 
    Bconin (console);             /* Attente de l'appui d'une touche...*/
}

