#include<stdio.h>
#include <windows.h>
#include <conio.h>
#include <time.h>
void program (){

    int c;

    do{

        system("COLOR F8");
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n");
        SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),248);
        time_t current_time=time(NULL);
        struct tm*tm=localtime(&current_time);
        printf("\t\t\t\t\t\t %s",asctime(tm));
        printf("\t\t\t\t\t\t//======================\\\\\n");
        printf("\t\t\t\t\t\t||      MENU PROGRAM    ||\n");
        printf("\t\t\t\t\t\t||======================||\n");
        printf("\t\t\t\t\t\t||1. Login              ||\n");
        printf("\t\t\t\t\t\t||2. Register           ||\n");
        printf("\t\t\t\t\t\t||3. Exit               ||\n");
        printf("\t\t\t\t\t\t||======================||");
        printf("\n");
        printf("\t\t\t\t\t\t Pilih Menu : ");
        scanf("%d",&c);

        switch (c)
        {
            case 1:
                system("cls");
                menu2();
                break;

            //case 2:
               // menu3();
               // break;

            //case 3:
                //menu4();
                //break;
            default:
                printf("\nInputan tidak ada\n");
    }
        printf("\n\n Tekan enter untuk kembali ke menu awal\n");
        getchar();
        system("pause");
    }while (c!=6);
    SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),255);
}

void menu2(){

    system("COLOR F8");
    char user[5], pass[5], ch;
    int status = 0, salah = 3, i, selesai;
    int a;

    while(status < 3)
        {
        system("cls");
        i = 0;
        selesai = 0;
        printf("\n\n\n\n\n\n\n\n\n\n\n");
        printf("\t\t\t\t\t\t    INFO LOGIN\n");
        SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),248);
        printf("\t\t\t\t\t\tMasukkan Username : ");
        scanf("%s",&user);
        printf("\t\t\t\t\t\tMasukkan Password : ");
        strncpy(pass, "", sizeof(pass));

    while(selesai != 1)
    {
        ch = getch();
        if(ch == 13)
        {
            selesai = 1;
        }
        else if(ch == 8)
            {
            if(i > 0)
            {
                pass[i]="";
                printf("\b \b");
                i--;
            }
        }
        else
        {
            pass[i]=ch;
            printf("*");
            i++;
        }
    }
    printf("\n");

      if(strcmp(user,"asd")==0 && strcmp (pass,"gass")== 0)
        {
        program();
    }
    else
        {
         printf("\n\t\t\t\t\t\tInput Salah coba lagi (%d)\n",salah-1);
         getch();
         salah--;

            if(salah==0)
                {
                system("acu.mp3");
                SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),244);
                printf("\n\t\t\t\t\t\tAkses ditolak\n");
                SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),255);
                exit(0);
            }
      }
      status++;
   }

   system("pause");
   return 0;
}

