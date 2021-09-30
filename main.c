#include <string.h>
#include <windows.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void play(char *str){
    printf("\nPlaying...\n");
    for(int i=0;i<strlen(str);i++){
        if(str[i]=='.') Beep(600,100);
        else if(str[i]=='-') Beep(600,300);
        else sleep(0.4);
    }
    printf("\ndone\n");
}

void mtod(char *str){
    char* buff=(char*)malloc(sizeof(char)*1000);
    strcpy(buff,"");
    for(int i=0;i<strlen(str);i++){
         switch(str[i]){
        case 'A':{
            strcat(buff,".- ");
            break;
        }
        case 'B':{
            strcat(buff,"-... ");
            break;
        }
        case 'C':{
            strcat(buff,"-.-. ");
            break;
        }
        case 'D':{
            strcat(buff,"-.. ");
            break;
        }
        case 'E':{
            strcat(buff,". ");
            break;
        }
        case 'F':{
            strcat(buff,"..-. ");
            break;
        }
        case 'G':{
            strcat(buff,"--. ");
            break;
        }
        case 'H':{
            strcat(buff,".... ");
            break;
        }
        case 'I':{
            strcat(buff,".. ");
            break;
        }
        case 'J':{
            strcat(buff,".--- ");
            break;
        }
        case 'K':{
            strcat(buff,"-.- ");
            break;
        }
        case 'L':{
            strcat(buff,".-.. ");
            break;
        }
        case 'M':{
            strcat(buff,"-- ");
            break;
        }
        case 'N':{
            strcat(buff,"-. ");
            break;
        }
        case 'O':{
            strcat(buff,"--- ");
            break;
        }
        case 'P':{
            strcat(buff,".--. ");
            break;
        }
        case 'Q':{
            strcat(buff,"--.- ");
            break;
        }
        case 'R':{
            strcat(buff,".-. ");
            break;
        }
        case 'S':{
            strcat(buff,"... ");
            break;
        }
        case 'T':{
            strcat(buff,"- ");
            break;
        }
        case 'U':{
            strcat(buff,"..- ");
            break;
        }
        case 'V':{
            strcat(buff,"...- ");
            break;
        }
        case 'W':{
            strcat(buff,".-- ");
            break;
        }
        case 'X':{
            strcat(buff,"-..- ");
            break;
        }
        case 'Y':{
            strcat(buff,"-.-- ");
            break;
        }
        case 'Z':{
            strcat(buff,"--.. ");
            break;
        }
        case 'a':{
            strcat(buff,".- ");
            break;
        }
        case 'b':{
            strcat(buff,"-... ");
            break;
        }
        case 'c':{
            strcat(buff,"-.-. ");
            break;
        }
        case 'd':{
            strcat(buff,"-.. ");
            break;
        }
        case 'e':{
            strcat(buff,". ");
            break;
        }
        case 'f':{
            strcat(buff,"..-. ");
            break;
        }
        case 'g':{
            strcat(buff,"--. ");
            break;
        }
        case 'h':{
            strcat(buff,".... ");
            break;
        }
        case 'i':{
            strcat(buff,".. ");
            break;
        }
        case 'j':{
            strcat(buff,".--- ");
            break;
        }
        case 'k':{
            strcat(buff,"-.- ");
            break;
        }
        case 'l':{
            strcat(buff,".-.. ");
            break;
        }
        case 'm':{
            strcat(buff,"-- ");
            break;
        }
        case 'n':{
            strcat(buff,"-. ");
            break;
        }
        case 'o':{
            strcat(buff,"--- ");
            break;
        }
        case 'p':{
            strcat(buff,".--. ");
            break;
        }
        case 'q':{
            strcat(buff,"--.- ");
            break;
        }
        case 'r':{
            strcat(buff,".-. ");
            break;
        }
        case 's':{
            strcat(buff,"... ");
            break;
        }
        case 't':{
            strcat(buff,"- ");
            break;
        }
        case 'u':{
            strcat(buff,"..- ");
            break;
        }
        case 'v':{
            strcat(buff,"...- ");
            break;
        }
        case 'w':{
            strcat(buff,".-- ");
            break;
        }
        case 'x':{
            strcat(buff,"-..- ");
            break;
        }
        case 'y':{
            strcat(buff,"-.-- ");
            break;
        }
        case 'z':{
            strcat(buff,"--.. ");
            break;
        }
        case '1':{
            strcat(buff,".---- ");
            break;
        }
        case '2':{
            strcat(buff,"..--- ");
            break;
        }
        case '3':{
            strcat(buff,"...-- ");
            break;
        }
        case '4':{
            strcat(buff,"....- ");
            break;
        }
        case '5':{
            strcat(buff,"..... ");
            break;
        }
        case '6':{
            strcat(buff,"-.... ");
            break;
        }
        case '7':{
            strcat(buff,"--... ");
            break;
        }
        case '8':{
            strcat(buff,"---.. ");
            break;
        }case '9':{
            strcat(buff,"----. ");
            break;
        }
        case '0':{
            strcat(buff,"----- ");
            break;
        }
        case ',':{
            strcat(buff,"--..-- ");
            break;
        }
        case '.':{
            strcat(buff,".-.-.- ");
            break;
        }
        case '?':{
            strcat(buff,"..--.. ");
            break;
        }
        case ';':{
            strcat(buff,"-.-.- ");
            break;
        }
        case ':':{
            strcat(buff,"---... ");
            break;
        }
        case '/':{
            strcat(buff,"-..-. ");
            break;
        }
        case '-':{
            strcat(buff,"-....- ");
            break;
        }
        case '(':{
            strcat(buff,"-.--. ");
            break;
        }
        case ')':{
            strcat(buff,"-.--.- ");
            break;
        }
        case '_':{
            strcat(buff,"..--.- ");
            break;
        }
        case '@':{
            strcat(buff,".--.-. ");
            break;
        }
        case '!':{
            strcat(buff,"-.-.-- ");
            break;
        }
        case '&':{
            strcat(buff,".-... ");
            break;
        }
        case '=':{
            strcat(buff,"-...- ");
            break;
        }
        case '+':{
            strcat(buff,".-.-. ");
            break;
        }
        case '"':{
            strcat(buff,".-..-. ");
            break;
        }
        case '$':{
            strcat(buff,"...-..- ");
            break;
        }
        case ' ':{
            strcat(buff,"/ ");
            break;
        }
    }
    }
    strcpy(str,buff);
    free(buff);
}
void clip(const char *output)
{
    const size_t len = strlen(output) + 1;
    HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, len);
    memcpy(GlobalLock(hMem), output, len);
    GlobalUnlock(hMem);
    OpenClipboard(0);
    EmptyClipboard();
    SetClipboardData(CF_TEXT, hMem);
    CloseClipboard();
}
void logo(){
 printf(" __  __                              _____          _     \n");
 printf("|  \\/  |                            / ____|        | |    \n");
 printf("| \\  / | ___  _   _ _ __ ___  ___  | |     ___   __| | ___ \n");
 printf("| |\\/| |/ _ \\| | | | '__/ __|/ _ \\ | |    / _ \\ / _` |/ _ \\\n");
 printf("| |  | | (_) | |_| | |  \\__ \\  __/ | |___| (_) | (_| |  __/\n");
 printf("|_|  |_|\\___/ \\__,_|_|  |___/\\___|  \\_____\\___/ \\__,_|\\___|\n\n");
}
int main(){
    SetConsoleTitle("Morse code");
    char* buff=(char*)malloc(sizeof(char)*1000);
    char ch;
    logo();
    printf("\nEnter the messgae: \n");
    fgets(buff,1000,stdin);
    buff[strcspn(buff,"\n")]='\0';
    mtod(buff);
    do{
        system("cls");
    printf("\nMourse code:-%s\nMourse code is successfully copied!\nDo you want to play this mourse code!\n1.Press 'y' for yes\n2.Press 'n' for yes\nEnter the character: ",buff);
    clip(buff);
    ch = getc(stdin);
        if(ch=='y'){
          play(buff);
          break;
        }
        else if(ch=='n'){
           break;
        }
        else{
             printf("\nWrong option entered!\n");
            system("pause");
            fflush(stdin);
        }
        }while(1);
    free(buff);
    printf("\n***DEBU***\n");
    system("pause");
}
