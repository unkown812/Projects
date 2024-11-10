#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
#include <string.h>

void happy() {
		setcolor(YELLOW);
		setfillstyle(SOLID_FILL, YELLOW);
		fillellipse(320, 240, 100, 100);
		setcolor(BLACK);
		setfillstyle(SOLID_FILL, BLACK);
		fillellipse(280, 210, 15, 15);
		fillellipse(360, 210, 15, 15);
		arc(320, 245, 200, 340, 60);
}

void sad() {
		setcolor(YELLOW);
		setfillstyle(SOLID_FILL, YELLOW);
		fillellipse(320, 240, 100, 100);
		setcolor(BLACK);
		setfillstyle(SOLID_FILL, BLACK);
		fillellipse(280, 210, 15, 15);
		fillellipse(360, 210, 15, 15);
		setcolor(BLACK);
		arc(320, 320, 20, 160, 50);
}

void angry() {
		setcolor(RED);
		setfillstyle(SOLID_FILL, RED);
		fillellipse(300, 200, 100, 100);
		setcolor(BLACK);
		setfillstyle(SOLID_FILL, BLACK);
		fillellipse(272, 167, 10 ,10);
		fillellipse(328, 167, 10 , 10);
		line(240, 140, 280, 160);  // Left eyebrow   //dis 40
		line(320, 160, 360, 140);  // Right eyebrow
		arc(300, 270, 20, 160, 40); // Downturned arc
}

void fear(){
		setcolor(YELLOW);
				setfillstyle(SOLID_FILL, YELLOW);
				fillellipse(320, 240, 100, 100);
				setcolor(BLACK);
				setfillstyle(SOLID_FILL, BLACK);
				fillellipse(280, 210, 15, 15);
				fillellipse(360, 210, 15, 15);
				arc(320, 245, 200, 340, 60);
}

void surprise(){
		setcolor(YELLOW);//face
		setfillstyle(SOLID_FILL, YELLOW);
		fillellipse(320,240,100,100);
		setcolor(BLACK);
		setfillstyle(SOLID_FILL, WHITE);
		fillellipse(290, 200, 20 , 20);//eyes
		fillellipse(350, 200, 20 , 20);
		setfillstyle(SOLID_FILL, BLACK);//pupils
		fillellipse(290, 200, 10 , 10);
		fillellipse(350, 200, 10 , 10);
		setcolor(BLACK);//mouth
		setfillstyle(SOLID_FILL,WHITE);
		ellipse(320, 280, 0, 180, 30, 30);
		ellipse(320, 280, 180, 0, 30, 30);
		fillellipse(320, 280, 30, 30);
		fillellipse(320, 280, 30, 30);
}
main() {
    int gd = DETECT, gm;
    char mood[30];
    clrscr();
    printf("Tell your mood  : ");
    scanf("%s", mood);
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    if (strcmp(mood, "happy") == 0 || strcmp(mood, "Happy") == 0 || strcmp(mood, "HAPPY") == 0) {
        happy();
    } 
    
    else if (strcmp(mood, "sad") == 0 || strcmp(mood, "Sad") == 0 || strcmp(mood, "SAD") == 0) {
        sad();
    } 
    
    else if (strcmp(mood, "angry") == 0 || strcmp(mood, "Angry") == 0 || strcmp(mood, "ANGRY") == 0) {
        angry();
    } 
    
    else if (strcmp(mood, "fear") == 0 || strcmp(mood, "Fear") == 0 || strcmp(mood, "FEAR") == 0){
        fear();
    } 
    
    else if( strcmp(mood, "surprise") == 0 || strcmp(mood, "Surprise") == 0 || strcmp(mood, "SURPRISE") == 0){
        surprise();
    }
    
    else {
        printf("Invalid emotion or mood : ");
    }

    getch();
    closegraph();
    return 0;
}