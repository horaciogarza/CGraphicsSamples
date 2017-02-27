#include<graphics.h>
#include<conio.h>
#include<dos.h>

void init();
main()
{
	init();
	

    
//    setfillstyle(SOLID_FILL,RED);
    
    setbkcolor(WHITE);
    
    //Change RED to WHITE.
    cleardevice();
    setfillstyle(SOLID_FILL, BLACK);
   	bar(0, 0, getmaxx(), getmaxy() /3);
   	
   	setfillstyle(SOLID_FILL, RED);
   	bar(0, getmaxy() /3, getmaxx(), (getmaxy() /3) * 2);
   	
   	setfillstyle(SOLID_FILL, YELLOW);
   	bar(0, (getmaxy() /3) * 2, getmaxx(), (getmaxy() /3) * 4);
    
    
     
    getch();
    closegraph();
   
   
}

void init(){
	int gd = DETECT, gm; //Variables inicializadas anteriormente, esto no se debe de modificar, ya que alteraría los argumentos
 	initgraph(&gd, &gm, "C:\\TC\\BGI"); //	Se abre la consola auxiliar, en la cual podremos dibujar
}
