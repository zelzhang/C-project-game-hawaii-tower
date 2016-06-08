//Case Q go back to menu
#include "audio.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <mmsystem.h>
#include "console_draw2.h"
#include "kb_input2.h"

#define LENGTH 4
#define WIDTH 4
#define XO 3
#define YO 4
#define XOO 7
#define YOO 8

typedef struct _image {
    int row;
    int col;
    char *pixel;
    int *color;
    int xp;
    int yp;
    int disk_color;
    int bg_color;
    struct Image* up;
    struct Image* down;
    int size;
} Image;

typedef struct _font {
    int height;
    int width;
    char *pixel;
} Font;
//
int move_times = 0;
//functions
int play1();
int play2();
int play3();
int tutorial1();
int tutorial2();
int tutorial3();
int tutorial4();
int tutorial5();
int tutorial6();
//Image function
Image * read_image(char *pixel_file, char *color_file);
void show_image(Image *ip, int offx, int offy);
void destroy_image(Image *ip);
char getpixel(Image *ip, int x, int y);
int getcolor(Image *ip, int x, int y);
void show_image2(Image *ip);

//String function
void putStringLarge(Font *fp, int x, int y, char *p, int fg_color, int bg_color);
Font * read_font(char *pixel_file);
void show_font(Font *ip, char letter, int offx, int offy, int fg_color, int bg_color);
void destroy_font(Font *ip);
void putString(int x, int y, char *p, int fg_color, int bg_color);

void show_map2(int play_num,int a,int b, int c, int d, int e, int f, int base, int width, int height);
void show_map(int a,int b, int c, int d, int e, int f, int base, int width, int height);
void warn_string(int mod_px, char *s){
    Font* large_font = read_font("font.txt");
    putStringLarge(large_font, 60+mod_px, 5,s,4,11);

}
void show_plain_bg(){
    int i,j,color = 11;
    char*p = ".";
    for(i = 0; i< 170;i++){
        for(j = 0; j< 20;j++){
            putString(i,j,p,color,color);

        }for(j = 20; j< 60;j++){
            putString(i,j,p,color,color);

        }
    }
}

int main(){
    start();
    menu();
    //win();
    return 0;
}

int win(void){


        Font *large_font = read_font("font.txt");
        Image *Biscuit=read_image("palm.pixel","palm.color");
        show_image(Biscuit, 0, 0);
        drawCmdWindow();
        initializeKeyInput();
        Audio audio[1];
        openAudioFile("FF1.wav",&audio[0]);
        playAudio(&audio[0]);
        Image *sb1 = read_image("sb1.pixel","sb1.color");
        show_image(sb1,115,70);
        drawCmdWindow();
        clearScreen();
        show_image(Biscuit, 0, 0);
        Sleep(100);
        drawCmdWindow();
        Image *sb2 = read_image("sb2.pixel","sb2.color");
        show_image(sb2,140,69);
        drawCmdWindow();
        clearScreen();
        show_image(Biscuit, 0, 0);
        Sleep(100);
        drawCmdWindow();
        Image *sb3 = read_image("sb3.pixel","sb3.color");
        show_image(sb3,165,68);
        drawCmdWindow();
        clearScreen();
        show_image(Biscuit, 0, 0);
        Sleep(100);
        drawCmdWindow();
        Image *sb4 = read_image("sb4.pixel","sb4.color");
        show_image(sb4,195,68);
        drawCmdWindow();
        clearScreen();
        show_image(Biscuit, 0, 0);
        Sleep(100);
        drawCmdWindow();
        Image *sb5 = read_image("sb5.pixel","sb5.color");
        show_image(sb5,215,68);
        drawCmdWindow();
        clearScreen();
        show_image(Biscuit, 0, 0);
        Sleep(100);
        drawCmdWindow();
        Image *sb6 = read_image("sb6.pixel","sb6.color");
        show_image(sb6,240,68);
        drawCmdWindow();
        clearScreen();
        show_image(Biscuit, 0, 0);
        Sleep(100);
        drawCmdWindow();
        Image *sb7 = read_image("sb7.pixel","sb7.color");
        show_image(sb7,265,68);
        drawCmdWindow();
        clearScreen();
        show_image(Biscuit, 0, 0);
        Sleep(100);
        drawCmdWindow();
        Image *sb8 = read_image("sb8.pixel","sb8.color");
        show_image(sb8,290,68);
        drawCmdWindow();
        clearScreen();
        show_image(Biscuit, 0, 0);
        Sleep(100);
        drawCmdWindow();
        show_image(sb1,315,67);
        drawCmdWindow();
        //clearScreen();
        Sleep(100);

        Image *roll = read_image("roll.pixel","roll.color");
        show_image(roll,265,67);
        drawCmdWindow();
        //clearScreen();
        Sleep(200);
        show_image(roll,235,67);
        drawCmdWindow();
        Sleep(200);
        show_image(roll,205,67);
        drawCmdWindow();
        Sleep(200);
        show_image(roll,185,67);
        drawCmdWindow();
        Sleep(200);
        show_image(roll,145,67);
        drawCmdWindow();
        Sleep(200);
        show_image(roll,105,67);
        drawCmdWindow();
        Sleep(200);
        show_image(roll,65,67);
        drawCmdWindow();
        Sleep(200);
        show_image(roll,30,67);
        drawCmdWindow();
        Sleep(200);
        Image *V = read_image("V.pixel","V.color");
        show_image(V,30,67);
        drawCmdWindow();
        Sleep(200);
        Image *I = read_image("I.pixel","I.color");
        show_image(I,70,67);
        drawCmdWindow();
        Sleep(200);
        Image *C = read_image("C.pixel","C.color");
        show_image(C,110,67);
        drawCmdWindow();
        Sleep(200);
        Image *T = read_image("T.pixel","T.color");
        show_image(T,150,67);
        drawCmdWindow();
        Sleep(200);
        Image *O = read_image("O.pixel","O.color");
        show_image(O,190,67);
        drawCmdWindow();
        Sleep(200);
        Image *R = read_image("R.pixel","R.color");
        show_image(R,230,67);
        drawCmdWindow();
        Sleep(200);
        Image *Y = read_image("Y.pixel","Y.color");
        show_image(Y,270,67);
        drawCmdWindow();
        Sleep(200);
        putStringLarge(large_font, 105, 110, "Press SPACE to continue", 10, 4);
        //pauseAudio(&audio[0]);
        /*Image *K = read_image("K.pixel","K.color");
        show_image(K,0,7);
        drawCmdWindow();
        Sleep(200);*/
        int cf =0;
        char ch;


while (1) {
        show_image(Biscuit, 0, 0);

        cf = (cf+1)%2;
        if (cf==0) {
        show_image(sb1,315,67);
        show_image(roll,265,67);
        show_image(roll,225,67);
        show_image(roll,175,67);
        show_image(roll,135,67);
        show_image(roll,95,67);
        show_image(roll,75,67);
        show_image(roll,55,67);
        show_image(roll,30,67);
        show_image(V,30,67);
        show_image(I,70,67);
        show_image(C,110,67);
        show_image(T,150,67);
        show_image(O,190,67);
        show_image(R,230,67);
        show_image(Y,270,67);
        putStringLarge(large_font, 105, 110, "Press SPACE to continue", 10, 4);
        drawCmdWindow();
        Sleep(150);


        }
        else {
            clearScreen();
            show_image(Biscuit, 0, 0);
            show_image(sb1,315,67);
            show_image(roll,265,67);
            show_image(roll,225,67);
            show_image(roll,175,67);
            show_image(roll,135,67);
            show_image(roll,95,67);
            show_image(roll,75,67);
            show_image(roll,55,67);
            show_image(roll,30,67);
            show_image(V,30,67);
            show_image(I,70,67);
            show_image(C,110,67);
            show_image(T,150,67);
            show_image(O,190,67);
            show_image(R,230,67);
            show_image(Y,270,67);

             //putStringLarge(large_font, 105, 110, "Press SPACE to continue", 10, 4);
            drawCmdWindow();
        }
        //drawCmdWindow();

        if (waitForKeyDown(0.1)) {
            ch=getKeyEventASCII();
            if (ch==' '){
                pauseAudio(&audio[0]);
                break;
            }
        }
        Sleep(1000);
    }
    clearScreen();
    drawCmdWindow();
}

    //destroy image

int tutorial1(){
    int i,j;
    Audio audio[3];
    openAudioFile("start_music.wav", &audio[0]);
    openAudioFile("error_sound.wav", &audio[1]);
    openAudioFile("go_down_sound2.wav", &audio[2]);
    audio[0].loop = 1;
    playAudio(&audio[0]);
    int a_p = 50, b_p = 120, c_p = 190, d_p = 260, e_p = 330, f_p = 400;
    initializeKeyInput();
    Image null_image;
    null_image.up = NULL;
    null_image.down = NULL;
    null_image.size = -1;
    null_image.disk_color = -1;
    Image *bg = read_image("newbg.pixel","newbg.color");
    Image *Biscuit=read_image("Question_1.pixel","Question_1.color");

    Image *A = read_image("G0.pixel","G0.color");
    Image *B = read_image("G1.pixel","G1.color");
    Image *C = read_image("G2.pixel","G2.color");
    Image *D = read_image("G3.pixel","G3.color");
    Image *E = read_image("G4.pixel","G4.color");
    Image *F = read_image("R0.pixel","R0.color");
    Image *G = read_image("R1.pixel","R1.color");
    Image *H = read_image("R2.pixel","R2.color");
    Image *I = read_image("R3.pixel","R3.color");
    Image *J = read_image("R4.pixel","R4.color");
    Image *K = read_image("B0.pixel","B0.color");
    Image *L = read_image("B1.pixel","B1.color");
    Image *M = read_image("B2.pixel","B2.color");
    Image *N = read_image("B3.pixel","B3.color");
    Image *O = read_image("B4.pixel","B4.color");
    // set defaults
    //COLOR CODES (DISK_COLOR, BG_COLOR)
    //YELLOW: 6, 14
    //BLUE: 10, 2
    //RED: 11, 9
    //GREEN: 4, 12
    A->disk_color = 10;
    A->bg_color = 2;
    B->disk_color = 11;
    B->bg_color = 9;
    C->disk_color = 11;
    C->bg_color = 9;
    D->disk_color = 4;
    D->bg_color = 12;
    E->disk_color = 10;
    E->bg_color = 2;
    F->disk_color = 10;
    F->bg_color = 2;
    G->disk_color = 11;
    G->bg_color = 9;
    H->disk_color = 10;
    H->bg_color = 2;
    I->disk_color = 6;
    I->bg_color = 14;
    J->disk_color = 6;
    J->bg_color = 14;
    K->disk_color = 4;
    K->bg_color = 12;
    L->disk_color = 4;
    L->bg_color = 12;
    M->disk_color = 4;
    M->bg_color = 12;
    N->disk_color = 6;
    N->bg_color = 14;
    O->disk_color = 6;
    O->bg_color = 14;


    A->size = 3;
    B->size = 0;
    C->size = 1;
    D->size = 0;
    E->size = 1;
    F->size = 2;
    G->size = 3;
    H->size = 0;
    I->size = 1;
    J->size = 2;
    K->size = 3;
    L->size = 2;
    M->size = 1;
    N->size = 0;
    O->size = 3;


    A->down = B;
    B->down = C;
    C->down = D;
    D->down = E;
    E->down = NULL;
    F->down = G;
    G->down = H;
    H->down = I;
    I->down = J;
    J->down = NULL;
    K->down = L;
    L->down = M;
    M->down = N;
    N->down = O;
    O->down = NULL;






    A->xp = a_p-1*2;
    A->yp = 18;
    B->xp = a_p-2*2;
    B->yp = 26;
    C->xp = a_p-3*2;
    C->yp = 34;
    D->xp = a_p-4*2;
    D->yp = 42;
    E->xp = a_p-5*2;
    E->yp = 50;
    F->xp = b_p-1*2;
    F->yp = 18;
    G->xp = b_p-2*2;
    G->yp = 26;
    H->xp = b_p-3*2;
    H->yp = 34;
    I->xp = b_p-4*2;
    I->yp = 42;
    J->xp = b_p-5*2;
    J->yp = 50;
    K->xp = c_p-1*2;
    K->yp = 18;
    L->xp = c_p-2*2;
    L->yp = 26;
    M->xp = c_p-3*2;
    M->yp = 34;
    N->xp = c_p-4*2;
    N->yp = 42;
    O->xp = c_p-5*2;
    O->yp = 50;
    Image* top_1 = A;
    Image* top_2 = F;
    Image* top_3 = K;
    //~ set defaults




    int key_down[10] = {0};
    int key_val[4] = {VK_LEFT,VK_RIGHT, VK_SPACE, VK_Q};
    int k;
    Font* large_font = read_font("font.txt");
    int something_up = 0;
    Image* ip1;
    Image* ip2;
    Image* ip3;
    Image* selected = NULL;
    int rod_num = 0;
    int board;
    int original=0;
    while(1){
        A->xp = a_p-1*2;
        A->yp = 18;
        B->xp = a_p-2*2;
        B->yp = 26;
        C->xp = a_p-3*2;
        C->yp = 34;
        D->xp = a_p-4*2;
        D->yp = 42;
        E->xp = a_p-5*2;
        E->yp = 50;
        F->xp = b_p-1*2;
        F->yp = 18;
        G->xp = b_p-2*2;
        G->yp = 26;
        H->xp = b_p-3*2;
        H->yp = 34;
        I->xp = b_p-4*2;
        I->yp = 42;
        J->xp = b_p-5*2;
        J->yp = 50;
        K->xp = c_p-1*2;
        K->yp = 18;
        L->xp = c_p-2*2;
        L->yp = 26;
        M->xp = c_p-3*2;
        M->yp = 34;
        N->xp = c_p-4*2;
        N->yp = 42;
        O->xp = c_p-5*2;
        O->yp = 50;
        clearScreen();
        show_map(a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
        show_image2(A);
        show_image2(B);
        show_image2(C);
        show_image2(D);
        show_image2(E);
        show_image2(F);
        show_image2(G);
        show_image2(H);
        show_image2(I);
        show_image2(J);
        show_image2(K);
        show_image2(L);
        show_image2(M);
        show_image2(N);
        show_image2(O);
        show_image(Biscuit, 0, 0);
        drawCmdWindow();
       // show_image(bg,0,0);
        for(i = 0; i < 70&&E->yp<120;i++){
            if(E->yp>120){
                original = 1;
                break;
            }
            ip1 = top_1;
            ip2 = top_2;
            ip3 = top_3;
            for(j = 0; j< 5; j++){

                ip1->yp+=4;
                ip2->yp+=4;
                ip3->yp+=4;

                ip1 = ip1->down;
                ip2 = ip2->down;
                ip3 = ip3->down;
            }
            clearScreen();
            show_map(a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
            show_image2(A);
            show_image2(B);
            show_image2(C);
            show_image2(D);
            show_image2(E);
            show_image2(F);
            show_image2(G);
            show_image2(H);
            show_image2(I);
            show_image2(J);
            show_image2(K);
            show_image2(L);
            show_image2(M);
            show_image2(N);
            show_image2(O);
            show_image(Biscuit, 0, 0);
            drawCmdWindow();
        }

        for(i = 0 ; i < 30; i++){
        for(k = 0;k<4;k++){
        putStringLarge(large_font, 20, 40, "Your goal is to organize every disk", 15,15);
        putStringLarge(large_font, 30, 50, "into a rod with the right order", 15,15);
        if(KEY_DOWN(key_val[k])&&!key_down[k]){
            key_down[k] = 1;
            switch(key_val[k]){
                case VK_RIGHT:
                    pauseAudio(&audio[0]);
                    tutorial2();
                    break;
                case VK_LEFT:
                    pauseAudio(&audio[0]);
                    return 0;
                    break;
                case VK_SPACE:
                    pauseAudio(&audio[0]);
                    tutorial2();
                    break;
                case VK_Q:
                    pauseAudio(&audio[0]);
                    return 0;//back to menu!!
                    break;
                default:
                    break;


            }
        }
        if(KEY_UP(key_val[k])&&key_down[k]){
            key_down[k] = 0;
        }

        drawCmdWindow();
    }}
   }
}
int tutorial2(){
    int i,j;
    Audio audio[3];
    Font* large_font = read_font("font.txt");
    openAudioFile("bgmusic.wav", &audio[0]);
    openAudioFile("error_sound.wav", &audio[1]);
    openAudioFile("go_down_sound2.wav", &audio[2]);
    int a_p = 50, b_p = 120, c_p = 190, d_p = 260, e_p = 330, f_p = 400;
    initializeKeyInput();
    Image null_image;
    null_image.up = NULL;
    null_image.down = NULL;
    null_image.size = -1;
    null_image.disk_color = -1;
    Image *bg = read_image("newbg.pixel","newbg.color");
    Image *Biscuit=read_image("Question_1.pixel","Question_1.color");

    Image *A = read_image("B0.pixel","B0.color");
    Image *B = read_image("R1.pixel","R1.color");
    Image *C = read_image("R2.pixel","R2.color");
    Image *D = read_image("R0.pixel","R0.color");
    Image *E = read_image("B1.pixel","B1.color");
    Image *F = read_image("B2.pixel","B2.color");



    //COLOR CODES (DISK_COLOR, BG_COLOR)
    //YELLOW: 6, 14
    //BLUE: 10, 2
    //RED: 11, 9
    //GREEN: 4, 12



    A->xp = a_p-1*2;
    A->yp = 106;
    B->xp = a_p-2*2;
    B->yp = 114;
    C->xp = a_p-3*2;
    C->yp = 122;
    D->xp = b_p-1*2;
    D->yp = 122;
    E->xp = c_p-2*2;
    E->yp = 114;
    F->xp = c_p-3*2;
    F->yp = 122;


    while(1){
    A->xp = a_p-1*2;
    A->yp = 106;
    int key_down[10] = {0};
    int key_val[4] = {VK_LEFT,VK_RIGHT, VK_SPACE, VK_Q};
    int k;
        clearScreen();

        show_map(a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
        show_image2(A);
        show_image2(B);
        show_image2(C);
        show_image2(D);
        show_image2(E);
        show_image2(F);
        show_image(Biscuit, 0, 0);
        drawCmdWindow();
        for(i = 0; i<15;i++){
            A->yp -= 4;
            clearScreen();
            putStringLarge(large_font, 80, 20, "RULE 1 OF 4", 14,14);
            putStringLarge(large_font, 80, 55, "CORRECT O", 10,10);
            show_map(a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
            show_image2(A);
            show_image2(B);
            show_image2(C);
            show_image2(D);
            show_image2(E);
            show_image2(F);
            show_image(Biscuit, 0, 0);
            drawCmdWindow();
        }
        Sleep(300);
        for(i = 0; i<14;i++){
            A->xp += 10;
            clearScreen();
            putStringLarge(large_font, 80, 20, "RULE 1 OF 4", 14,14);
            show_map(a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
            show_image2(A);
            show_image2(B);
            show_image2(C);
            show_image2(D);
            show_image2(E);
            show_image2(F);
            show_image(Biscuit, 0, 0);
            drawCmdWindow();
        }
        Sleep(300);
        playAudio(&audio[2]);
        for(i = 0; i<15;i++){
            A->yp += 4;
            clearScreen();
            putStringLarge(large_font, 80, 20, "RULE 1 OF 4", 14,14);
            putStringLarge(large_font, 80, 55, "CORRECT O", 10,10);
            show_map(a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
            show_image2(A);
            show_image2(B);
            show_image2(C);
            show_image2(D);
            show_image2(E);
            show_image2(F);
            show_image(Biscuit, 0, 0);
            drawCmdWindow();
        }
        for(j = 0; j < 1000000;j++){
        for(k = 0;k<4;k++){
        if(KEY_DOWN(key_val[k])&&!key_down[k]){
            key_down[k] = 1;
            switch(key_val[k]){
                case VK_RIGHT:
                    tutorial3();
                    break;
                case VK_LEFT:
                    tutorial1();
                    break;
                case VK_SPACE:
                    tutorial3();
                    break;
                case VK_Q:
                    //menu();
                    return 0;//back to menu!!
                    break;
                default:
                    break;


            }
        }
        if(KEY_UP(key_val[k])&&key_down[k]){
            key_down[k] = 0;
        }
        }
        }
    }

}

int tutorial3(){



    int i,j;
    Audio audio[3];
    Font* large_font = read_font("font.txt");
    openAudioFile("bgmusic.wav", &audio[0]);
    openAudioFile("error_sound.wav", &audio[1]);
    openAudioFile("go_down_sound2.wav", &audio[2]);
    int a_p = 50, b_p = 120, c_p = 190, d_p = 260, e_p = 330, f_p = 400;
    initializeKeyInput();
    Image null_image;
    null_image.up = NULL;
    null_image.down = NULL;
    null_image.size = -1;
    null_image.disk_color = -1;
    Image *bg = read_image("newbg.pixel","newbg.color");
    Image *Biscuit=read_image("Question_1.pixel","Question_1.color");

    Image *A = read_image("B0.pixel","B0.color");
    Image *B = read_image("G2.pixel","G2.color");
    Image *C = read_image("B2.pixel","B2.color");
    Image *D = read_image("R0.pixel","R0.color");
    Image *E = read_image("R1.pixel","R1.color");
    Image *F = read_image("R2.pixel","R2.color");
    Image *G = read_image("B3.pixel","B3.color");


    //COLOR CODES (DISK_COLOR, BG_COLOR)
    //YELLOW: 6, 14
    //BLUE: 10, 2
    //RED: 11, 9
    //GREEN: 4, 12



    A->xp = a_p-1*2;
    A->yp = 106;
    B->xp = a_p-3*2;
    B->yp = 114;
    C->xp = a_p-3*2;
    C->yp = 122;
    D->xp = b_p-1*2;
    D->yp = 106;
    E->xp = b_p-2*2;
    E->yp = 114;
    F->xp = b_p-3*2;
    F->yp = 122;
    G->xp = c_p-4*2;
    G->yp = 122;


    while(1){
    A->yp = 106;
    A->xp = a_p-1*2;
    int key_down[10] = {0};
    int key_val[4] = {VK_LEFT,VK_RIGHT, VK_SPACE, VK_Q};
    int k;
        clearScreen();
        show_map(a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
        show_image2(A);
        show_image2(B);
        show_image2(C);
        show_image2(D);
        show_image2(E);
        show_image2(F);
        show_image(Biscuit, 0, 0);
        drawCmdWindow();
        for(i = 0; i<15;i++){
            A->yp -= 4;
            clearScreen();
            putStringLarge(large_font, 80, 55, "CORRECT O", 10,10);
            putStringLarge(large_font, 80, 20, "RULE 2 OF 4", 14,14);
            show_map(a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
            show_image2(A);
            show_image2(B);
            show_image2(C);
            show_image2(D);
            show_image2(E);
            show_image2(F);
            show_image2(G);
            show_image(Biscuit, 0, 0);
            drawCmdWindow();
        }
        Sleep(300);
        for(i = 0; i<14;i++){
            A->xp += 10;
            clearScreen();
            putStringLarge(large_font, 80, 20, "RULE 2 OF 4", 14,14);
            show_map(a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
            show_image2(A);
            show_image2(B);
            show_image2(C);
            show_image2(D);
            show_image2(E);
            show_image2(F);
            show_image2(G);
            show_image(Biscuit, 0, 0);
            drawCmdWindow();
        }
        Sleep(300);
        playAudio(&audio[2]);
        for(i = 0; i<15+2;i++){
            A->yp += 4;
            clearScreen();
            putStringLarge(large_font, 80, 55, "CORRECT O", 10,10);
            putStringLarge(large_font, 80, 20, "RULE 2 OF 4", 14,14);
            show_map(a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
            show_image2(A);
            show_image2(B);
            show_image2(C);
            show_image2(D);
            show_image2(E);
            show_image2(F);
            show_image2(G);
            show_image(Biscuit, 0, 0);
            drawCmdWindow();
        }
        for(j = 0; j < 1000000;j++){
        for(k = 0;k<4;k++){
        if(KEY_DOWN(key_val[k])&&!key_down[k]){
            key_down[k] = 1;
            switch(key_val[k]){
                case VK_RIGHT:
                    tutorial4();
                    break;
                case VK_LEFT:
                    tutorial2();
                    break;
                case VK_SPACE:
                    tutorial4();
                    break;
                case VK_Q:

                    return 0;//back to menu!!
                    break;
                default:
                    break;


            }
        }
        if(KEY_UP(key_val[k])&&key_down[k]){
            key_down[k] = 0;
        }
        }
        }
    }

}


int tutorial4(){
    int i,j;
    Audio audio[3];
    Font* large_font = read_font("font.txt");
    openAudioFile("bgmusic.wav", &audio[0]);
    openAudioFile("error_sound.wav", &audio[1]);
    openAudioFile("error_buzz.wav", &audio[2]);
    int a_p = 50, b_p = 120, c_p = 190, d_p = 260, e_p = 330, f_p = 400;
    initializeKeyInput();
    Image *bg = read_image("newbg.pixel","newbg.color");
    Image *Biscuit=read_image("Question_1.pixel","Question_1.color");

    Image *A = read_image("R0.pixel","R0.color");
    Image *B = read_image("R1.pixel","R1.color");
    Image *C = read_image("R2.pixel","R2.color");
    Image *D = read_image("R3.pixel","R3.color");
    Image *E = read_image("G3.pixel","G3.color");
    Image *F = read_image("B1.pixel","B1.color");
    Image *G = read_image("B2.pixel","B2.color");


    //COLOR CODES (DISK_COLOR, BG_COLOR)
    //YELLOW: 6, 14
    //BLUE: 10, 2
    //RED: 11, 9
    //GREEN: 4, 12



    A->xp = a_p-1*2;
    A->yp = 98;
    B->xp = a_p-2*2;
    B->yp = 106;
    C->xp = a_p-3*2;
    C->yp = 114;
    D->xp = a_p-4*2;
    D->yp = 122;
    E->xp = b_p-4*2;
    E->yp = 122;
    F->xp = c_p-2*2;
    F->yp = 114;
    G->xp = c_p-3*2;
    G->yp = 122;


    while(1){

    A->xp = a_p-1*2;
    A->yp = 98;
    int key_down[10] = {0};
    int key_val[4] = {VK_LEFT,VK_RIGHT, VK_SPACE, VK_Q};
    int k;
        clearScreen();
        show_map(a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
        show_image2(A);
        show_image2(B);
        show_image2(C);
        show_image2(D);
        show_image2(E);
        show_image2(F);
        show_image(Biscuit, 0, 0);
        drawCmdWindow();
        for(i = 0; i<15;i++){
            A->yp -= 4;
            clearScreen();
            putStringLarge(large_font, 80, 55, "WRONG X", 12,12);
            putStringLarge(large_font, 80, 20, "RULE 3 OF 4", 14,14);
            show_map(a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
            show_image2(A);
            show_image2(B);
            show_image2(C);
            show_image2(D);
            show_image2(E);
            show_image2(F);
            show_image2(G);
            show_image(Biscuit, 0, 0);
            drawCmdWindow();
        }
        Sleep(300);
        for(i = 0; i<14;i++){
            A->xp += 10;
            clearScreen();
            putStringLarge(large_font, 80, 20, "RULE 3 OF 4", 14,14);
            show_map(a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
            show_image2(A);
            show_image2(B);
            show_image2(C);
            show_image2(D);
            show_image2(E);
            show_image2(F);
            show_image2(G);
            show_image(Biscuit, 0, 0);
            drawCmdWindow();
        }
        Sleep(300);
        playAudio(&audio[2]);
        for(i = 0; i<15+2;i++){
            A->yp += 4;
            clearScreen();
            putStringLarge(large_font, 80, 55, "WRONG X", 12,12);
            putStringLarge(large_font, 80, 20, "RULE 3 OF 4", 14,14);
            show_map(a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
            show_image2(A);
            show_image2(B);
            show_image2(C);
            show_image2(D);
            show_image2(E);
            show_image2(F);
            show_image2(G);
            show_image(Biscuit, 0, 0);
            drawCmdWindow();
        }
        for(j = 0; j < 1000000;j++){
        for(k = 0;k<4;k++){
        if(KEY_DOWN(key_val[k])&&!key_down[k]){
            key_down[k] = 1;
            switch(key_val[k]){
                case VK_RIGHT:
                    tutorial5();
                    break;
                case VK_LEFT:
                    tutorial3();
                    break;
                case VK_SPACE:
                    tutorial5();
                    break;
                case VK_Q:
                    return 0;//back to menu!!
                    break;
                default:
                    break;


            }
        }
        if(KEY_UP(key_val[k])&&key_down[k]){
            key_down[k] = 0;
        }
        }
        }
    }

}

int tutorial5(){
    int i,j;
    Audio audio[3];
    Font* large_font = read_font("font.txt");
    openAudioFile("bgmusic.wav", &audio[0]);
    openAudioFile("error_sound.wav", &audio[1]);
    openAudioFile("error_buzz.wav", &audio[2]);
    int a_p = 50, b_p = 120, c_p = 190, d_p = 260, e_p = 330, f_p = 400;
    initializeKeyInput();
    Image *bg = read_image("newbg.pixel","newbg.color");
    Image *Biscuit=read_image("Question_1.pixel","Question_1.color");

    Image *A = read_image("B4.pixel","B4.color");
    Image *B = read_image("G0.pixel","G0.color");
    Image *C = read_image("G1.pixel","G1.color");
    Image *D = read_image("G2.pixel","G2.color");
    Image *E = read_image("G3.pixel","G3.color");
    Image *F = read_image("B1.pixel","B1.color");
    Image *G = read_image("B2.pixel","B2.color");


    //COLOR CODES (DISK_COLOR, BG_COLOR)
    //YELLOW: 6, 14
    //BLUE: 10, 2
    //RED: 11, 9
    //GREEN: 4, 12



    A->xp = a_p-5*2;
    A->yp = 122;
    B->xp = b_p-1*2;
    B->yp = 106-8;
    C->xp = b_p-2*2;
    C->yp = 106;
    D->xp = b_p-3*2;
    D->yp = 114;
    E->xp = b_p-4*2;
    E->yp = 122;
    F->xp = c_p-2*2;
    F->yp = 114;
    G->xp = c_p-3*2;
    G->yp = 122;


    while(1){

    A->xp = a_p-5*2;
    A->yp = 98;
    int key_down[10] = {0};
    int key_val[4] = {VK_LEFT,VK_RIGHT, VK_SPACE, VK_Q};
    int k;
        clearScreen();
        show_map(a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
        show_image2(A);
        show_image2(B);
        show_image2(C);
        show_image2(D);
        show_image2(E);
        show_image2(F);
        show_image(Biscuit, 0, 0);
        drawCmdWindow();
        for(i = 0; i<15;i++){
            A->yp -= 4;
            clearScreen();
            putStringLarge(large_font, 80, 55, "WRONG X", 12,12);
            putStringLarge(large_font, 80, 20, "RULE 4 OF 4", 14,14);
            show_map(a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
            show_image2(A);
            show_image2(B);
            show_image2(C);
            show_image2(D);
            show_image2(E);
            show_image2(F);
            show_image2(G);
            show_image(Biscuit, 0, 0);
            drawCmdWindow();
        }
        Sleep(300);
        for(i = 0; i<14;i++){
            A->xp += 10;
            clearScreen();
            putStringLarge(large_font, 80, 20, "RULE 4 OF 4", 14,14);
            show_map(a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
            show_image2(A);
            show_image2(B);
            show_image2(C);
            show_image2(D);
            show_image2(E);
            show_image2(F);
            show_image2(G);
            show_image(Biscuit, 0, 0);
            drawCmdWindow();
        }
        Sleep(300);
        playAudio(&audio[2]);
        for(i = 0; i<15+2;i++){
            A->yp += 4;
            clearScreen();
            putStringLarge(large_font, 80, 55, "WRONG X", 12,12);
            putStringLarge(large_font, 80, 20, "RULE 4 OF 4", 14,14);
            show_map(a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
            show_image2(A);
            show_image2(B);
            show_image2(C);
            show_image2(D);
            show_image2(E);
            show_image2(F);
            show_image2(G);
            show_image(Biscuit, 0, 0);
            drawCmdWindow();
        }
        for(j = 0; j < 1000000;j++){
        for(k = 0;k<4;k++){
        if(KEY_DOWN(key_val[k])&&!key_down[k]){
            key_down[k] = 1;
            switch(key_val[k]){
                case VK_RIGHT:
                    tutorial6();
                    break;
                case VK_LEFT:
                    tutorial4();
                    break;
                case VK_SPACE:
                    tutorial6();
                    break;
                case VK_Q:
                    return;//back to menu!!
                    break;
                default:
                    break;


            }
        }
        if(KEY_UP(key_val[k])&&key_down[k]){
            key_down[k] = 0;
        }
        }
        }
    }

}

int tutorial6(){
    int i,j;
    Audio audio[3];
    Font* large_font = read_font("font.txt");
    openAudioFile("bgmusic.wav", &audio[0]);
    openAudioFile("error_sound.wav", &audio[1]);
    openAudioFile("go_down_sound2.wav", &audio[2]);
    int a_p = 50, b_p = 120, c_p = 190, d_p = 260, e_p = 330, f_p = 400;
    initializeKeyInput();
    Image null_image;
    null_image.up = NULL;
    null_image.down = NULL;
    null_image.size = -1;
    null_image.disk_color = -1;
    Image *bg = read_image("newbg.pixel","newbg.color");
    Image *Biscuit=read_image("Question_1.pixel","Question_1.color");

    Image *A = read_image("B0.pixel","B0.color");
    Image *B = read_image("R1.pixel","R1.color");
    Image *C = read_image("R2.pixel","R2.color");
    Image *D = read_image("R0.pixel","R0.color");
    Image *E = read_image("B1.pixel","B1.color");
    Image *F = read_image("B2.pixel","B2.color");



    //COLOR CODES (DISK_COLOR, BG_COLOR)
    //YELLOW: 6, 14
    //BLUE: 10, 2
    //RED: 11, 9
    //GREEN: 4, 12



    A->xp = a_p-1*2;
    A->yp = 106;
    B->xp = a_p-2*2;
    B->yp = 114;
    C->xp = a_p-3*2;
    C->yp = 122;
    D->xp = c_p-1*2;
    D->yp = 122;
    E->xp = b_p-2*2;
    E->yp = 114;
    F->xp = b_p-3*2;
    F->yp = 122;


    while(1){
    A->xp = a_p-1*2;
    int key_down[10] = {0};
    int key_val[4] = {VK_LEFT,VK_RIGHT, VK_SPACE, VK_Q};
    int k;
        clearScreen();

        show_map(a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
        show_image2(A);
        show_image2(B);
        show_image2(C);
        show_image2(D);
        show_image2(E);
        show_image2(F);
        show_image(Biscuit, 0, 0);
        drawCmdWindow();
        for(i = 0; i<15;i++){
            A->yp -= 4;
            clearScreen();
            putStringLarge(large_font, 10, 35, "Press 1 to Choose the Disk On Rod 1", 15,15);
            putStringLarge(large_font, 80, 20, "OPTIONS", 14,14);
            show_map(a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
            show_image2(A);
            show_image2(B);
            show_image2(C);
            show_image2(D);
            show_image2(E);
            show_image2(F);
            show_image(Biscuit, 0, 0);
            drawCmdWindow();
        }Sleep(3000);

        for(i = 0; i<7;i++){
            A->xp += 10;
            clearScreen();
            putStringLarge(large_font, 20, 35, "Press Right to Shift Right", 15,15);
            putStringLarge(large_font, 80, 20, "OPTIONS", 14,14);
            show_map(a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
            show_image2(A);
            show_image2(B);
            show_image2(C);
            show_image2(D);
            show_image2(E);
            show_image2(F);
            show_image(Biscuit, 0, 0);
            drawCmdWindow();
        }
        Sleep(1500);
        for(i = 0; i<7;i++){
            A->xp += 10;
            clearScreen();
            putStringLarge(large_font, 20, 35, "Press Right to Shift Right", 15,15);
            putStringLarge(large_font, 80, 20, "OPTIONS", 14,14);
            show_map(a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
            show_image2(A);
            show_image2(B);
            show_image2(C);
            show_image2(D);
            show_image2(E);
            show_image2(F);
            show_image(Biscuit, 0, 0);
            drawCmdWindow();
        }
        Sleep(1500);
        for(i = 0; i<7;i++){
            A->xp -= 10;
            clearScreen();
            putStringLarge(large_font, 20, 35, "Press Left to Shift Left", 15,15);
            putStringLarge(large_font, 80, 20, "OPTIONS", 14,14);
            show_map(a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
            show_image2(A);
            show_image2(B);
            show_image2(C);
            show_image2(D);
            show_image2(E);
            show_image2(F);
            show_image(Biscuit, 0, 0);
            drawCmdWindow();
        }
        Sleep(1500);
        playAudio(&audio[2]);
        for(i = 0; i<15;i++){
            A->yp += 4;
            clearScreen();
            putStringLarge(large_font, 20, 35, "Press Space to Put Down", 15,15);
            putStringLarge(large_font, 80, 20, "OPTIONS", 14,14);
            show_map(a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
            show_image2(A);
            show_image2(B);
            show_image2(C);
            show_image2(D);
            show_image2(E);
            show_image2(F);
            show_image(Biscuit, 0, 0);
            drawCmdWindow();
        }
        for(j = 0; j < 5000000;j++){
        for(k = 0;k<4;k++){
        if(KEY_DOWN(key_val[k])&&!key_down[k]){
            key_down[k] = 1;
            switch(key_val[k]){
                case VK_RIGHT:
                    return 0;
                    break;
                case VK_LEFT:
                    tutorial5();
                    break;
                case VK_SPACE:
                    return 0;
                    break;
                case VK_Q:
                    return 0;//back to menu!!
                    break;
                default:
                    break;


            }
        }
        if(KEY_UP(key_val[k])&&key_down[k]){
            key_down[k] = 0;
        }
        }
        }
    }

}


int play1(void){
    move_times = 0;
    int z=1;
    int i,j;
    Audio audio[3];
    openAudioFile("bgmusic.wav", &audio[0]);
    openAudioFile("error_sound.wav", &audio[1]);
    openAudioFile("go_down_sound2.wav", &audio[2]);
    audio[0].loop = 1;
    playAudio(&audio[0]);
    int a_p = 50, b_p = 120, c_p = 190, d_p = 260, e_p = 330, f_p = 400;
    initializeKeyInput();
    Image null_image;
    null_image.up = NULL;
    null_image.down = NULL;
    null_image.size = -1;
    null_image.disk_color = -1;
    Image *bg = read_image("dawn_bg.pixel","dawn_bg.color");
    Image *A = read_image("G3.pixel","G3.color");
    Image *B = read_image("B0.pixel","B0.color");
    Image *C = read_image("B1.pixel","B1.color");
    Image *D = read_image("R0.pixel","R0.color");
    Image *E = read_image("G1.pixel","G1.color");
    Image *F = read_image("G2.pixel","G2.color");
    Image *G = read_image("B3.pixel","B3.color");
    Image *H = read_image("G0.pixel","G0.color");
    Image *I = read_image("y1.pixel","y1.color");
    Image *J = read_image("y2.pixel","y2.color");
    Image *K = read_image("R3.pixel","R3.color");
    Image *L = read_image("R2.pixel","R2.color");
    Image *M = read_image("R1.pixel","R1.color");
    Image *N = read_image("y0.pixel","y0.color");
    Image *O = read_image("y3.pixel","y3.color");
    Image *P = read_image("B2.pixel","B2.color");
    // set defaults
    //COLOR CODES (DISK_COLOR, BG_COLOR)
    //YELLOW: 6, 14
    //BLUE: 10, 2
    //RED: 11, 9
    //GREEN: 4, 12
    A->disk_color = 10;
    A->bg_color = 2;
    B->disk_color = 11;
    B->bg_color = 9;
    C->disk_color = 11;
    C->bg_color = 9;
    D->disk_color = 4;
    D->bg_color = 12;
    E->disk_color = 10;
    E->bg_color = 2;
    F->disk_color = 10;
    F->bg_color = 2;
    G->disk_color = 11;
    G->bg_color = 9;
    H->disk_color = 10;
    H->bg_color = 2;
    I->disk_color = 6;
    I->bg_color = 14;
    J->disk_color = 6;
    J->bg_color = 14;
    K->disk_color = 4;
    K->bg_color = 12;
    L->disk_color = 4;
    L->bg_color = 12;
    M->disk_color = 4;
    M->bg_color = 12;
    N->disk_color = 6;
    N->bg_color = 14;
    O->disk_color = 6;
    O->bg_color = 14;
    P->disk_color = 11;
    P->bg_color = 9;


    A->size = 3;
    B->size = 0;
    C->size = 1;
    D->size = 0;
    E->size = 1;
    F->size = 2;
    G->size = 3;
    H->size = 0;
    I->size = 1;
    J->size = 2;
    K->size = 3;
    L->size = 2;
    M->size = 1;
    N->size = 0;
    O->size = 3;
    P->size = 2;

    A->xp = a_p-4*2;
    A->yp = 106;
    B->xp = a_p-1*2;
    B->yp = 114;
    C->xp = a_p-2*2;
    C->yp = 122;
    D->xp = b_p-1*2;
    D->yp = 114;
    E->xp = b_p-2*2;
    E->yp = 122;
    F->xp = c_p-3*2;
    F->yp = 106;
    G->xp = c_p-4*2;
    G->yp = 114;
    H->xp = c_p-1*2;
    H->yp = 122;
    I->xp = d_p-2*2;
    I->yp = 106;
    J->xp = d_p-3*2;
    J->yp = 114;
    K->xp = d_p-4*2;
    K->yp = 122;
    L->xp = e_p-3*2;
    L->yp = 114;
    M->xp = e_p-2*2;
    M->yp = 122;
    N->xp = f_p-1*2;
    N->yp = 106;
    O->xp = f_p-4*2;
    O->yp = 114;
    P->xp = f_p-3*2;
    P->yp = 122;

    A->up = NULL;
    A->down = B;
    B->up = A;
    B->down = C;
    C->up = B;
    C->down = NULL;
    D->up = NULL;
    D->down = E;
    E->up = D;
    E->down = NULL;
    F->up = NULL;
    F->down = G;
    G->up = F;
    G->down = H;
    H->up = G;
    H->down = NULL;
    I->up = NULL;
    I->down = J;
    J->up = I;
    J->down = K;
    K->up = J;
    K->down = NULL;
    L->up = NULL;
    L->down = M;
    M->up = L;
    M->down = NULL;
    N->up = NULL;
    N->down = O;
    O->up = N;
    O->down = P;
    P->up = O;
    P->down = NULL;

    Image* top_1 = A;
    Image* top_2 = D;
    Image* top_3 = F;
    Image* top_4 = I;
    Image* top_5 = L;
    Image* top_6 = N;
    //~ set defaults




    int key_down[10] = {0};
    int key_val[10] = {VK_1, VK_2, VK_3, VK_4, VK_5, VK_6, VK_LEFT,VK_RIGHT, VK_SPACE, VK_Q};
    int k;

    int something_up = 0;
    Image* use_ip;
    Image* ipdc;
    Image* selected = NULL;
    int rod_num = 0;
    int board;
    int original;
    while(1){

        clearScreen();

        show_image(bg,0,0);
        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
        show_image2(A);
        show_image2(B);
        show_image2(C);
        show_image2(D);
        show_image2(E);
        show_image2(F);
        show_image2(G);
        show_image2(H);
        show_image2(I);
        show_image2(J);
        show_image2(K);
        show_image2(L);
        show_image2(M);
        show_image2(N);
        show_image2(O);
        show_image2(P);

        drawCmdWindow();

        for(k = 0;k<10;k++){
        if(KEY_DOWN(key_val[k])&&!key_down[k]){
            key_down[k] = 1;
            switch(key_val[k]){
                case VK_1:
                    if(something_up == 1){
                        playAudio(&audio[1]);
                        warn_string(-20,"Place the disk back to choose another one");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    }
                    if(top_1 == NULL) {
                        playAudio(&audio[1]);
                        warn_string(120,"Oh No There is nothing on Rod 1");
                        drawCmdWindow();
                        Sleep(2000);
                        break;

                    }
                    something_up = 1;
                    use_ip = top_1;
                    original = 1;

                    if(use_ip->down!=NULL)ipdc = (use_ip->down);
                    else ipdc = &null_image;

                    rod_num = 1;
                    for(i = 0; i < 10;i++){
                        use_ip = top_1;
                        for(j = 0; j< 10;j++){
                            if(use_ip->down!=NULL)ipdc = (use_ip->down);
                            use_ip->yp-=8;
                            if(ipdc->disk_color != use_ip->disk_color) break;
                            if(ipdc->size != use_ip->size + 1) break;
                            if(use_ip->down == NULL) break;
                            use_ip = use_ip->down;
                        }

                        clearScreen();
                        show_image(bg,0,0);
                        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
                        show_image2(A);
                        show_image2(B);
                        show_image2(C);
                        show_image2(D);
                        show_image2(E);
                        show_image2(F);
                        show_image2(G);
                        show_image2(H);
                        show_image2(I);
                        show_image2(J);
                        show_image2(K);
                        show_image2(L);
                        show_image2(M);
                        show_image2(N);
                        show_image2(O);
                        show_image2(P);
                        drawCmdWindow();
                        Sleep(1);
                    }
                    if(use_ip->down != NULL){
                            ipdc = use_ip->down;
                            ipdc->up = NULL;
                            top_1 = ipdc;

                    }else top_1 = NULL;
                    selected = use_ip;
                    top_1 = use_ip->down;
                    if(top_1 != NULL)top_1->up = NULL;
                    break;
                case VK_2:
                    if(something_up == 1){
                        playAudio(&audio[1]);
                        warn_string(-20,"Place the disk back to choose another one");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    }
                    if(top_2 == NULL) {
                        playAudio(&audio[1]);
                        warn_string(120,"Oh No There is nothing on Rod 2");
                        drawCmdWindow();
                        Sleep(2000);
                        break;

                    }
                    something_up = 1;
                    use_ip = top_2;
                    original = 2;

                    if(use_ip->down!=NULL)ipdc = (use_ip->down);
                    else ipdc = use_ip;

                    rod_num = 2;
                    for(i = 0; i < 10;i++){
                        use_ip = top_2;
                        for(j = 0; j< 10;j++){
                            if(use_ip->down!=NULL)ipdc = (use_ip->down);
                            use_ip->yp-=8;
                            if(ipdc->disk_color != use_ip->disk_color) break;
                            if(ipdc->size != use_ip->size + 1) break;
                            if(use_ip->down == NULL) break;
                            use_ip = use_ip->down;
                        }

                        clearScreen();
                        show_image(bg,0,0);
                        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
                        show_image2(A);
                        show_image2(B);
                        show_image2(C);
                        show_image2(D);
                        show_image2(E);
                        show_image2(F);
                        show_image2(G);
                        show_image2(H);
                        show_image2(I);
                        show_image2(J);
                        show_image2(K);
                        show_image2(L);
                        show_image2(M);
                        show_image2(N);
                        show_image2(O);
                        show_image2(P);
                        drawCmdWindow();
                        Sleep(1);
                    }
                    if(use_ip->down != NULL){
                            ipdc = use_ip->down;
                            ipdc->up = NULL;
                            top_2 = ipdc;

                    }else top_2 = NULL;
                    selected = use_ip;
                    top_2 = use_ip->down;
                    if(top_2 != NULL)top_2->up = NULL;
                    break;
                case VK_3:
                    if(something_up == 1){
                        playAudio(&audio[1]);
                        warn_string(-20,"Place the disk back to choose another one");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    }
                    if(top_3 == NULL) {
                        playAudio(&audio[1]);
                        warn_string(120,"Oh No There is nothing on Rod 3");
                        drawCmdWindow();
                        Sleep(2000);
                        break;

                    }
                    something_up = 1;
                    original = 3;
                    use_ip = top_3;

                    if(use_ip->down!=NULL)ipdc = (use_ip->down);
                    else ipdc = use_ip;

                    rod_num = 3;
                    for(i = 0; i < 10;i++){
                        use_ip = top_3;
                        for(j = 0; j< 10;j++){
                            if(use_ip->down!=NULL)ipdc = (use_ip->down);
                            use_ip->yp-=8;
                            if(ipdc->disk_color != use_ip->disk_color) break;
                            if(ipdc->size != use_ip->size + 1) break;
                            if(use_ip->down == NULL) break;
                            use_ip = use_ip->down;
                        }

                        clearScreen();
                        show_image(bg,0,0);
                        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
                        show_image2(A);
                        show_image2(B);
                        show_image2(C);
                        show_image2(D);
                        show_image2(E);
                        show_image2(F);
                        show_image2(G);
                        show_image2(H);
                        show_image2(I);
                        show_image2(J);
                        show_image2(K);
                        show_image2(L);
                        show_image2(M);
                        show_image2(N);
                        show_image2(O);
                        show_image2(P);
                        drawCmdWindow();
                        Sleep(1);
                    }
                    if(use_ip->down != NULL){
                            ipdc = use_ip->down;
                            ipdc->up = NULL;
                            top_3 = ipdc;

                    }else top_3 = NULL;
                    selected = use_ip;
                    top_3 = use_ip->down;
                    if(top_3 != NULL) top_3->up = NULL;
                    break;
                case VK_4:
                    if(something_up == 1){
                        playAudio(&audio[1]);
                        warn_string(-20,"Place the disk back to choose another one");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    }
                    if(top_4 == NULL) {
                        playAudio(&audio[1]);
                        warn_string(120,"Oh No There is nothing on Rod 4");
                        drawCmdWindow();
                        Sleep(2000);
                        break;

                    }
                    something_up = 1;
                    use_ip = top_4;
                    original = 4;

                    if(use_ip->down!=NULL)ipdc = (use_ip->down);
                    else ipdc = use_ip;

                    rod_num = 4;
                    for(i = 0; i < 10;i++){
                        use_ip = top_4;
                        for(j = 0; j< 10;j++){
                            if(use_ip->down!=NULL)ipdc = (use_ip->down);
                            use_ip->yp-=8;
                            if(ipdc->disk_color != use_ip->disk_color) break;
                            if(ipdc->size != use_ip->size + 1) break;
                            if(use_ip->down == NULL) break;
                            use_ip = use_ip->down;
                        }

                        clearScreen();
                        show_image(bg,0,0);
                        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
                        show_image2(A);
                        show_image2(B);
                        show_image2(C);
                        show_image2(D);
                        show_image2(E);
                        show_image2(F);
                        show_image2(G);
                        show_image2(H);
                        show_image2(I);
                        show_image2(J);
                        show_image2(K);
                        show_image2(L);
                        show_image2(M);
                        show_image2(N);
                        show_image2(O);
                        show_image2(P);
                        drawCmdWindow();
                        Sleep(1);
                    }
                    if(use_ip->down != NULL){
                            ipdc = use_ip->down;
                            ipdc->up = NULL;
                            top_4= ipdc;

                    }else top_4 = NULL;
                    selected = use_ip;
                    top_4 = use_ip->down;
                    if(top_4 != NULL) top_4->up = NULL;
                    break;
                case VK_5:
                    if(something_up == 1){
                        playAudio(&audio[1]);
                        warn_string(-20,"Place the disk back to choose another one");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    }
                    if(top_5 == NULL) {
                        playAudio(&audio[1]);
                        warn_string(120,"Oh No There is nothing on Rod 5");
                        drawCmdWindow();
                        Sleep(2000);
                        break;

                    }
                    something_up = 1;
                    use_ip = top_5;
                    original = 5;

                    if(use_ip->down!=NULL)ipdc = (use_ip->down);
                    else ipdc = use_ip;

                    rod_num = 5;
                    for(i = 0; i < 10;i++){
                        use_ip = top_5;
                        for(j = 0; j< 10;j++){
                            if(use_ip->down!=NULL)ipdc = (use_ip->down);
                            use_ip->yp-=8;
                            if(ipdc->disk_color != use_ip->disk_color) break;
                            if(ipdc->size != use_ip->size + 1) break;
                            if(use_ip->down == NULL) break;
                            use_ip = use_ip->down;
                        }

                        clearScreen();
                        show_image(bg,0,0);
                        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
                        show_image2(A);
                        show_image2(B);
                        show_image2(C);
                        show_image2(D);
                        show_image2(E);
                        show_image2(F);
                        show_image2(G);
                        show_image2(H);
                        show_image2(I);
                        show_image2(J);
                        show_image2(K);
                        show_image2(L);
                        show_image2(M);
                        show_image2(N);
                        show_image2(O);
                        show_image2(P);
                        drawCmdWindow();
                        Sleep(1);
                    }
                    if(use_ip->down != NULL){
                            ipdc = use_ip->down;
                            ipdc->up = NULL;
                            top_5 = ipdc;
                    }else top_5 = NULL;
                    selected = use_ip;
                    if(top_5 != NULL) top_5->up = NULL;
                    break;
                case VK_6:
                    if(something_up == 1){
                        playAudio(&audio[1]);
                        warn_string(-20,"Place the disk back to choose another one");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    }
                    if(top_6 == NULL) {
                        playAudio(&audio[1]);
                        warn_string(120,"Oh No There is nothing on Rod 6");
                        drawCmdWindow();
                        Sleep(2000);
                        break;

                    }
                    something_up = 1;
                    use_ip = top_6;
                    original = 6;

                    if(use_ip->down!=NULL)ipdc = (use_ip->down);
                    else ipdc = use_ip;

                    rod_num = 6;
                    for(i = 0; i < 10;i++){
                        use_ip = top_6;
                        for(j = 0; j< 10;j++){
                            if(use_ip->down!=NULL)ipdc = (use_ip->down);
                            use_ip->yp-=8;
                            if(ipdc->disk_color != use_ip->disk_color) break;
                            if(ipdc->size != use_ip->size + 1) break;
                            if(use_ip->down == NULL) break;
                            use_ip = use_ip->down;
                        }

                        clearScreen();
                        show_image(bg,0,0);
                        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
                        show_image2(A);
                        show_image2(B);
                        show_image2(C);
                        show_image2(D);
                        show_image2(E);
                        show_image2(F);
                        show_image2(G);
                        show_image2(H);
                        show_image2(I);
                        show_image2(J);
                        show_image2(K);
                        show_image2(L);
                        show_image2(M);
                        show_image2(N);
                        show_image2(O);
                        show_image2(P);
                        drawCmdWindow();
                        Sleep(1);
                    }
                    if(use_ip->down != NULL){
                            ipdc = use_ip->down;
                            ipdc->up = NULL;
                            top_6 = ipdc;

                    }else top_6 = NULL;
                    selected = use_ip;
                    top_6 = use_ip->down;
                    if(top_6 != NULL) top_6->up = NULL;
                    break;

                case VK_RIGHT:
                    if(selected == NULL){
                        playAudio(&audio[1]);
                        warn_string(80,"Pick Up Something");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    }
                    if(selected->xp > 390-10){
                        playAudio(&audio[1]);
                        warn_string(80,"Dead End  Try Left");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    };
                    rod_num++;
                    use_ip = selected;
                    for(i = 0; i< 4; i++){
                        use_ip = selected;
                        for(j = 0; j< 10; j++){
                            if(i!=3)use_ip->xp += 20;
                            else use_ip->xp += 10;
                            if(use_ip->up != NULL)use_ip = use_ip->up;
                            else break;
                        }
                        clearScreen();
                        show_image(bg,0,0);
                        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
                        show_image2(A);
                        show_image2(B);
                        show_image2(C);
                        show_image2(D);
                        show_image2(E);
                        show_image2(F);
                        show_image2(G);
                        show_image2(H);
                        show_image2(I);
                        show_image2(J);
                        show_image2(K);
                        show_image2(L);
                        show_image2(M);
                        show_image2(N);
                        show_image2(O);
                        show_image2(P);
                        drawCmdWindow();

                    }
                    break;
                case VK_LEFT:
                    if(selected == NULL){
                        playAudio(&audio[1]);
                        warn_string(80,"Pick Up Something");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    }
                    if(selected->xp < 50){
                        playAudio(&audio[1]);
                        warn_string(80,"Dead End  Try Right");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    }
                    use_ip = selected;
                    rod_num--;
                    for(i = 0; i< 4; i++){
                        use_ip = selected;
                        for(j = 0; j< 10; j++){
                            if(i != 3)use_ip->xp-=20;
                            else use_ip->xp-=10;
                            if(use_ip->up != NULL)use_ip = use_ip->up;
                            else break;
                        }
                        clearScreen();
                        show_image(bg,0,0);
                        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
                        show_image2(A);
                        show_image2(B);
                        show_image2(C);
                        show_image2(D);
                        show_image2(E);
                        show_image2(F);
                        show_image2(G);
                        show_image2(H);
                        show_image2(I);
                        show_image2(J);
                        show_image2(K);
                        show_image2(L);
                        show_image2(M);
                        show_image2(N);
                        show_image2(O);
                        show_image2(P);
                        drawCmdWindow();
                    }
                    break;
                case VK_SPACE:
                    if(something_up == 0) break;
                    switch(rod_num){
                        case 1:
                            use_ip = top_1;
                            break;
                        case 2:
                            use_ip = top_2;
                            break;
                        case 3:
                            use_ip = top_3;
                            break;
                        case 4:
                            use_ip = top_4;
                            break;
                        case 5:
                            use_ip = top_5;
                            break;
                        case 6:
                            use_ip = top_6;
                            break;
                        default:
                            break;
                    }
                    if(use_ip!= NULL && rod_num != original){
                        if(selected->disk_color != use_ip->disk_color){
                            playAudio(&audio[1]);
                            warn_string(70,"Different Color");
                            drawCmdWindow();
                            Sleep(2000);
                            break;

                        }
                        if(selected->size > use_ip->size){
                            playAudio(&audio[1]);
                            warn_string(-47,"You Cannot Place the Bigger One on the Smaller One");
                            drawCmdWindow();
                            Sleep(3000);
                            break;

                        }
                    }else if (rod_num == original){
                        if(use_ip == NULL) board = 130;
                    }else{
                        board = 130;
                    }
                    switch(rod_num){
                        case 1:
                            use_ip = top_1;
                            if(top_1 != NULL){
                                top_1->up = selected;
                                board = top_1->yp;
                            }
                            break;
                        case 2:
                            use_ip = top_2;
                            if(top_2 != NULL){
                                top_2->up = selected;
                                board = top_2->yp;
                            }
                            break;
                        case 3:
                            use_ip = top_3;
                            if(top_3 != NULL){
                                top_3->up = selected;
                                board = top_3->yp;
                            }
                            break;
                        case 4:
                            use_ip = top_4;
                            if(top_4 != NULL){
                                top_4->up = selected;
                                board = top_4->yp;
                            }
                            break;
                        case 5:
                            use_ip = top_5;
                            if(top_5 != NULL){
                                top_5->up = selected;
                                board = top_5->yp;
                            }
                            break;
                        case 6:
                            use_ip = top_6;
                            if(top_6 != NULL){
                                top_6->up = selected;
                                board = top_6->yp;
                            }
                            break;
                        default:
                            break;
                    }

                    //
                    use_ip = selected;
                    int count_num_in = 20;
                    for(i = 0; selected->yp < board-8; i++){
                        use_ip = selected;
                        for(j = 0; j< 10; j++){
                            use_ip->yp+=4;
                            if(use_ip->up != NULL)use_ip = use_ip->up;
                            else break;
                        }
                        clearScreen();
                        show_image(bg,0,0);
                        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
                        show_image2(A);
                        show_image2(B);
                        show_image2(C);
                        show_image2(D);
                        show_image2(E);
                        show_image2(F);
                        show_image2(G);
                        show_image2(H);
                        show_image2(I);
                        show_image2(J);
                        show_image2(K);
                        show_image2(L);
                        show_image2(M);
                        show_image2(N);
                        show_image2(O);
                        show_image2(P);
                        drawCmdWindow();
                    }
                    switch(rod_num){
                        case 1:
                            selected->down = top_1;
                            top_1 = use_ip;
                            break;
                        case 2:
                            selected->down = top_2;
                            top_2 = use_ip;
                            break;
                        case 3:
                            selected->down = top_3;
                            top_3 = use_ip;
                            break;
                        case 4:
                            selected->down = top_4;
                            top_4 = use_ip;
                            break;
                        case 5:
                            selected->down = top_5;
                            top_5 = use_ip;
                            break;
                        case 6:
                            selected->down = top_6;
                            top_6 = use_ip;
                            break;
                        default:
                            break;
                    }
                    selected = NULL;
                    something_up = 0;
                    int lose = 0;
                    if(rod_num!=original){
                        move_times++;
                        playAudio(&audio[2]);
                    }
                    //check if it wins
                    if(top_1!=NULL) {
                        use_ip = top_1;
                        for(i = 0; i< 10;i++){
                            if(use_ip->down !=NULL) ipdc = use_ip ->down;
                            else break;
                            if(use_ip->disk_color!=ipdc->disk_color) lose++;
                            else if(use_ip->size != ipdc->size-1) lose++;
                            use_ip = use_ip->down;
                        }
                        if(use_ip->size!=3) lose++;
                        if(lose != 0) break;

                    }
                    if(top_2!=NULL) {
                        use_ip = top_2;
                        for(i = 0; i< 10;i++){
                            if(use_ip->down !=NULL) ipdc = use_ip ->down;
                            else break;
                            if(use_ip->disk_color!=ipdc->disk_color) lose++;
                            else if(use_ip->size != ipdc->size-1) lose++;
                            use_ip = use_ip->down;
                        }
                        if(use_ip->size!=3) lose++;
                        if(lose != 0) break;

                    }
                    if(top_3!=NULL) {
                        use_ip = top_3;
                        for(i = 0; i< 10;i++){
                            if(use_ip->down !=NULL) ipdc = use_ip ->down;
                            else break;
                            if(use_ip->disk_color!=ipdc->disk_color) lose++;
                            else if(use_ip->size != ipdc->size-1) lose++;
                            use_ip = use_ip->down;
                        }
                        if(use_ip->size!=3) lose++;
                        if(lose != 0) break;

                    }
                    if(top_4!=NULL) {
                        use_ip = top_4;
                        for(i = 0; i< 10;i++){
                            if(use_ip->down !=NULL) ipdc = use_ip ->down;
                            else break;
                            if(use_ip->disk_color!=ipdc->disk_color) lose++;
                            else if(use_ip->size != ipdc->size-1) lose++;
                            use_ip = use_ip->down;
                        }
                        if(use_ip->size!=3) lose++;
                        if(lose != 0) break;

                    }
                    if(top_5!=NULL) {
                        use_ip = top_5;
                        for(i = 0; i< 10;i++){
                            if(use_ip->down !=NULL) ipdc = use_ip ->down;
                            else break;
                            if(use_ip->disk_color!=ipdc->disk_color) lose++;
                            else if(use_ip->size != ipdc->size-1) lose++;
                            use_ip = use_ip->down;
                        }
                        if(use_ip->size!=3) lose++;
                        if(lose != 0) break;

                    }
                    if(top_6!=NULL) {
                        use_ip = top_6;
                        for(i = 0; i< 10;i++){
                            if(use_ip->down !=NULL) ipdc = use_ip ->down;
                            else break;
                            if(use_ip->disk_color!=ipdc->disk_color) lose++;
                            else if(use_ip->size != ipdc->size-1) lose++;
                            use_ip = use_ip->down;
                        }
                        if(use_ip->size!=3) lose++;
                        if(lose != 0) break;

                    }
                    pauseAudio(&audio[0]);
                    win();
                    play2();
                    return 0;
                    break;// win!!
                case VK_Q:
                    pauseAudio(&audio[0]);
                    clearScreen();
                    Image *Biscuit=read_image("palm.pixel", "palm.color");
                    show_image(Biscuit, 0, 0);
                    drawCmdWindow();
                    return 0 ;
                    break;
                default:
                    break;


            }
        }
        if(KEY_UP(key_val[k])&&key_down[k]){
            key_down[k] = 0;
        }

        drawCmdWindow();
    }
   }
    return 0;
}

int play2(void){
    move_times = 0;
    int i,j;
    int z=2;
    Audio audio[3];
    openAudioFile("bgmusic.wav", &audio[0]);
    openAudioFile("error_sound.wav", &audio[1]);
    openAudioFile("go_down_sound2.wav", &audio[2]);
    audio[0].loop = 1;
    playAudio(&audio[0]);
    int a_p = 50, b_p = 120, c_p = 190, d_p = 260, e_p = 330, f_p = 400;
    initializeKeyInput();
    Image null_image;
    null_image.up = NULL;
    null_image.down = NULL;
    null_image.size = -1;
    null_image.disk_color = -1;
    Image *bg = read_image("day_bg.pixel","day_bg.color");
    Image *A = read_image("B1.pixel","B1.color");
    Image *B = read_image("B3.pixel","B3.color");
    Image *C = read_image("y0.pixel","y0.color");
    Image *D = read_image("G0.pixel","G0.color");
    Image *E = read_image("R3.pixel","R3.color");
    Image *F = read_image("y1.pixel","y1.color");
    Image *G = read_image("G2.pixel","G2.color");
    Image *H = read_image("R2.pixel","R2.color");
    Image *I = read_image("B2.pixel","B2.color");
    Image *J = read_image("G3.pixel","G3.color");
    Image *K = read_image("B0.pixel","B0.color");
    Image *L = read_image("y2.pixel","y2.color");
    Image *M = read_image("G1.pixel","G1.color");
    Image *N = read_image("y3.pixel","y3.color");
    Image *O = read_image("R0.pixel","R0.color");
    Image *P = read_image("R1.pixel","R1.color");
    // set defaults
    //COLOR CODES (DISK_COLOR, BG_COLOR)
    //YELLOW: 6, 14
    //BLUE: 10, 2
    //RED: 11, 9
    //GREEN: 4, 12
    A->disk_color = 10;
    B->disk_color = 10;
    C->disk_color = 6;
    D->disk_color = 4;
    E->disk_color = 11;
    F->disk_color = 6;
    G->disk_color = 4;
    H->disk_color = 11;
    I->disk_color = 10;
    J->disk_color = 4;
    K->disk_color = 10;
    L->disk_color = 6;
    M->disk_color = 4;
    N->disk_color = 6;
    O->disk_color = 11;
    P->disk_color = 11;


    A->size = 1;
    B->size = 3;
    C->size = 0;
    D->size = 0;
    E->size = 3;
    F->size = 1;
    G->size = 2;
    H->size = 2;
    I->size = 2;
    J->size = 3;
    K->size = 0;
    L->size = 2;
    M->size = 1;
    N->size = 3;
    O->size = 0;
    P->size = 1;

    A->xp = a_p-2*2;
    A->yp = 106;
    B->xp = a_p-4*2;
    B->yp = 114;
    C->xp = a_p-1*2;
    C->yp = 122;
    D->xp = b_p-1*2;
    D->yp = 114;
    E->xp = b_p-4*2;
    E->yp = 122;
    F->xp = c_p-2*2;
    F->yp = 106;
    G->xp = c_p-3*2;
    G->yp = 114;
    H->xp = c_p-3*2;
    H->yp = 122;
    I->xp = d_p-3*2;
    I->yp = 106;
    J->xp = d_p-4*2;
    J->yp = 114;
    K->xp = d_p-1*2;
    K->yp = 122;
    L->xp = e_p-3*2;
    L->yp = 114;
    M->xp = e_p-2*2;
    M->yp = 122;
    N->xp = f_p-4*2;
    N->yp = 106;
    O->xp = f_p-1*2;
    O->yp = 114;
    P->xp = f_p-2*2;
    P->yp = 122;

    A->up = NULL;
    A->down = B;
    B->up = A;
    B->down = C;
    C->up = B;
    C->down = NULL;
    D->up = NULL;
    D->down = E;
    E->up = D;
    E->down = NULL;
    F->up = NULL;
    F->down = G;
    G->up = F;
    G->down = H;
    H->up = G;
    H->down = NULL;
    I->up = NULL;
    I->down = J;
    J->up = I;
    J->down = K;
    K->up = J;
    K->down = NULL;
    L->up = NULL;
    L->down = M;
    M->up = L;
    M->down = NULL;
    N->up = NULL;
    N->down = O;
    O->up = N;
    O->down = P;
    P->up = O;
    P->down = NULL;

    Image* top_1 = A;
    Image* top_2 = D;
    Image* top_3 = F;
    Image* top_4 = I;
    Image* top_5 = L;
    Image* top_6 = N;
    //~ set defaults




    int key_down[10] = {0};
    int key_val[10] = {VK_1, VK_2, VK_3, VK_4, VK_5, VK_6, VK_LEFT,VK_RIGHT, VK_SPACE, VK_Q};
    int k;

    int something_up = 0;
    Image* use_ip;
    Image* ipdc;
    Image* selected = NULL;
    int rod_num = 0;
    int board;
    int original;
    while(1){

        clearScreen();

        show_image(bg,0,0);
        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
        show_image2(A);
        show_image2(B);
        show_image2(C);
        show_image2(D);
        show_image2(E);
        show_image2(F);
        show_image2(G);
        show_image2(H);
        show_image2(I);
        show_image2(J);
        show_image2(K);
        show_image2(L);
        show_image2(M);
        show_image2(N);
        show_image2(O);
        show_image2(P);

        drawCmdWindow();

        for(k = 0;k<10;k++){
        if(KEY_DOWN(key_val[k])&&!key_down[k]){
            key_down[k] = 1;
            switch(key_val[k]){
                case VK_1:
                    if(something_up == 1){
                        playAudio(&audio[1]);
                        warn_string(-20,"Place the disk back to choose another one");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    }
                    if(top_1 == NULL) {
                        playAudio(&audio[1]);
                        warn_string(120,"Oh No There is nothing on Rod 1");
                        drawCmdWindow();
                        Sleep(2000);
                        break;

                    }
                    something_up = 1;
                    use_ip = top_1;
                    original = 1;

                    if(use_ip->down!=NULL)ipdc = (use_ip->down);
                    else ipdc = &null_image;

                    rod_num = 1;
                    for(i = 0; i < 10;i++){
                        use_ip = top_1;
                        for(j = 0; j< 10;j++){
                            if(use_ip->down!=NULL)ipdc = (use_ip->down);
                            use_ip->yp-=8;
                            if(ipdc->disk_color != use_ip->disk_color) break;
                            if(ipdc->size != use_ip->size + 1) break;
                            if(use_ip->down == NULL) break;
                            use_ip = use_ip->down;
                        }

                        clearScreen();
                        show_image(bg,0,0);
                        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
                        show_image2(A);
                        show_image2(B);
                        show_image2(C);
                        show_image2(D);
                        show_image2(E);
                        show_image2(F);
                        show_image2(G);
                        show_image2(H);
                        show_image2(I);
                        show_image2(J);
                        show_image2(K);
                        show_image2(L);
                        show_image2(M);
                        show_image2(N);
                        show_image2(O);
                        show_image2(P);
                        drawCmdWindow();
                        Sleep(1);
                    }
                    if(use_ip->down != NULL){
                            ipdc = use_ip->down;
                            ipdc->up = NULL;
                            top_1 = ipdc;

                    }else top_1 = NULL;
                    selected = use_ip;
                    top_1 = use_ip->down;
                    if(top_1 != NULL)top_1->up = NULL;
                    break;
                case VK_2:
                    if(something_up == 1){
                        playAudio(&audio[1]);
                        warn_string(-20,"Place the disk back to choose another one");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    }
                    if(top_2 == NULL) {
                        playAudio(&audio[1]);
                        warn_string(120,"Oh No There is nothing on Rod 2");
                        drawCmdWindow();
                        Sleep(2000);
                        break;

                    }
                    something_up = 1;
                    use_ip = top_2;
                    original = 2;

                    if(use_ip->down!=NULL)ipdc = (use_ip->down);
                    else ipdc = use_ip;

                    rod_num = 2;
                    for(i = 0; i < 10;i++){
                        use_ip = top_2;
                        for(j = 0; j< 10;j++){
                            if(use_ip->down!=NULL)ipdc = (use_ip->down);
                            use_ip->yp-=8;
                            if(ipdc->disk_color != use_ip->disk_color) break;
                            if(ipdc->size != use_ip->size + 1) break;
                            if(use_ip->down == NULL) break;
                            use_ip = use_ip->down;
                        }

                        clearScreen();
                        show_image(bg,0,0);
                        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
                        show_image2(A);
                        show_image2(B);
                        show_image2(C);
                        show_image2(D);
                        show_image2(E);
                        show_image2(F);
                        show_image2(G);
                        show_image2(H);
                        show_image2(I);
                        show_image2(J);
                        show_image2(K);
                        show_image2(L);
                        show_image2(M);
                        show_image2(N);
                        show_image2(O);
                        show_image2(P);
                        drawCmdWindow();
                        Sleep(1);
                    }
                    if(use_ip->down != NULL){
                            ipdc = use_ip->down;
                            ipdc->up = NULL;
                            top_2 = ipdc;

                    }else top_2 = NULL;
                    selected = use_ip;
                    top_2 = use_ip->down;
                    if(top_2 != NULL)top_2->up = NULL;
                    break;
                case VK_3:
                    if(something_up == 1){
                        playAudio(&audio[1]);
                        warn_string(-20,"Place the disk back to choose another one");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    }
                    if(top_3 == NULL) {
                        playAudio(&audio[1]);
                        warn_string(120,"Oh No There is nothing on Rod 3");
                        drawCmdWindow();
                        Sleep(2000);
                        break;

                    }
                    something_up = 1;
                    original = 3;
                    use_ip = top_3;

                    if(use_ip->down!=NULL)ipdc = (use_ip->down);
                    else ipdc = use_ip;

                    rod_num = 3;
                    for(i = 0; i < 10;i++){
                        use_ip = top_3;
                        for(j = 0; j< 10;j++){
                            if(use_ip->down!=NULL)ipdc = (use_ip->down);
                            use_ip->yp-=8;
                            if(ipdc->disk_color != use_ip->disk_color) break;
                            if(ipdc->size != use_ip->size + 1) break;
                            if(use_ip->down == NULL) break;
                            use_ip = use_ip->down;
                        }

                        clearScreen();
                        show_image(bg,0,0);
                        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
                        show_image2(A);
                        show_image2(B);
                        show_image2(C);
                        show_image2(D);
                        show_image2(E);
                        show_image2(F);
                        show_image2(G);
                        show_image2(H);
                        show_image2(I);
                        show_image2(J);
                        show_image2(K);
                        show_image2(L);
                        show_image2(M);
                        show_image2(N);
                        show_image2(O);
                        show_image2(P);
                        drawCmdWindow();
                        Sleep(1);
                    }
                    if(use_ip->down != NULL){
                            ipdc = use_ip->down;
                            ipdc->up = NULL;
                            top_3 = ipdc;

                    }else top_3 = NULL;
                    selected = use_ip;
                    top_3 = use_ip->down;
                    if(top_3 != NULL) top_3->up = NULL;
                    break;
                case VK_4:
                    if(something_up == 1){
                        playAudio(&audio[1]);
                        warn_string(-20,"Place the disk back to choose another one");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    }
                    if(top_4 == NULL) {
                        playAudio(&audio[1]);
                        warn_string(120,"Oh No There is nothing on Rod 4");
                        drawCmdWindow();
                        Sleep(2000);
                        break;

                    }
                    something_up = 1;
                    use_ip = top_4;
                    original = 4;

                    if(use_ip->down!=NULL)ipdc = (use_ip->down);
                    else ipdc = use_ip;

                    rod_num = 4;
                    for(i = 0; i < 10;i++){
                        use_ip = top_4;
                        for(j = 0; j< 10;j++){
                            if(use_ip->down!=NULL)ipdc = (use_ip->down);
                            use_ip->yp-=8;
                            if(ipdc->disk_color != use_ip->disk_color) break;
                            if(ipdc->size != use_ip->size + 1) break;
                            if(use_ip->down == NULL) break;
                            use_ip = use_ip->down;
                        }

                        clearScreen();
                        show_image(bg,0,0);
                        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
                        show_image2(A);
                        show_image2(B);
                        show_image2(C);
                        show_image2(D);
                        show_image2(E);
                        show_image2(F);
                        show_image2(G);
                        show_image2(H);
                        show_image2(I);
                        show_image2(J);
                        show_image2(K);
                        show_image2(L);
                        show_image2(M);
                        show_image2(N);
                        show_image2(O);
                        show_image2(P);
                        drawCmdWindow();
                        Sleep(1);
                    }
                    if(use_ip->down != NULL){
                            ipdc = use_ip->down;
                            ipdc->up = NULL;
                            top_4= ipdc;

                    }else top_4 = NULL;
                    selected = use_ip;
                    top_4 = use_ip->down;
                    if(top_4 != NULL) top_4->up = NULL;
                    break;
                case VK_5:
                    if(something_up == 1){
                        playAudio(&audio[1]);
                        warn_string(-20,"Place the disk back to choose another one");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    }
                    if(top_5 == NULL) {
                        playAudio(&audio[1]);
                        warn_string(120,"Oh No There is nothing on Rod 5");
                        drawCmdWindow();
                        Sleep(2000);
                        break;

                    }
                    something_up = 1;
                    use_ip = top_5;
                    original = 5;

                    if(use_ip->down!=NULL)ipdc = (use_ip->down);
                    else ipdc = use_ip;

                    rod_num = 5;
                    for(i = 0; i < 10;i++){
                        use_ip = top_5;
                        for(j = 0; j< 10;j++){
                            if(use_ip->down!=NULL)ipdc = (use_ip->down);
                            use_ip->yp-=8;
                            if(ipdc->disk_color != use_ip->disk_color) break;
                            if(ipdc->size != use_ip->size + 1) break;
                            if(use_ip->down == NULL) break;
                            use_ip = use_ip->down;
                        }

                        clearScreen();
                        show_image(bg,0,0);
                        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
                        show_image2(A);
                        show_image2(B);
                        show_image2(C);
                        show_image2(D);
                        show_image2(E);
                        show_image2(F);
                        show_image2(G);
                        show_image2(H);
                        show_image2(I);
                        show_image2(J);
                        show_image2(K);
                        show_image2(L);
                        show_image2(M);
                        show_image2(N);
                        show_image2(O);
                        show_image2(P);
                        drawCmdWindow();
                        Sleep(1);
                    }
                    if(use_ip->down != NULL){
                            ipdc = use_ip->down;
                            ipdc->up = NULL;
                            top_5 = ipdc;
                    }else top_5 = NULL;
                    selected = use_ip;
                    if(top_5 != NULL)top_5->up = NULL;
                    break;
                case VK_6:
                    if(something_up == 1){
                        playAudio(&audio[1]);
                        warn_string(-20,"Place the disk back to choose another one");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    }
                    if(top_6 == NULL) {
                        playAudio(&audio[1]);
                        warn_string(120,"Oh No There is nothing on Rod 6");
                        drawCmdWindow();
                        Sleep(2000);
                        break;

                    }
                    something_up = 1;
                    use_ip = top_6;
                    original = 6;

                    if(use_ip->down!=NULL)ipdc = (use_ip->down);
                    else ipdc = use_ip;
                    if(top_5 != NULL) top_5->up = NULL;
                    rod_num = 6;
                    for(i = 0; i < 10;i++){
                        use_ip = top_6;
                        for(j = 0; j< 10;j++){
                            if(use_ip->down!=NULL)ipdc = (use_ip->down);
                            use_ip->yp-=8;
                            if(ipdc->disk_color != use_ip->disk_color) break;
                            if(ipdc->size != use_ip->size + 1) break;
                            if(use_ip->down == NULL) break;
                            use_ip = use_ip->down;
                        }

                        clearScreen();
                        show_image(bg,0,0);
                        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
                        show_image2(A);
                        show_image2(B);
                        show_image2(C);
                        show_image2(D);
                        show_image2(E);
                        show_image2(F);
                        show_image2(G);
                        show_image2(H);
                        show_image2(I);
                        show_image2(J);
                        show_image2(K);
                        show_image2(L);
                        show_image2(M);
                        show_image2(N);
                        show_image2(O);
                        show_image2(P);
                        drawCmdWindow();
                        Sleep(1);
                    }
                    if(use_ip->down != NULL){
                            ipdc = use_ip->down;
                            ipdc->up = NULL;
                            top_6 = ipdc;

                    }else top_6 = NULL;
                    selected = use_ip;
                    top_6 = use_ip->down;
                    if(top_6 != NULL) top_6->up = NULL;
                    break;

                case VK_RIGHT:
                    if(selected == NULL){
                        playAudio(&audio[1]);
                        warn_string(80,"Pick Up Something");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    }
                    if(selected->xp > 390-10){
                        playAudio(&audio[1]);
                        warn_string(80,"Dead End  Try Left");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    };
                    rod_num++;
                    use_ip = selected;
                    for(i = 0; i< 4; i++){
                        use_ip = selected;
                        for(j = 0; j< 10; j++){
                            if(i!=3)use_ip->xp += 20;
                            else use_ip->xp += 10;
                            if(use_ip->up != NULL)use_ip = use_ip->up;
                            else break;
                        }
                        clearScreen();
                        show_image(bg,0,0);
                        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
                        show_image2(A);
                        show_image2(B);
                        show_image2(C);
                        show_image2(D);
                        show_image2(E);
                        show_image2(F);
                        show_image2(G);
                        show_image2(H);
                        show_image2(I);
                        show_image2(J);
                        show_image2(K);
                        show_image2(L);
                        show_image2(M);
                        show_image2(N);
                        show_image2(O);
                        show_image2(P);
                        drawCmdWindow();

                    }
                    break;
                case VK_LEFT:
                    if(selected == NULL){
                        playAudio(&audio[1]);
                        warn_string(80,"Pick Up Something");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    }
                    if(selected->xp < 50){
                        playAudio(&audio[1]);
                        warn_string(80,"Dead End  Try Right");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    }
                    use_ip = selected;
                    rod_num--;
                    for(i = 0; i< 4; i++){
                        use_ip = selected;
                        for(j = 0; j< 10; j++){
                            if(i != 3)use_ip->xp-=20;
                            else use_ip->xp-=10;
                            if(use_ip->up != NULL)use_ip = use_ip->up;
                            else break;
                        }
                        clearScreen();
                        show_image(bg,0,0);
                        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
                        show_image2(A);
                        show_image2(B);
                        show_image2(C);
                        show_image2(D);
                        show_image2(E);
                        show_image2(F);
                        show_image2(G);
                        show_image2(H);
                        show_image2(I);
                        show_image2(J);
                        show_image2(K);
                        show_image2(L);
                        show_image2(M);
                        show_image2(N);
                        show_image2(O);
                        show_image2(P);
                        drawCmdWindow();
                    }
                    break;
                case VK_SPACE:
                    if(something_up == 0) break;
                    switch(rod_num){
                        case 1:
                            use_ip = top_1;
                            break;
                        case 2:
                            use_ip = top_2;
                            break;
                        case 3:
                            use_ip = top_3;
                            break;
                        case 4:
                            use_ip = top_4;
                            break;
                        case 5:
                            use_ip = top_5;
                            break;
                        case 6:
                            use_ip = top_6;
                            break;
                        default:
                            break;
                    }
                    if(use_ip!= NULL && rod_num != original){
                        if(selected->disk_color != use_ip->disk_color){
                            playAudio(&audio[1]);
                            warn_string(70,"Different Color");
                            drawCmdWindow();
                            Sleep(2000);
                            break;

                        }
                        if(selected->size > use_ip->size){
                            playAudio(&audio[1]);
                            warn_string(-47,"You Cannot Place the Bigger One on the Smaller One");
                            drawCmdWindow();
                            Sleep(3000);
                            break;

                        }
                    }else if (rod_num == original){
                        if(use_ip == NULL) board = 130;
                    }else{
                        board = 130;
                    }
                    switch(rod_num){
                        case 1:
                            use_ip = top_1;
                            if(top_1 != NULL){
                                top_1->up = selected;
                                board = top_1->yp;
                            }
                            break;
                        case 2:
                            use_ip = top_2;
                            if(top_2 != NULL){
                                top_2->up = selected;
                                board = top_2->yp;
                            }
                            break;
                        case 3:
                            use_ip = top_3;
                            if(top_3 != NULL){
                                top_3->up = selected;
                                board = top_3->yp;
                            }
                            break;
                        case 4:
                            use_ip = top_4;
                            if(top_4 != NULL){
                                top_4->up = selected;
                                board = top_4->yp;
                            }
                            break;
                        case 5:
                            use_ip = top_5;
                            if(top_5 != NULL){
                                top_5->up = selected;
                                board = top_5->yp;
                            }
                            break;
                        case 6:
                            use_ip = top_6;
                            if(top_6 != NULL){
                                top_6->up = selected;
                                board = top_6->yp;
                            }
                            break;
                        default:
                            break;
                    }

                    //
                    use_ip = selected;
                    int count_num_in = 20;
                    for(i = 0; selected->yp < board-8; i++){
                        use_ip = selected;
                        for(j = 0; j< 10; j++){
                            use_ip->yp+=4;
                            if(use_ip->up != NULL)use_ip = use_ip->up;
                            else break;
                        }
                        clearScreen();
                        show_image(bg,0,0);
                        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
                        show_image2(A);
                        show_image2(B);
                        show_image2(C);
                        show_image2(D);
                        show_image2(E);
                        show_image2(F);
                        show_image2(G);
                        show_image2(H);
                        show_image2(I);
                        show_image2(J);
                        show_image2(K);
                        show_image2(L);
                        show_image2(M);
                        show_image2(N);
                        show_image2(O);
                        show_image2(P);
                        drawCmdWindow();
                    }
                    switch(rod_num){
                        case 1:
                            selected->down = top_1;
                            top_1 = use_ip;
                            break;
                        case 2:
                            selected->down = top_2;
                            top_2 = use_ip;
                            break;
                        case 3:
                            selected->down = top_3;
                            top_3 = use_ip;
                            break;
                        case 4:
                            selected->down = top_4;
                            top_4 = use_ip;
                            break;
                        case 5:
                            selected->down = top_5;
                            top_5 = use_ip;
                            break;
                        case 6:
                            selected->down = top_6;
                            top_6 = use_ip;
                            break;
                        default:
                            break;
                    }
                    selected = NULL;
                    something_up = 0;
                    int lose = 0;
                    if(rod_num!=original){
                        move_times++;
                        playAudio(&audio[2]);
                    }
                    //check if it wins
                    if(top_1!=NULL) {
                        use_ip = top_1;
                        for(i = 0; i< 10;i++){
                            if(use_ip->down !=NULL) ipdc = use_ip ->down;
                            else break;
                            if(use_ip->disk_color!=ipdc->disk_color) lose++;
                            else if(use_ip->size != ipdc->size-1) lose++;
                            use_ip = use_ip->down;
                        }
                        if(use_ip->size!=3) lose++;
                        if(lose != 0) break;

                    }
                    if(top_2!=NULL) {
                        use_ip = top_2;
                        for(i = 0; i< 10;i++){
                            if(use_ip->down !=NULL) ipdc = use_ip ->down;
                            else break;
                            if(use_ip->disk_color!=ipdc->disk_color) lose++;
                            else if(use_ip->size != ipdc->size-1) lose++;
                            use_ip = use_ip->down;
                        }
                        if(use_ip->size!=3) lose++;
                        if(lose != 0) break;

                    }
                    if(top_3!=NULL) {
                        use_ip = top_3;
                        for(i = 0; i< 10;i++){
                            if(use_ip->down !=NULL) ipdc = use_ip ->down;
                            else break;
                            if(use_ip->disk_color!=ipdc->disk_color) lose++;
                            else if(use_ip->size != ipdc->size-1) lose++;
                            use_ip = use_ip->down;
                        }
                        if(use_ip->size!=3) lose++;
                        if(lose != 0) break;

                    }
                    if(top_4!=NULL) {
                        use_ip = top_4;
                        for(i = 0; i< 10;i++){
                            if(use_ip->down !=NULL) ipdc = use_ip ->down;
                            else break;
                            if(use_ip->disk_color!=ipdc->disk_color) lose++;
                            else if(use_ip->size != ipdc->size-1) lose++;
                            use_ip = use_ip->down;
                        }
                        if(use_ip->size!=3) lose++;
                        if(lose != 0) break;

                    }
                    if(top_5!=NULL) {
                        use_ip = top_5;
                        for(i = 0; i< 10;i++){
                            if(use_ip->down !=NULL) ipdc = use_ip ->down;
                            else break;
                            if(use_ip->disk_color!=ipdc->disk_color) lose++;
                            else if(use_ip->size != ipdc->size-1) lose++;
                            use_ip = use_ip->down;
                        }
                        if(use_ip->size!=3) lose++;
                        if(lose != 0) break;

                    }
                    if(top_6!=NULL) {
                        use_ip = top_6;
                        for(i = 0; i< 10;i++){
                            if(use_ip->down !=NULL) ipdc = use_ip ->down;
                            else break;
                            if(use_ip->disk_color!=ipdc->disk_color) lose++;
                            else if(use_ip->size != ipdc->size-1) lose++;
                            use_ip = use_ip->down;
                        }
                        if(use_ip->size!=3) lose++;
                        if(lose != 0) break;

                    }
                    pauseAudio(&audio[0]);
                    win();
                    play3();
                    return 0;
                    break;// win!!
                case VK_Q:
                    pauseAudio(&audio[0]);
                    clearScreen();
                    Image *Biscuit=read_image("palm.pixel", "palm.color");
                    show_image(Biscuit, 0, 0);
                    drawCmdWindow();
                    return 0 ;
                    break;
                default:
                    break;


            }
        }
        if(KEY_UP(key_val[k])&&key_down[k]){
            key_down[k] = 0;
        }

        drawCmdWindow();
    }
   }
    return 0;
}

int play3(void){
    move_times = 0;
    int i,j;
    int z = 3;
    Audio audio[3];
    openAudioFile("bgmusic.wav", &audio[0]);
    openAudioFile("error_sound.wav", &audio[1]);
    openAudioFile("go_down_sound2.wav", &audio[2]);
    audio[0].loop = 1;
    playAudio(&audio[0]);
    int a_p = 50, b_p = 120, c_p = 190, d_p = 260, e_p = 330, f_p = 400;
    initializeKeyInput();
    Image null_image;
    null_image.up = NULL;
    null_image.down = NULL;
    null_image.size = -1;
    null_image.disk_color = -1;
    Image *bg = read_image("night_bg.pixel","night_bg.color");
    Image *A = read_image("B2.pixel","B2.color");
    Image *B = read_image("R1.pixel","R1.color");
    Image *C = read_image("B3.pixel","B3.color");
    Image *D = read_image("B1.pixel","B1.color");
    Image *E = read_image("R2.pixel","R2.color");
    Image *F = read_image("y1.pixel","y1.color");
    Image *G = read_image("G3.pixel","G3.color");
    Image *H = read_image("R0.pixel","R0.color");
    Image *I = read_image("y2.pixel","y2.color");
    Image *J = read_image("y3.pixel","y3.color");
    Image *K = read_image("B0.pixel","B0.color");
    Image *L = read_image("R3.pixel","R3.color");
    Image *M = read_image("G0.pixel","G0.color");
    Image *N = read_image("y0.pixel","y0.color");
    Image *O = read_image("G1.pixel","G1.color");
    Image *P = read_image("G2.pixel","G2.color");
    // set defaults
    //COLOR CODES (DISK_COLOR, BG_COLOR)
    //YELLOW: 6, 14
    //BLUE: 10, 2
    //RED: 11, 9
    //GREEN: 4, 12
    A->disk_color = 10;
    B->disk_color = 11;
    C->disk_color = 10;
    D->disk_color = 10;
    E->disk_color = 11;
    F->disk_color = 6;
    G->disk_color = 4;
    H->disk_color = 11;
    I->disk_color = 6;
    J->disk_color = 6;
    K->disk_color = 10;
    L->disk_color = 11;
    M->disk_color = 4;
    N->disk_color = 6;
    O->disk_color = 4;
    P->disk_color = 4;


    A->size = 2;
    B->size = 1;
    C->size = 3;
    D->size = 1;
    E->size = 2;
    F->size = 1;
    G->size = 3;
    H->size = 0;
    I->size = 2;
    J->size = 3;
    K->size = 0;
    L->size = 3;
    M->size = 0;
    N->size = 0;
    O->size = 1;
    P->size = 2;

    A->xp = a_p-3*2;
    A->yp = 106;
    B->xp = a_p-2*2;
    B->yp = 114;
    C->xp = a_p-4*2;
    C->yp = 122;
    D->xp = b_p-2*2;
    D->yp = 114;
    E->xp = b_p-3*2;
    E->yp = 122;
    F->xp = c_p-2*2;
    F->yp = 106;
    G->xp = c_p-4*2;
    G->yp = 114;
    H->xp = c_p-1*2;
    H->yp = 122;
    I->xp = d_p-3*2;
    I->yp = 106;
    J->xp = d_p-4*2;
    J->yp = 114;
    K->xp = d_p-1*2;
    K->yp = 122;
    L->xp = e_p-4*2;
    L->yp = 114;
    M->xp = e_p-1*2;
    M->yp = 122;
    N->xp = f_p-1*2;
    N->yp = 106;
    O->xp = f_p-2*2;
    O->yp = 114;
    P->xp = f_p-3*2;
    P->yp = 122;

    A->up = NULL;
    A->down = B;
    B->up = A;
    B->down = C;
    C->up = B;
    C->down = NULL;
    D->up = NULL;
    D->down = E;
    E->up = D;
    E->down = NULL;
    F->up = NULL;
    F->down = G;
    G->up = F;
    G->down = H;
    H->up = G;
    H->down = NULL;
    I->up = NULL;
    I->down = J;
    J->up = I;
    J->down = K;
    K->up = J;
    K->down = NULL;
    L->up = NULL;
    L->down = M;
    M->up = L;
    M->down = NULL;
    N->up = NULL;
    N->down = O;
    O->up = N;
    O->down = P;
    P->up = O;
    P->down = NULL;

    Image* top_1 = A;
    Image* top_2 = D;
    Image* top_3 = F;
    Image* top_4 = I;
    Image* top_5 = L;
    Image* top_6 = N;
    //~ set defaults




    int key_down[10] = {0};
    int key_val[10] = {VK_1, VK_2, VK_3, VK_4, VK_5, VK_6, VK_LEFT,VK_RIGHT, VK_SPACE, VK_Q};
    int k;

    int something_up = 0;
    Image* use_ip;
    Image* ipdc;
    Image* selected = NULL;
    int rod_num = 0;
    int board;
    int original;
    while(1){

        clearScreen();

        show_image(bg,0,0);
        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
        show_image2(A);
        show_image2(B);
        show_image2(C);
        show_image2(D);
        show_image2(E);
        show_image2(F);
        show_image2(G);
        show_image2(H);
        show_image2(I);
        show_image2(J);
        show_image2(K);
        show_image2(L);
        show_image2(M);
        show_image2(N);
        show_image2(O);
        show_image2(P);

        drawCmdWindow();

        for(k = 0;k<10;k++){
        if(KEY_DOWN(key_val[k])&&!key_down[k]){
            key_down[k] = 1;
            switch(key_val[k]){
                case VK_1:
                    if(something_up == 1){
                        playAudio(&audio[1]);
                        warn_string(-20,"Place the disk back to choose another one");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    }
                    if(top_1 == NULL) {
                        playAudio(&audio[1]);
                        warn_string(120,"Oh No There is nothing on Rod 1");
                        drawCmdWindow();
                        Sleep(2000);
                        break;

                    }
                    something_up = 1;
                    use_ip = top_1;
                    original = 1;

                    if(use_ip->down!=NULL)ipdc = (use_ip->down);
                    else ipdc = &null_image;

                    rod_num = 1;
                    for(i = 0; i < 10;i++){
                        use_ip = top_1;
                        for(j = 0; j< 10;j++){
                            if(use_ip->down!=NULL)ipdc = (use_ip->down);
                            use_ip->yp-=8;
                            if(ipdc->disk_color != use_ip->disk_color) break;
                            if(ipdc->size != use_ip->size + 1) break;
                            if(use_ip->down == NULL) break;
                            use_ip = use_ip->down;
                        }

                        clearScreen();
                        show_image(bg,0,0);
                        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
                        show_image2(A);
                        show_image2(B);
                        show_image2(C);
                        show_image2(D);
                        show_image2(E);
                        show_image2(F);
                        show_image2(G);
                        show_image2(H);
                        show_image2(I);
                        show_image2(J);
                        show_image2(K);
                        show_image2(L);
                        show_image2(M);
                        show_image2(N);
                        show_image2(O);
                        show_image2(P);
                        drawCmdWindow();
                        Sleep(1);
                    }
                    if(use_ip->down != NULL){
                            ipdc = use_ip->down;
                            ipdc->up = NULL;
                            top_1 = ipdc;

                    }else top_1 = NULL;
                    selected = use_ip;
                    top_1 = use_ip->down;
                    if(top_1 != NULL)top_1->up = NULL;
                    break;
                case VK_2:
                    if(something_up == 1){
                        playAudio(&audio[1]);
                        warn_string(-20,"Place the disk back to choose another one");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    }
                    if(top_2 == NULL) {
                        playAudio(&audio[1]);
                        warn_string(120,"Oh No There is nothing on Rod 2");
                        drawCmdWindow();
                        Sleep(2000);
                        break;

                    }
                    something_up = 1;
                    use_ip = top_2;
                    original = 2;

                    if(use_ip->down!=NULL)ipdc = (use_ip->down);
                    else ipdc = use_ip;

                    rod_num = 2;
                    for(i = 0; i < 10;i++){
                        use_ip = top_2;
                        for(j = 0; j< 10;j++){
                            if(use_ip->down!=NULL)ipdc = (use_ip->down);
                            use_ip->yp-=8;
                            if(ipdc->disk_color != use_ip->disk_color) break;
                            if(ipdc->size != use_ip->size + 1) break;
                            if(use_ip->down == NULL) break;
                            use_ip = use_ip->down;
                        }

                        clearScreen();
                        show_image(bg,0,0);
                        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
                        show_image2(A);
                        show_image2(B);
                        show_image2(C);
                        show_image2(D);
                        show_image2(E);
                        show_image2(F);
                        show_image2(G);
                        show_image2(H);
                        show_image2(I);
                        show_image2(J);
                        show_image2(K);
                        show_image2(L);
                        show_image2(M);
                        show_image2(N);
                        show_image2(O);
                        show_image2(P);
                        drawCmdWindow();
                        Sleep(1);
                    }
                    if(use_ip->down != NULL){
                            ipdc = use_ip->down;
                            ipdc->up = NULL;
                            top_2 = ipdc;

                    }else top_2 = NULL;
                    selected = use_ip;
                    top_2 = use_ip->down;
                    if(top_2 != NULL)top_2->up = NULL;
                    break;
                case VK_3:
                    if(something_up == 1){
                        playAudio(&audio[1]);
                        warn_string(-20,"Place the disk back to choose another one");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    }
                    if(top_3 == NULL) {
                        playAudio(&audio[1]);
                        warn_string(120,"Oh No There is nothing on Rod 3");
                        drawCmdWindow();
                        Sleep(2000);
                        break;

                    }
                    something_up = 1;
                    original = 3;
                    use_ip = top_3;

                    if(use_ip->down!=NULL)ipdc = (use_ip->down);
                    else ipdc = use_ip;

                    rod_num = 3;
                    for(i = 0; i < 10;i++){
                        use_ip = top_3;
                        for(j = 0; j< 10;j++){
                            if(use_ip->down!=NULL)ipdc = (use_ip->down);
                            use_ip->yp-=8;
                            if(ipdc->disk_color != use_ip->disk_color) break;
                            if(ipdc->size != use_ip->size + 1) break;
                            if(use_ip->down == NULL) break;
                            use_ip = use_ip->down;
                        }

                        clearScreen();
                        show_image(bg,0,0);
                        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
                        show_image2(A);
                        show_image2(B);
                        show_image2(C);
                        show_image2(D);
                        show_image2(E);
                        show_image2(F);
                        show_image2(G);
                        show_image2(H);
                        show_image2(I);
                        show_image2(J);
                        show_image2(K);
                        show_image2(L);
                        show_image2(M);
                        show_image2(N);
                        show_image2(O);
                        show_image2(P);
                        drawCmdWindow();
                        Sleep(1);
                    }
                    if(use_ip->down != NULL){
                            ipdc = use_ip->down;
                            ipdc->up = NULL;
                            top_3 = ipdc;

                    }else top_3 = NULL;
                    selected = use_ip;
                    top_3 = use_ip->down;
                    if(top_3 != NULL) top_3->up = NULL;
                    break;
                case VK_4:
                    if(something_up == 1){
                        playAudio(&audio[1]);
                        warn_string(-20,"Place the disk back to choose another one");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    }
                    if(top_4 == NULL) {
                        playAudio(&audio[1]);
                        warn_string(120,"Oh No There is nothing on Rod 4");
                        drawCmdWindow();
                        Sleep(2000);
                        break;

                    }
                    something_up = 1;
                    use_ip = top_4;
                    original = 4;

                    if(use_ip->down!=NULL)ipdc = (use_ip->down);
                    else ipdc = use_ip;

                    rod_num = 4;
                    for(i = 0; i < 10;i++){
                        use_ip = top_4;
                        for(j = 0; j< 10;j++){
                            if(use_ip->down!=NULL)ipdc = (use_ip->down);
                            use_ip->yp-=8;
                            if(ipdc->disk_color != use_ip->disk_color) break;
                            if(ipdc->size != use_ip->size + 1) break;
                            if(use_ip->down == NULL) break;
                            use_ip = use_ip->down;
                        }

                        clearScreen();
                        show_image(bg,0,0);
                        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
                        show_image2(A);
                        show_image2(B);
                        show_image2(C);
                        show_image2(D);
                        show_image2(E);
                        show_image2(F);
                        show_image2(G);
                        show_image2(H);
                        show_image2(I);
                        show_image2(J);
                        show_image2(K);
                        show_image2(L);
                        show_image2(M);
                        show_image2(N);
                        show_image2(O);
                        show_image2(P);
                        drawCmdWindow();
                        Sleep(1);
                    }
                    if(use_ip->down != NULL){
                            ipdc = use_ip->down;
                            ipdc->up = NULL;
                            top_4= ipdc;

                    }else top_4 = NULL;
                    selected = use_ip;
                    top_4 = use_ip->down;
                    if(top_4 != NULL) top_4->up = NULL;
                    break;
                case VK_5:
                    if(something_up == 1){
                        playAudio(&audio[1]);
                        warn_string(-20,"Place the disk back to choose another one");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    }
                    if(top_5 == NULL) {
                        playAudio(&audio[1]);
                        warn_string(120,"Oh No There is nothing on Rod 5");
                        drawCmdWindow();
                        Sleep(2000);
                        break;

                    }
                    something_up = 1;
                    use_ip = top_5;
                    original = 5;

                    if(use_ip->down!=NULL)ipdc = (use_ip->down);
                    else ipdc = use_ip;

                    rod_num = 5;
                    for(i = 0; i < 10;i++){
                        use_ip = top_5;
                        for(j = 0; j< 10;j++){
                            if(use_ip->down!=NULL)ipdc = (use_ip->down);
                            use_ip->yp-=8;
                            if(ipdc->disk_color != use_ip->disk_color) break;
                            if(ipdc->size != use_ip->size + 1) break;
                            if(use_ip->down == NULL) break;
                            use_ip = use_ip->down;
                        }

                        clearScreen();
                        show_image(bg,0,0);
                        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
                        show_image2(A);
                        show_image2(B);
                        show_image2(C);
                        show_image2(D);
                        show_image2(E);
                        show_image2(F);
                        show_image2(G);
                        show_image2(H);
                        show_image2(I);
                        show_image2(J);
                        show_image2(K);
                        show_image2(L);
                        show_image2(M);
                        show_image2(N);
                        show_image2(O);
                        show_image2(P);
                        drawCmdWindow();
                        Sleep(1);
                    }
                    if(use_ip->down != NULL){
                            ipdc = use_ip->down;
                            ipdc->up = NULL;
                            top_5 = ipdc;
                    }else top_5 = NULL;
                    selected = use_ip;
                    if(top_5 != NULL) top_5->up = NULL;
                    break;
                case VK_6:
                    if(something_up == 1){
                        playAudio(&audio[1]);
                        warn_string(-20,"Place the disk back to choose another one");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    }
                    if(top_6 == NULL) {
                        playAudio(&audio[1]);
                        warn_string(120,"Oh No There is nothing on Rod 6");
                        drawCmdWindow();
                        Sleep(2000);
                        break;

                    }
                    something_up = 1;
                    use_ip = top_6;
                    original = 6;

                    if(use_ip->down!=NULL)ipdc = (use_ip->down);
                    else ipdc = use_ip;

                    rod_num = 6;
                    for(i = 0; i < 10;i++){
                        use_ip = top_6;
                        for(j = 0; j< 10;j++){
                            if(use_ip->down!=NULL)ipdc = (use_ip->down);
                            use_ip->yp-=8;
                            if(ipdc->disk_color != use_ip->disk_color) break;
                            if(ipdc->size != use_ip->size + 1) break;
                            if(use_ip->down == NULL) break;
                            use_ip = use_ip->down;
                        }

                        clearScreen();
                        show_image(bg,0,0);
                        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
                        show_image2(A);
                        show_image2(B);
                        show_image2(C);
                        show_image2(D);
                        show_image2(E);
                        show_image2(F);
                        show_image2(G);
                        show_image2(H);
                        show_image2(I);
                        show_image2(J);
                        show_image2(K);
                        show_image2(L);
                        show_image2(M);
                        show_image2(N);
                        show_image2(O);
                        show_image2(P);
                        drawCmdWindow();
                        Sleep(1);
                    }
                    if(use_ip->down != NULL){
                            ipdc = use_ip->down;
                            ipdc->up = NULL;
                            top_6 = ipdc;

                    }else top_6 = NULL;
                    selected = use_ip;
                    top_6 = use_ip->down;
                    if(top_6 != NULL) top_6->up = NULL;
                    break;

                case VK_RIGHT:
                    if(selected == NULL){
                        playAudio(&audio[1]);
                        warn_string(80,"Pick Up Something");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    }
                    if(selected->xp > 390-10){
                        playAudio(&audio[1]);
                        warn_string(80,"Dead End  Try Left");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    };
                    rod_num++;
                    use_ip = selected;
                    for(i = 0; i< 4; i++){
                        use_ip = selected;
                        for(j = 0; j< 10; j++){
                            if(i!=3)use_ip->xp += 20;
                            else use_ip->xp += 10;
                            if(use_ip->up != NULL)use_ip = use_ip->up;
                            else break;
                        }
                        clearScreen();
                        show_image(bg,0,0);
                        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
                        show_image2(A);
                        show_image2(B);
                        show_image2(C);
                        show_image2(D);
                        show_image2(E);
                        show_image2(F);
                        show_image2(G);
                        show_image2(H);
                        show_image2(I);
                        show_image2(J);
                        show_image2(K);
                        show_image2(L);
                        show_image2(M);
                        show_image2(N);
                        show_image2(O);
                        show_image2(P);
                        drawCmdWindow();

                    }
                    break;
                case VK_LEFT:
                    if(selected == NULL){
                        playAudio(&audio[1]);
                        warn_string(80,"Pick Up Something");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    }
                    if(selected->xp < 50){
                        playAudio(&audio[1]);
                        warn_string(80,"Dead End  Try Right");
                        drawCmdWindow();
                        Sleep(2000);
                        break;
                    }
                    use_ip = selected;
                    rod_num--;
                    for(i = 0; i< 4; i++){
                        use_ip = selected;
                        for(j = 0; j< 10; j++){
                            if(i != 3)use_ip->xp-=20;
                            else use_ip->xp-=10;
                            if(use_ip->up != NULL)use_ip = use_ip->up;
                            else break;
                        }
                        clearScreen();
                        show_image(bg,0,0);
                        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
                        show_image2(A);
                        show_image2(B);
                        show_image2(C);
                        show_image2(D);
                        show_image2(E);
                        show_image2(F);
                        show_image2(G);
                        show_image2(H);
                        show_image2(I);
                        show_image2(J);
                        show_image2(K);
                        show_image2(L);
                        show_image2(M);
                        show_image2(N);
                        show_image2(O);
                        show_image2(P);
                        drawCmdWindow();
                    }
                    break;
                case VK_SPACE:
                    if(something_up == 0) break;
                    switch(rod_num){
                        case 1:
                            use_ip = top_1;
                            break;
                        case 2:
                            use_ip = top_2;
                            break;
                        case 3:
                            use_ip = top_3;
                            break;
                        case 4:
                            use_ip = top_4;
                            break;
                        case 5:
                            use_ip = top_5;
                            break;
                        case 6:
                            use_ip = top_6;
                            break;
                        default:
                            break;
                    }
                    if(use_ip!= NULL && rod_num != original){
                        if(selected->disk_color != use_ip->disk_color){
                            playAudio(&audio[1]);
                            warn_string(70,"Different Color");
                            drawCmdWindow();
                            Sleep(2000);
                            break;

                        }
                        if(selected->size > use_ip->size){
                            playAudio(&audio[1]);
                            warn_string(-47,"You Cannot Place the Bigger One on the Smaller One");
                            drawCmdWindow();
                            Sleep(3000);
                            break;

                        }
                    }else if (rod_num == original){
                         if(use_ip == NULL) board = 130;
                    }else{
                        board = 130;
                    }
                    switch(rod_num){
                        case 1:
                            use_ip = top_1;
                            if(top_1 != NULL){
                                top_1->up = selected;
                                board = top_1->yp;
                            }
                            break;
                        case 2:
                            use_ip = top_2;
                            if(top_2 != NULL){
                                top_2->up = selected;
                                board = top_2->yp;
                            }
                            break;
                        case 3:
                            use_ip = top_3;
                            if(top_3 != NULL){
                                top_3->up = selected;
                                board = top_3->yp;
                            }
                            break;
                        case 4:
                            use_ip = top_4;
                            if(top_4 != NULL){
                                top_4->up = selected;
                                board = top_4->yp;
                            }
                            break;
                        case 5:
                            use_ip = top_5;
                            if(top_5 != NULL){
                                top_5->up = selected;
                                board = top_5->yp;
                            }
                            break;
                        case 6:
                            use_ip = top_6;
                            if(top_6 != NULL){
                                top_6->up = selected;
                                board = top_6->yp;
                            }
                            break;
                        default:
                            break;
                    }
                    //
                    use_ip = selected;
                    int count_num_in = 20;
                    for(i = 0; selected->yp < board-8; i++){
                        use_ip = selected;
                        for(j = 0; j< 10; j++){
                            use_ip->yp+=4;
                            if(use_ip->up != NULL)use_ip = use_ip->up;
                            else break;
                        }
                        clearScreen();
                        show_image(bg,0,0);
                        show_map2(z,a_p,b_p,c_p,d_p,e_p,f_p,130,50,50);
                        show_image2(A);
                        show_image2(B);
                        show_image2(C);
                        show_image2(D);
                        show_image2(E);
                        show_image2(F);
                        show_image2(G);
                        show_image2(H);
                        show_image2(I);
                        show_image2(J);
                        show_image2(K);
                        show_image2(L);
                        show_image2(M);
                        show_image2(N);
                        show_image2(O);
                        show_image2(P);
                        drawCmdWindow();
                    }
                    switch(rod_num){
                        case 1:
                            selected->down = top_1;
                            top_1 = use_ip;
                            break;
                        case 2:
                            selected->down = top_2;
                            top_2 = use_ip;
                            break;
                        case 3:
                            selected->down = top_3;
                            top_3 = use_ip;
                            break;
                        case 4:
                            selected->down = top_4;
                            top_4 = use_ip;
                            break;
                        case 5:
                            selected->down = top_5;
                            top_5 = use_ip;
                            break;
                        case 6:
                            selected->down = top_6;
                            top_6 = use_ip;
                            break;
                        default:
                            break;
                    }
                    selected = NULL;
                    something_up = 0;
                    int lose = 0;
                    if(rod_num!=original){
                        move_times++;
                        playAudio(&audio[2]);
                    }
                    //check if it wins
                    if(top_1!=NULL) {
                        use_ip = top_1;
                        for(i = 0; i< 10;i++){
                            if(use_ip->down !=NULL) ipdc = use_ip ->down;
                            else break;
                            if(use_ip->disk_color!=ipdc->disk_color) lose++;
                            else if(use_ip->size != ipdc->size-1) lose++;
                            use_ip = use_ip->down;
                        }
                        if(use_ip->size!=3) lose++;
                        if(lose != 0) break;

                    }
                    if(top_2!=NULL) {
                        use_ip = top_2;
                        for(i = 0; i< 10;i++){
                            if(use_ip->down !=NULL) ipdc = use_ip ->down;
                            else break;
                            if(use_ip->disk_color!=ipdc->disk_color) lose++;
                            else if(use_ip->size != ipdc->size-1) lose++;
                            use_ip = use_ip->down;
                        }
                        if(use_ip->size!=3) lose++;
                        if(lose != 0) break;

                    }
                    if(top_3!=NULL) {
                        use_ip = top_3;
                        for(i = 0; i< 10;i++){
                            if(use_ip->down !=NULL) ipdc = use_ip ->down;
                            else break;
                            if(use_ip->disk_color!=ipdc->disk_color) lose++;
                            else if(use_ip->size != ipdc->size-1) lose++;
                            use_ip = use_ip->down;
                        }
                        if(use_ip->size!=3) lose++;
                        if(lose != 0) break;

                    }
                    if(top_4!=NULL) {
                        use_ip = top_4;
                        for(i = 0; i< 10;i++){
                            if(use_ip->down !=NULL) ipdc = use_ip ->down;
                            else break;
                            if(use_ip->disk_color!=ipdc->disk_color) lose++;
                            else if(use_ip->size != ipdc->size-1) lose++;
                            use_ip = use_ip->down;
                        }
                        if(use_ip->size!=3) lose++;
                        if(lose != 0) break;

                    }
                    if(top_5!=NULL) {
                        use_ip = top_5;
                        for(i = 0; i< 10;i++){
                            if(use_ip->down !=NULL) ipdc = use_ip ->down;
                            else break;
                            if(use_ip->disk_color!=ipdc->disk_color) lose++;
                            else if(use_ip->size != ipdc->size-1) lose++;
                            use_ip = use_ip->down;
                        }
                        if(use_ip->size!=3) lose++;
                        if(lose != 0) break;

                    }
                    if(top_6!=NULL) {
                        use_ip = top_6;
                        for(i = 0; i< 10;i++){
                            if(use_ip->down !=NULL) ipdc = use_ip ->down;
                            else break;
                            if(use_ip->disk_color!=ipdc->disk_color) lose++;
                            else if(use_ip->size != ipdc->size-1) lose++;
                            use_ip = use_ip->down;
                        }
                        if(use_ip->size!=3) lose++;
                        if(lose != 0) break;

                    }
                    pauseAudio(&audio[0]);
                    win();
                    return 0;
                    break;// win!!
                case VK_Q:
                    pauseAudio(&audio[0]);
                    clearScreen();
                    Image *Biscuit=read_image("palm.pixel", "palm.color");
                    show_image(Biscuit, 0, 0);
                    drawCmdWindow();
                    return 0 ;
                    break;
                default:
                    break;


            }
        }
        if(KEY_UP(key_val[k])&&key_down[k]){
            key_down[k] = 0;
        }

        drawCmdWindow();
    }
   }
    return 0;
}




void start(void)
{
    int cf=0;
    char ch;
    Audio audio[1];
    openAudioFile("start_music.wav", &audio[0]);
    playAudio(&audio[0]);
    Font *large_font = read_font("fontstart.txt");
    initializeKeyInput();
    clearScreen();

    Image *Biscuit=read_image("Start_0.pixel", "Start_0.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(500);
    clearScreen();
    Biscuit=read_image("Start_1_1.pixel", "Start_1_1.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(500);
    clearScreen();
    Biscuit=read_image("Start_1_2.pixel", "Start_1_2.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(500);
    clearScreen();
    Biscuit=read_image("Start_1_3.pixel", "Start_1_3.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(150);
    clearScreen();
    Biscuit=read_image("Start_2_1.pixel", "Start_2_1.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(500);
    clearScreen();
    Biscuit=read_image("Start_2_2.pixel", "Start_2_2.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(500);
    clearScreen();
    Biscuit=read_image("Start_3.pixel", "Start_3.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(500);

    large_font = read_font("font.txt");
    while (1) {

        cf = (cf+1)%2;
        if (cf==0) {
            putStringLarge(large_font, 125+50, 20+100, "Press SPACE to continue" , 15, 0);
        }
        else {
            putStringLarge(large_font, 125+50, 20+100, "Press SPACE to continue", 0, 0);
        }
        drawCmdWindow();

        if (waitForKeyDown(0.1)) {
            ch=getKeyEventASCII();
            if (ch==' '){
                pauseAudio(&audio[0]);
                break;
            }
        }
        Sleep(300);
    }
    clearScreen();
    drawCmdWindow();
    return;
}

void end(void)
{
    int cf1=0, cf2=0;
    char ch;
    Font *large_font = read_font("font.txt");
    initializeKeyInput();
    clearScreen();
    drawCmdWindow();

    Image *Biscuit=read_image("GameOver_1_1.pixel", "GameOver_1_1.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(100);
    Biscuit=read_image("GameOver_1_2.pixel", "GameOver_1_2.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(100);
    Biscuit=read_image("GameOver_1_3.pixel", "GameOver_1_3.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(100);
    Biscuit=read_image("GameOver_2_1.pixel", "GameOver_2_1.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(100);
    Biscuit=read_image("GameOver_2_2.pixel", "GameOver_2_2.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(100);
    Biscuit=read_image("GameOver_2_3.pixel", "GameOver_2_3.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(100);
    Biscuit=read_image("GameOver_3_1.pixel", "GameOver_3_1.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(100);
    Biscuit=read_image("GameOver_3_2.pixel", "GameOver_3_2.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(100);
    Biscuit=read_image("GameOver_3_3.pixel", "GameOver_3_3.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(100);
    Biscuit=read_image("GameOver_4_1.pixel", "GameOver_4_1.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(100);
    Biscuit=read_image("GameOver_4_2.pixel", "GameOver_4_2.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(100);
    Biscuit=read_image("GameOver_4_3.pixel", "GameOver_4_3.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(100);
    Biscuit=read_image("GameOver_5_1.pixel", "GameOver_5_1.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(100);
    Biscuit=read_image("GameOver_5_2.pixel", "GameOver_5_2.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(100);
    Biscuit=read_image("GameOver_5_3.pixel", "GameOver_5_3.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(100);
    Biscuit=read_image("GameOver_6_1.pixel", "GameOver_6_1.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(100);
    Biscuit=read_image("GameOver_6_2.pixel", "GameOver_6_2.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(100);
    Biscuit=read_image("GameOver_6_3.pixel", "GameOver_6_3.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(100);
    Biscuit=read_image("GameOver_7_1.pixel", "GameOver_7_1.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(100);
    Biscuit=read_image("GameOver_7_2.pixel", "GameOver_7_2.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(100);
    Biscuit=read_image("GameOver_7_3.pixel", "GameOver_7_3.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(100);
    Biscuit=read_image("GameOver_8_1.pixel", "GameOver_8_1.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(100);
    Biscuit=read_image("GameOver_8_2.pixel", "GameOver_8_2.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(100);
    Biscuit=read_image("GameOver_8_3.pixel", "GameOver_8_3.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();
    Sleep(100);


    while (1) {
        cf1=(cf1+1)%2;
        if (cf1==0) {
            putStringLarge(large_font, 8+67, 10+76, "Put", 10, 1);
            putStringLarge(large_font, 40+67, 10+76, "SPACE", 10, 1);
            putStringLarge(large_font, 88+67, 10+76, "To", 10, 1);
            putStringLarge(large_font, 112+67, 10+76, "Continue", 10, 1);
            drawCmdWindow();  ///update window immediately
            Sleep(200);
        }
        else {
            putStringLarge(large_font, 8+67, 10+76, "Put", 12, 1);
            putStringLarge(large_font, 40+67, 10+76, "SPACE", 12, 1);
            putStringLarge(large_font, 88+67, 10+76, "To", 12, 1);
            putStringLarge(large_font, 112+67, 10+76, "Continue", 12, 1);
            drawCmdWindow();  ///update window immediately
            Sleep(200);
            Sleep(200);
        }

        if (waitForKeyDown(0.1)) {
            ch=getKeyEventASCII();
            if (ch==' '){
                clearScreen();
                drawCmdWindow();
                break;
            }
        }
        Sleep(300);
    }

    drawCmdWindow();
    return;
}

void menu(void){

    int cf = 0,k,flag=0;//choose flag
    int key_down[3] = {0};
    int key_val[3] = {VK_UP, VK_DOWN,VK_SPACE};
    Font *large_font = read_font("font.txt");
    clearScreen();
    drawCmdWindow();

    Image *Biscuit=read_image("palm.pixel", "palm.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();


    while (1) { /* Image loop */
    initializeKeyInput();

    for(k = 0;k<3;k++){
        if(KEY_DOWN(key_val[k])&&!key_down[k]){
            key_down[k] = 1;

            switch(key_val[k]){
                case VK_UP:
                    flag = (flag+3)%4;
                    break;
                case VK_DOWN:
                    flag = (flag+1)%4;
                    break;
                case VK_SPACE:
                    flag = flag;

                    if(flag == 3) {
                        end();
                        show_image(Biscuit, 0, 0);
                        drawCmdWindow();
                        return;
                    }
                    else if(flag == 2) {
                        tutorial1();
                        show_image(Biscuit, 0, 0);
                        drawCmdWindow();
                    }
                    else if(flag == 1) {
                        mode();
                        show_image(Biscuit, 0, 0);
                        drawCmdWindow();
                    }
                    else if(flag == 0) play1();
                    break;
            }
        }
        if(KEY_UP(key_val[k])&&key_down[k]){
            key_down[k] = 0;
        }

    }
    if(flag == 0){
        cf = (cf+1)%2;

        if(cf==0) {
            putStringLarge(large_font, 62+110, 6+30, "PLAY", 10, 4);
            putStringLarge(large_font, 52+110, 15+40, "OPTIONS", 10, 2);
            putStringLarge(large_font, 59+110-12, 24+50, "TUTORIAL", 10, 2);
            putStringLarge(large_font, 62+110, 33+60, "EXIT", 10, 2);
        }
        else   putStringLarge(large_font, 62+110, 6+30, "PLAY", 10, 12);
        Sleep(200);
    }
    else if(flag == 1){
        cf = (cf+1)%2;
        if(cf==0) {
            putStringLarge(large_font, 62+110, 6+30, "PLAY", 10, 2);
            putStringLarge(large_font, 52+110, 15+40, "OPTIONS", 10, 4);
            putStringLarge(large_font, 59+110-12, 24+50, "TUTORIAL", 10, 2);
            putStringLarge(large_font, 62+110, 33+60, "EXIT", 10, 2);
        }
        else   putStringLarge(large_font, 52+110, 15+40, "OPTIONS", 10, 12);
        Sleep(200);
    }
    else if(flag == 2){
        cf = (cf+1)%2;
        if(cf==0) {
            putStringLarge(large_font, 62+110, 6+30, "PLAY", 10, 2);
            putStringLarge(large_font, 52+110, 15+40, "OPTIONS", 10, 2);
            putStringLarge(large_font, 59+110-12, 24+50, "TUTORIAL", 10, 4);
            putStringLarge(large_font, 62+110, 33+60, "EXIT", 10, 2);
        }
        else    putStringLarge(large_font, 59+110-12, 24+50, "TUTORIAL", 10, 12);

        Sleep(200);
    }
    else if(flag == 3){
        cf = (cf+1)%2;
        if(cf==0) {
            putStringLarge(large_font, 62+110, 6+30, "PLAY", 10, 2);
            putStringLarge(large_font, 52+110, 15+40, "OPTIONS", 10, 2);
            putStringLarge(large_font, 59+110-12, 24+50, "TUTORIAL", 10, 2);
            putStringLarge(large_font, 62+110, 33+60, "EXIT", 10, 4);
        }
        else    putStringLarge(large_font, 62+110, 33+60, "EXIT", 10, 12);

        Sleep(200);
    }
    drawCmdWindow();
    }
}

void mode (void){
    int cf = 0,k,flag=0;//choose flag
    int key_down[6] = {0};
    int key_val[3] = {VK_UP, VK_DOWN,VK_SPACE};
    Font *large_font = read_font("font.txt");
    clearScreen();

    Image *Biscuit=read_image("Option.pixel", "Option.color");
    show_image(Biscuit, 0, 0);
    drawCmdWindow();

    while(1){
    initializeKeyInput();
    Image *Biscuit=read_image("Option.pixel", "Option.color");
    for(k = 0;k<6;k++){
        if(KEY_DOWN(key_val[k])&&!key_down[k]){
            key_down[k] = 1;

            switch(key_val[k]){
                case VK_UP:
                    flag = (flag+3)%4;
                    break;
                case VK_DOWN:
                    flag = (flag+1)%4;
                    break;
                case VK_SPACE:
                    flag = flag;
                    if (flag == 3){
                        clearScreen();
                        return ;
                    }

                    else if(flag ==2){
                            play3();
                            //Image *Biscuit=read_image("Option.pixel", "Option.color");
                            show_image(Biscuit, 0, 0);
                            drawCmdWindow();
                    }
                    else if(flag ==1){
                            play2();
                            show_image(Biscuit, 0, 0);
                            drawCmdWindow();
                    }
                    else if(flag ==0){
                            play1();

                            show_image(Biscuit, 0, 0);
                            drawCmdWindow();
                    }
                        break;
            }
        }
        if(KEY_UP(key_val[k])&&key_down[k]){
            key_down[k] = 0;
        }

    }

    if(flag == 0){
        cf = (cf+1)%2;
        if(cf==0) {
            putStringLarge(large_font, 225, 36,  "LEVEL 1", 10, 4);
            putStringLarge(large_font, 225, 55, "LEVEL 2", 10, 4);
            putStringLarge(large_font, 225, 74, "LEVEL 3", 10, 4);
            putStringLarge(large_font, 217, 93, "LAST PAGE", 10, 4);
        }
        else   putStringLarge(large_font, 225, 36,  "LEVEL 1", 10, 12);
        drawCmdWindow();
        Sleep(200);
    }
    else if(flag == 1){
        cf = (cf+1)%2;
        if(cf==0) {
            putStringLarge(large_font, 225, 36,  "LEVEL 1", 10, 4);
            putStringLarge(large_font, 225, 55, "LEVEL 2", 10, 4);
            putStringLarge(large_font, 225, 74, "LEVEL 3", 10, 4);
            putStringLarge(large_font, 217, 93, "LAST PAGE", 10, 4);
        }
        else   putStringLarge(large_font, 225, 55, "LEVEL 2", 10, 12);
        Sleep(200);
    }
    else if(flag == 2){
        cf = (cf+1)%2;
        if(cf==0) {
            putStringLarge(large_font, 225, 36,  "LEVEL 1", 10, 4);
            putStringLarge(large_font, 225, 55, "LEVEL 2", 10, 4);
            putStringLarge(large_font, 225, 74, "LEVEL 3", 10, 4);
            putStringLarge(large_font, 217, 93, "LAST PAGE", 10, 4);
        }
        else   putStringLarge(large_font, 225, 74, "LEVEL 3", 10, 12);
        Sleep(200);
    }
    else if(flag == 3){
        cf = (cf+1)%2;
        if(cf==0) {
            putStringLarge(large_font, 225, 36,  "LEVEL 1", 10, 4);
            putStringLarge(large_font, 225, 55, "LEVEL 2", 10, 4);
            putStringLarge(large_font, 225, 74, "LEVEL 3", 10, 4);
            putStringLarge(large_font, 217, 93, "LAST PAGE", 10, 4);
        }
        else   putStringLarge(large_font, 217, 93, "LAST PAGE", 10, 12);
        Sleep(200);
    }

    drawCmdWindow();
    }
}



void show_map( int a,int b, int c, int d, int e, int f, int base, int width, int height){
    int i;

    int w = width/2;
    int color = 15;//color = 15 white
    Font* large_font = read_font("font.txt");
    putStringLarge(large_font, 300, 20, "Press Q to Quit", 7, 7);
    int num_color = 2;

    putStringLarge(large_font, 50, 10, "HAWAII TOWER TUTORIAL", 14,14);
    putStringLarge(large_font, 50-3, 133, "1", num_color, num_color);
    putStringLarge(large_font, 120-3, 133, "2", num_color, num_color);
    putStringLarge(large_font, 190-3, 133, "3", num_color, num_color);





    for(i = -w; i<w; i++){
        putString(a+i,base,"0",color,color);
        putString(a+i,base+1,"0",color,color);
    }
    for(i = -w; i<w; i++){
        putString(b+i,base,"0",color,color);
        putString(b+i,base+1,"0",color,color);
    }
    for(i = -w; i<w; i++){
        putString(c+i,base,"0",color,color);
        putString(c+i,base+1,"0",color,color);
    }
    for(i = 0; i<height; i++){
        putString(a,base-i,"0",color,color);
        putString(a+1,base-i,"0",color,color);
        putString(a-1,base-i,"0",color,color);
    }
    for(i = 0; i<height; i++){
        putString(b,base-i,"0",color,color);
        putString(b+1,base-i,"0",color,color);
        putString(b-1,base-i,"0",color,color);
    }
    for(i = 0; i<height; i++){
        putString(c,base-i,"0",color,color);
        putString(c+1,base-i,"0",color,color);
        putString(c-1,base-i,"0",color,color);
    }
}



void show_map2(int play_num,int a,int b, int c, int d, int e, int f, int base, int width, int h){
    int i;
    int height = h-4;
    int q, m;

    if(play_num == 1){
        q=1;
        m=12;
    }else if(play_num == 2){
        q=1;
        m=12;
    }else if(play_num == 3){
        q=7;
        m=14;
    }
    int w = width/2;
    int color = 15;//color = 15 white
    Font* large_font = read_font("font.txt");
    char string[8] = "move 00";
    string[5] = move_times/10 + '0';
    string[6] = move_times%10 + '0';
    putStringLarge(large_font, 380, 10, string, m, m);
    putStringLarge(large_font, 380, 25, "Press Q", q, q);
    putStringLarge(large_font, 380, 35, "to Quit", q, q);
    int num_color = 2;
    putStringLarge(large_font, 50-3, 133, "1", num_color, num_color);
    putStringLarge(large_font, 120-3, 133, "2", num_color, num_color);
    putStringLarge(large_font, 190-3, 133, "3", num_color, num_color);
    putStringLarge(large_font, 260-3, 133, "4", num_color, num_color);
    putStringLarge(large_font, 330-3, 133, "5", num_color, num_color);
    putStringLarge(large_font, 400-3, 133, "6", num_color, num_color);





    for(i = -w; i<w; i++){
        putString(a+i,base,"0",color,color);
        putString(a+i,base+1,"0",color,color);
    }
    for(i = -w; i<w; i++){
        putString(b+i,base,"0",color,color);
        putString(b+i,base+1,"0",color,color);
    }
    for(i = -w; i<w; i++){
        putString(c+i,base,"0",color,color);
        putString(c+i,base+1,"0",color,color);
    }
    for(i = -w; i<w; i++){
        putString(d+i,base,"0",color,color);
        putString(d+i,base+1,"0",color,color);
    }
    for(i = -w; i<w; i++){
        putString(e+i,base,"0",color,color);
        putString(e+i,base+1,"0",color,color);
    }
    for(i = -w; i<w; i++){
        putString(f+i,base,"0",color,color);
        putString(f+i,base+1,"0",color,color);
    }
    for(i = 0; i<height; i++){
        putString(a,base-i,"0",color,color);
        putString(a+1,base-i,"0",color,color);
        putString(a-1,base-i,"0",color,color);
    }
    for(i = 0; i<height; i++){
        putString(b,base-i,"0",color,color);
        putString(b+1,base-i,"0",color,color);
        putString(b-1,base-i,"0",color,color);
    }
    for(i = 0; i<height; i++){
        putString(c,base-i,"0",color,color);
        putString(c+1,base-i,"0",color,color);
        putString(c-1,base-i,"0",color,color);
    }
    for(i = 0; i<height; i++){
        putString(d,base-i,"0",color,color);
        putString(d+1,base-i,"0",color,color);
        putString(d-1,base-i,"0",color,color);
    }
    for(i = 0; i<height; i++){
        putString(e,base-i,"0",color,color);
        putString(e+1,base-i,"0",color,color);
        putString(e-1,base-i,"0",color,color);
    }
    for(i = 0; i<height; i++){
        putString(f,base-i,"0",color,color);
        putString(f+1,base-i,"0",color,color);
        putString(f-1,base-i,"0",color,color);
    }
}



Image * read_image(char *pixel_file, char *color_file)
{
    FILE *fid1, *fid2;
    int row, col, i, j;
    Image *p;

    fid1 = fopen(pixel_file, "r");
    fid2 = fopen(color_file, "r");
    if (fid1==NULL || fid2==NULL) {
        return NULL;
    } else {
        fscanf(fid1, "%d%d", &row, &col);
        fscanf(fid2, "%d%d", &row, &col); // supposedly, size should be the same
        p = (Image*) malloc(sizeof(Image));
        p->row = row;
        p->col = col;
        p->pixel = (char*) malloc(sizeof(char)*row*col);
        p->color = (int*) malloc(sizeof(int)*row*col);
        fscanf(fid1, "%*c");
        for (i=0; i<row; i++) {
            for (j=0; j<col; j++) {
                fscanf(fid1, "%c", & (p->pixel[i*col+j]));
                fscanf(fid2, "%1x", & (p->color[i*col+j]));
            }
            fscanf(fid1, "%*c");
            fscanf(fid2, "%*c");
        }
        fclose(fid1);
        fclose(fid2);
        return p;
    }
}


char getpixel(Image *ip, int x, int y)
{
    return ip->pixel[y*ip->col + x];
}

int getcolor(Image *ip, int x, int y)
{
    return ip->color[y*ip->col + x];
}

void show_image(Image *ip, int offx, int offy)
{
    int x, y;

    char c;
    for (y=0; y<ip->row; y++) {
            for (x=0; x<ip->col; x++) {
            c = getpixel(ip, x, y);
            if (c!=' ')
            putASCII2( x + offx,
                y + offy, c, getcolor(ip, x, y), getcolor(ip, x, y));
            }
    }
}
void show_image2(Image *ip)
{
    int x, y;
    int offx = ip->xp;
    int offy = ip->yp;
    char c;
    int bgcolor=ip->bg_color;
    int color = ip->disk_color;
    for (y=0; y<ip->row; y++) {
            for (x=0; x<ip->col; x++) {
            c = '#';
            if (c!=' ')
            putASCII2( x + offx,
                y + offy, c, getcolor(ip, x, y), getcolor(ip, x, y));
            }
    }
}
void destroy_image(Image *ip)
{
    free(ip->pixel);
    free(ip->color);
    free(ip);
}

void putStringLarge(Font *fp, int x, int y, char *p, int fg_color, int bg_color)
{
    int i;
    for(i=0; i<strlen(p); i++) {
        show_font(fp,  p[i], x+i*fp->width, y, fg_color, bg_color);
    }
}


Font * read_font(char *pixel_file)
{
    FILE *fid;
    int height, width, num, i, j, k;
    Font *p;

    fid = fopen(pixel_file, "r");

    if (fid==NULL) {
        return NULL;
    } else {
        fscanf(fid, "%d%d%d", &height, &width, &num);
        p = (Font*) malloc(sizeof(Font));
        p->height = height;
        p->width = width;
        p->pixel = (char*) malloc(sizeof(char)*height*width*num);
        fscanf(fid, "%*c");
        for (k=0; k<num; k++) {
            for (i=0; i<height; i++) {
                for (j=0; j<width; j++) {
                    fscanf(fid, "%c", & (p->pixel[k*width*height+i*width+j]));
                }
                fscanf(fid, "%*c");
            }
        }
        fclose(fid);

        return p;
    }
}

void show_font(Font *ip, char letter, int offx, int offy, int fg_color, int bg_color)
{
    int x, y;
    char c;
    int shift;
    if (letter==' ') return;
    if (isdigit(letter)) {
        shift = ip->height*(26 + letter-'0');
    } else {
        shift = ip->height*(toupper(letter)-'A');
    }
    for (y=0; y<ip->height; y++) {
            for (x=0; x<ip->width; x++) {

            c = getpixel(ip, x, y+shift);
            if (c!=' ')
            putASCII2( x + offx,
                y + offy, '@', fg_color, bg_color);
            }
    }
}

void destroy_font(Font *ip)
{
    free(ip->pixel);
    free(ip);
}

void putString(int x, int y, char *p, int fg_color, int bg_color)
{
    int i;
    for(i=0; i<strlen(p); i++) {
        putASCII2(x+i, y, p[i], fg_color, bg_color);
    }
}
