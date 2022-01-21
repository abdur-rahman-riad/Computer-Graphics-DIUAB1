
///============DIU Academic Building-1 Project===================

///.......................Team Member............................
///...........Mohammad Abdur Rahman (181-15-2063)................
///...........Safia Ahmed (181-15-1786)..........................
///...........Khalid Bin Hasan (181-15-1789).....................


#include <windows.h>
#include<stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

float i=0.0,m=0.0,n=0.0,o=0.0,c=0.0,b=0.0;

 float	cloud_right =  0.0;
 float	people_right =  0.0;
 float	car_left =  100.0;

void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx,cy);
    for(int i = 0; i <= 100; i++)
    {
        float angle = 2.0f * 3.1416f * i/100;
        float x = rx * cosf(angle);
        float y = ry * sinf(angle);

        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
}

void sun()
{
    glColor3f (01.0, 0.80, 0.0);
    circle(3.0,6.0,82.0,86.0);
}

void cloud_small()
{
    glColor3f(01.0,01.,01.0);
    circle(4,4,46,80);
    glColor3f(01.0,01.,01.0);
    circle(6,6,51,80);
    glColor3f(01.0,01.,01.0);
    circle(4,4,57,80);
}


void cloud_big()
{
    glColor3f(01.0,01.,01.0);
    circle(5,3,0,90);

    glColor3f(01.0,01.,01.0);
    circle(5,4,6,90);

    glColor3f(01.0,01.,01.0);
    circle(5,5,11,90);


     glColor3f(01.0,01.,01.0);
    circle(5,4,17,90);
    glColor3f(01.0,01.,01.0);
    circle(5,3,21,90);


    glColor3f(01.0,01.,01.0);
    circle(60,60,830,90);

    glColor3f(01.0,01.,01.0);
    circle(40,40,890,620);
}
void cloud_move()
{
    cloud_right=cloud_right+0.0050;
    if (cloud_right>100)
        cloud_right=-50;
    glutPostRedisplay();
}


void car()
{
    /*CAR*/
    //person
glBegin(GL_QUADS);
glColor3ub(250,50,0);
glVertex3f(91,23,0);
glVertex3i(93,23,0);
glVertex3i(93,26,0);
glVertex3f(91,26,0);
glEnd();

glBegin(GL_QUADS);
glColor3ub(250,50,0);
glVertex3f(91,24,0);
glVertex3f(90.5,24,0);
glVertex3f(90.5,24.5,0);
glVertex3f(91,24.5,0);
glEnd();

glBegin(GL_QUADS);
glColor3ub(247, 232, 158);
glVertex3f(90.5,25,0);
glVertex3f(90,24.5,0);
glVertex3f(90,24,0);
glVertex3f(90.5,23.5,0);
glEnd();




/*head*/
glColor3ub(247, 232, 158);
circle(.5,1,92,27);

/*hair*/
glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex3f(92.5,28,0);
glVertex3f(93,27,0);
glVertex3f(92,26,0);
glEnd();




//car portion

glColor3ub(0, 0, 0);
circle(1,1,87.5,19);
glColor3ub(250, 250, 250);
circle(.5,.5,87.5,19);
glColor3ub(0, 0, 0);
circle(1,1,98.5,19);
glColor3ub(250, 250, 250);
circle(.5,.5,98.5,19);

glBegin(GL_QUADS);
glColor3ub(92, 191, 0);
glVertex3f(86,20.5,0);
glVertex3f(89,20.5,0);
glVertex3f(89,23.5,0);
glVertex3f(86,23.5,0);
glEnd();

glBegin(GL_QUADS);
glColor3ub(0, 0, 0);

glVertex3f(89,24,0);
glVertex3f(89.5,24,0);
glVertex3f(89.5,25,0);
glVertex3f(89,25,0);
glEnd();
glBegin(GL_QUADS);
glColor3ub(0, 0, 0);
glVertex3f(89.5,23.5,0);
glVertex3f(90,23.5,0);
glVertex3f(90,25.5,0);
glVertex3f(89.5,25.5,0);
glEnd();





glBegin(GL_QUADS);
glColor3ub(92, 191, 0);
glVertex3f(86,23.5,0);
glVertex3f(89,23.5,0);
glVertex3f(89,25,0);
glVertex3f(87,25,0);
glEnd();

glBegin(GL_QUADS);
glColor3ub(3, 115, 28);
glVertex3f(97,20.5,0);
glVertex3f(99,20.5,0);
glVertex3f(99,23.5,0);
glVertex3f(97,23.5,0);
glEnd();

glBegin(GL_QUADS);
glColor3ub(189, 207, 242);
glVertex3f(87.5,25,0);
glVertex3f(88.5,25,0);
glVertex3f(89,30.5,0);
glVertex3f(88,30.5,0);
glEnd();

glBegin(GL_QUADS);
glColor3ub(92, 191, 0);
glVertex3f(88,30.5,0);
glVertex3f(100,30.5,0);
glVertex3f(100,32,0);
glVertex3f(88,32,0);
glEnd();



glBegin(GL_QUADS);
glColor3ub(92, 191, 0);
glVertex3f(99,21,0);
glVertex3f(100,21,0);
glVertex3f(100,30.5,0);
glVertex3f(99,30.5,0);
glEnd();


glBegin(GL_QUADS);
glColor3ub(92, 191, 0);
glVertex3f(93,20.5,0);
glVertex3f(94,20.5,0);
glVertex3f(94,30.5,0);
glVertex3f(93,30.5,0);
glEnd();

glBegin(GL_QUADS);
glColor3ub(3, 115, 28);
glVertex3f(91,20.5,0);
glVertex3f(93,20.5,0);
glVertex3f(93,23.5,0);
glVertex3f(91,23.5,0);
glEnd();




glBegin(GL_QUADS);
glColor3ub(145, 4, 0);
glVertex3f(90.5,20.5,0);
glVertex3f(91,20.5,0);
glVertex3f(91,23.5,0);
glVertex3f(90.5,23.5,0);
glEnd();
glBegin(GL_QUADS);
glColor3ub(18, 7, 0);
glVertex3f(91,20.5,0);
glVertex3f(89.5,20.5,0);
glVertex3f(90,21.5,0);
glVertex3f(91,21.5,0);
glEnd();


glBegin(GL_QUADS);
glColor3ub(92, 191, 0);
glVertex3f(86,20,0);
glVertex3i(100,20,0);
glVertex3f(100,21,0);
glVertex3f(86,21,0);
glEnd();


}

void car_move()
{

    car_left=car_left-0.020;
    if (car_left<0)
        car_left=110;
    glutPostRedisplay();

}

void people(GLint S1,GLint S2,GLint S3,GLint P1,GLint P2,GLint P3,GLint X,GLint Y){
/*shirt*/
glBegin(GL_QUADS);
glColor3ub(S1,S2,S3);
glVertex3f(0+X,24+Y,0);
glVertex3i(2+X,24+Y,0);
glVertex3i(2+X,27+Y,0);
glVertex3f(0+X,27+Y,0);
glEnd();


glColor3ub(S1,S2,S3);
circle(.3,.3,0.3+X,26.8+Y);
glColor3ub(S1,S2,S3);
circle(.3,.3,1.7+X,26.8+Y);
/*hand*/
glBegin(GL_QUADS);
glColor3ub(S1,S2,S3);
glVertex3f(2+X,25+Y,0);
glVertex3f(2.5+X,24.5+Y,0);
glVertex3f(2.5+X,25.5+Y,0);
glVertex3f(2+X,26+Y,0);
glEnd();
glBegin(GL_QUADS);
/*hand extend*/
glColor3ub(250, 255, 194);
glVertex3f(2.5+X,25+Y,0);
glVertex3f(2.7+X,24.5+Y,0);
glVertex3f(2.7+X,25.5+Y,0);
glVertex3f(2.5+X,26+Y,0);
glEnd();


/*left leg*/
glBegin(GL_QUADS);
glColor3ub(P1,P2,P3);
glVertex3f(0+X,24+Y,0);
glVertex3f(1.3+X,24+Y,0);
glVertex3f(0.5+X,21.5+Y,0);
glVertex3f(0+X,21.5+Y,0);
glEnd();

/*left shoe*/
glBegin(GL_QUADS);
glColor3ub(0,0,0);

glVertex3f(0+X,21.2+Y,0);
glVertex3f(0.7+X,21.2+Y,0);
glVertex3f(0.5+X,21.5+Y,0);
glVertex3f(0+X,21.5+Y,0);
glEnd();
/*right leg*/
glBegin(GL_QUADS);
glColor3ub(P1,P2,P3);
glVertex3f(1.8+X,21.5+Y,0);
glVertex3f(2.5+X,21.5+Y,0);
glVertex3f(2+X,24+Y,0);
glVertex3f(1+X,24+Y,0);

glEnd();
/*right shoe*/
glBegin(GL_QUADS);
glColor3ub(0,0,0);
glVertex3f(1.8+X,21.2+Y,0);
glVertex3f(2.6+X,21.2+Y,0);
glVertex3f(2.5+X,21.5+Y,0);
glVertex3f(1.8+X,21.5+Y,0);
glEnd();
/*head*/
glColor3ub(250, 255, 194);
circle(.5,1,1+X,28+Y);
/*hair*/
glBegin(GL_TRIANGLES);
glColor3ub(0,0,0);
glVertex3f(0.3+X,27.2+Y,0);
glVertex3f(0.8+X,29.2+Y,0);
glVertex3f(0+X,29+Y,0);
glEnd();

}


void people_move()
{
    people_right=people_right+0.010;
    if (people_right>100)
        people_right=-84;
    glutPostRedisplay();
}


void tree(GLint x){
    glColor3ub(11, 140, 46);
    circle(2,2,x+0.5,17);

    glColor3ub(255, 0, 0);
    circle(.2,.2,x+2.4,17);

    glColor3ub(255, 0, 0);
    circle(.2,.2,x+0.5,17);

    glColor3ub(255, 0, 0);
    circle(.2,.2,x-0.5,18);

    glColor3ub(255, 0, 0);
    circle(.2,.2,x-0.5,15.5);


}


void balcony(GLint y){


glBegin(GL_QUADS);
glColor3ub(200,200,200);
glVertex3f(37,y+1,0);
glVertex3f(38,y,0);
glVertex3f(38,y+4,0);
glVertex3f(37,y+5,0);
glEnd();

glBegin(GL_QUADS);
glColor3ub(225,225,225);
glVertex3f(38,y,0);
glVertex3f(46,y,0);
glVertex3f(46,y+4,0);
glVertex3f(38,y+4,0);
glEnd();


glBegin(GL_QUADS);
glColor3ub(200,200,200);
glVertex3f(46,y,0);
glVertex3f(47,y+1,0);
glVertex3f(47,y+5,0);
glVertex3f(46,y+4,0);
glEnd();


glBegin(GL_QUADS);
glColor3ub(190,190,190);
glVertex3f(47,y+1,0);
glVertex3f(50,y+1,0);
glVertex3f(50,y+5,0);
glVertex3f(47,y+5,0);
glEnd();



glBegin(GL_QUADS);
glColor3ub(200,200,200);
glVertex3f(50,y+1,0);
glVertex3f(51,y,0);
glVertex3f(51,y+4,0);
glVertex3f(50,y+4,0);
glEnd();


glBegin(GL_QUADS);
glColor3ub(225,225,225);
glVertex3f(51,y,0);
glVertex3f(60,y,0);
glVertex3f(60,y+4,0);
glVertex3f(51,y+4,0);
glEnd();


glBegin(GL_QUADS);
glColor3ub(200,200,200);
glVertex3f(60,y,0);
glVertex3f(61,y+1,0);
glVertex3f(61,y+5,0);
glVertex3f(60,y+4,0);
glEnd();



}

void windows(GLint x,GLint y){


glBegin(GL_QUADS);
glColor3ub(180,180,180);
glVertex3f(x,y,0);
glVertex3f(x+4,y,0);
glVertex3f(x+4,y+4,0);
glVertex3f(x,y+4,0);
glEnd();


glBegin(GL_QUADS);
glColor3ub(85, 102, 130);
glVertex3f(x+0.2,y+0.3,0);
glVertex3f(x+1.7,y+0.3,0);
glVertex3f(x+1.7,y+3.7,0);
glVertex3f(x+0.2,y+3.7,0);
glEnd();


glBegin(GL_QUADS);
glColor3ub(85, 102, 130);
glVertex3f(x+2.2,y+0.3,0);
glVertex3f(x+3.7,y+0.3,0);
glVertex3f(x+3.7,y+3.7,0);
glVertex3f(x+2.2,y+3.7,0);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(150,150,150);
glVertex3f(x-0.5,y,0);
glVertex3f(x,y,0);
glVertex3f(x,y+4,0);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(150,150,150);
glVertex3f(x+4,y,0);
glVertex3f(x+4.5,y,0);
glVertex3f(x+4,y+4,0);
glEnd();

glBegin(GL_QUADS);
glColor3ub(180,180,180);
glVertex3f(x+14,y,0);
glVertex3f(x+18,y,0);
glVertex3f(x+18,y+4,0);
glVertex3f(x+14,y+4,0);
glEnd();

/*  Balcony Shape-2 Window Left*/
glBegin(GL_QUADS);
glColor3ub(85, 102, 130);
glVertex3f(x+14.2,y+0.3,0);
glVertex3f(x+15.7,y+0.3,0);
glVertex3f(x+15.7,y+3.7,0);
glVertex3f(x+14.2,y+3.7,0);
glEnd();


glBegin(GL_QUADS);
glColor3ub(85, 102, 130);
glVertex3f(x+16.2,y+0.3,0);
glVertex3f(x+17.7,y+0.3,0);
glVertex3f(x+17.7,y+3.7,0);
glVertex3f(x+16.2,y+3.7,0);
glEnd();


glBegin(GL_TRIANGLES);
glColor3ub(150,150,150);
glVertex3f(x+13.5,y,0);
glVertex3f(x+14,y,0);
glVertex3f(x+14,y+4,0);
glEnd();

glBegin(GL_TRIANGLES);
glColor3ub(150,150,150);
glVertex3f(x+18,y,0);
glVertex3f(x+18.5,y,0);
glVertex3f(x+18,y+4,0);
glEnd();



}


void balcony2(GLint y){
/* Balcony Right Shape */
glBegin(GL_QUADS);
glColor3ub(225,225,225);
glVertex3f(73,y,0);
glVertex3f(78,y,0);
glVertex3f(78,y+4,0);
glVertex3f(73,y+4,0);
glEnd();

/*Balcony Right Shape Right Angel */
glBegin(GL_QUADS);
glColor3ub(200,200,200);
glVertex3f(78,y,0);
glVertex3f(79,y+1,0);
glVertex3f(79,y+5,0);
glVertex3f(78,y+4,0);
glEnd();

/* Balcony Right Shape Left Angel */
glBegin(GL_QUADS);
glColor3ub(200,200,200);
glVertex3f(72,y+1,0);
glVertex3f(73,y,0);
glVertex3f(73,y+4,0);
glVertex3f(72,y+5,0);
glEnd();

/* Balcony Left Shape */
glBegin(GL_QUADS);
glColor3ub(225,225,225);
glVertex3f(64,y,0);
glVertex3f(69,y,0);
glVertex3f(69,y+4,0);
glVertex3f(64,y+4,0);
glEnd();

/*Balcony Left Shape Right Angel */
glBegin(GL_QUADS);
glColor3ub(200,200,200);
glVertex3f(69,y,0);
glVertex3f(70,y+1,0);
glVertex3f(70,y+5,0);
glVertex3f(69,y+4,0);
glEnd();

/* Balcony Left Shape Left Angel */
glBegin(GL_QUADS);
glColor3ub(200,200,200);
glVertex3f(63,y+1,0);
glVertex3f(64,y,0);
glVertex3f(64,y+4,0);
glVertex3f(63,y+5,0);
glEnd();

/* Balcony Middle Shadow */
glBegin(GL_QUADS);
glColor3ub(190,190,190);
glVertex3f(70,y+1,0);
glVertex3f(72,y+1,0);
glVertex3f(72,y+5,0);
glVertex3f(70,y+5,0);
glEnd();

/* Balcony Right Window */
glBegin(GL_QUADS);
glColor3ub(180,200,210);
glVertex3f(74,y+4,0);
glVertex3f(77,y+4,0);
glVertex3f(77,y+8,0);
glVertex3f(74,y+8,0);
glEnd();

/* Balcony Right Window Middle Shape */
glBegin(GL_QUADS);
glColor3ub(85, 102, 130);
glVertex3f(74.2,y+4.3,0);
glVertex3f(76.8,y+4.3,0);
glVertex3f(76.8,y+7.7,0);
glVertex3f(74.2,y+7.7,0);
glEnd();

/* Balcony Left Window */
glBegin(GL_QUADS);
glColor3ub(180,200,210);
glVertex3f(65,y+4,0);
glVertex3f(68,y+4,0);
glVertex3f(68,y+8,0);
glVertex3f(65,y+8,0);
glEnd();

/* Balcony Right Window Middle Shape */
glBegin(GL_QUADS);
glColor3ub(85, 102, 130);
glVertex3f(65.2,y+4.3,0);
glVertex3f(67.8,y+4.3,0);
glVertex3f(67.8,y+7.7,0);
glVertex3f(65.2,y+7.7,0);
glEnd();
/*--------------------Shape-6 Balcony-1 End-------------------- */

}

void init (void)
{
/*glClearColor (0.0, 0.0, 0.0, 0.0);*/
glClearColor (0.0, 0.0, 0.0, 0.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0, 100, 0, 100, -10.0, 10.0);
}
void display(void)
{
/* clear all pixels */
glClear(GL_COLOR_BUFFER_BIT);




/*-------------------------------Background Start-------------------*/
glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2i(0,0);
glColor3ub(255,255,255);
glVertex2i(100,0);
glColor3ub(135,206,235);
glVertex2i(100,100);
glColor3ub(135,206,235);
glVertex2i(0,100);
glEnd();
/*-------------------------------Background End-------------------*/


sun();
cloud_move();


    for(int i=0; i<1; i++)
    {
        glPushMatrix();
        glTranslatef(cloud_right+i,0,0);
        cloud_small();
        cloud_big();

        glPopMatrix();
    }

    glutSwapBuffers();










/*-------------------------------Grass Start-------------------*/
glBegin(GL_QUADS);
glColor3ub(83, 168, 0);
glVertex2i(0,0);
glColor3ub(83, 168, 0);
glVertex2i(100,0);
glColor3ub(124, 252, 0);
glVertex2i(100,15);
glColor3ub(124, 252, 0);
glVertex2i(0,15);
glEnd();
/*-------------------------------Grass End-------------------*/

/*Road Design */
glBegin(GL_QUADS);
glColor3ub(170,170,170);
glVertex3i(0,15,0);
glVertex3i(100,15,0);
glVertex3i(100,25,0);
glVertex3i(0,25,0);
glEnd();




/* Road Line Top */
glBegin(GL_QUADS);
glColor3ub(130,130,130);
glVertex3i(0,25,0);
glVertex3i(100,25,0);
glVertex3i(100,26,0);
glVertex3i(0,26,0);
glEnd();

/* Road Line Down */
glBegin(GL_QUADS);
glColor3ub(130,130,130);
glVertex3i(0,15,0);
glVertex3i(100,15,0);
glVertex3i(100,16,0);
glVertex3i(0,16,0);
glEnd();






/* Shape -1 */
glBegin(GL_QUADS);
glColor3ub(185,125,105);
glVertex3i(2,26,0);
glVertex3i(8,26,0);
glVertex3i(8,85,0);
glVertex3i(2,83,0);
glEnd();

/* Shape -1 Middle Line-1 */
glBegin(GL_QUADS);
glColor3ub(210,210,210);
glVertex3f(1.5,35,0);
glVertex3i(8,35,0);
glVertex3f(8,36.5,0);
glVertex3f(1.5,36.5,0);
glEnd();

/* Shape -1 Middle Line-2 */
glBegin(GL_QUADS);
glColor3ub(210,210,210);
glVertex3f(1.5,45,0);
glVertex3i(8,45,0);
glVertex3f(8,46.5,0);
glVertex3f(1.5,46.5,0);
glEnd();

/* Shape -1 Middle Line-3 */
glBegin(GL_QUADS);
glColor3ub(210,210,210);
glVertex3f(1.5,55,0);
glVertex3i(8,55,0);
glVertex3f(8,56.5,0);
glVertex3f(1.5,56.5,0);
glEnd();

/* Shape -1 Middle Line-4 */
glBegin(GL_QUADS);
glColor3ub(210,210,210);
glVertex3f(1.5,65,0);
glVertex3i(8,65,0);
glVertex3f(8,66.5,0);
glVertex3f(1.5,66.5,0);
glEnd();

/* Shape -1 Middle Line-5 */
glBegin(GL_QUADS);
glColor3ub(210,210,210);
glVertex3f(1.5,75,0);
glVertex3i(8,75,0);
glVertex3f(8,76.5,0);
glVertex3f(1.5,76.5,0);
glEnd();


/* Shape -1 Left Extra */
glBegin(GL_QUADS);
glColor3ub(200,200,200);
glVertex3i(2,26,0);
glVertex3f(2.5,26,0);
glVertex3f(2.5,85,0);
glVertex3i(2,83,0);
glEnd();

/* Shape-1 Extra */
glBegin(GL_QUADS);
glColor3ub(200,200,200);
glVertex3f(1.5,83,0);
glVertex3i(8,85,0);
glVertex3i(8,87,0);
glVertex3f(1.5,85,0);
glEnd();

/* Shape -2 */
glBegin(GL_QUADS);
glColor3ub(225,225,225);
glVertex3f(8,26,0);
glVertex3i(18,26,0);
glVertex3i(18,87,0);
glVertex3f(8,86,0);
glEnd();

/* Shape -2 Middle Shape */
glBegin(GL_QUADS);
glColor3ub(90, 90, 150);
glVertex3f(13,28,0);
glVertex3i(17,28,0);
glVertex3i(17,84,0);
glVertex3f(13,84,0);
glEnd();

/*------------------------------- Grill Start------------------------- */
glColor3ub(255, 250, 250);
glLineWidth(1);
glBegin(GL_LINES);

glVertex2i(13,28);
glVertex2i(13,84);
glVertex2f(13.5,28);
glVertex2f(13.5,84);
glVertex2f(14,28);
glVertex2f(14,84);
glVertex2f(14.5,28);
glVertex2f(14.5,84);
glVertex2f(15,28);
glVertex2f(15,84);
glVertex2f(15.5,28);
glVertex2f(15.5,84);
glVertex2f(16,28);
glVertex2f(16,84);
glVertex2f(16.5,28);
glVertex2f(16.5,84);
glVertex2f(17,28);
glVertex2f(17,84);
glEnd();


glColor3ub(255,255,255);
glLineWidth(1);
glBegin(GL_LINES);

glVertex2i(13,82);
glVertex2i(17,82);
glVertex2i(13,79);
glVertex2i(17,79);

glVertex2f(13,72.5);
glVertex2f(17,72.5);
glVertex2i(13,69);
glVertex2i(17,69);

glVertex2f(13,62.5);
glVertex2f(17,62.5);
glVertex2i(13,59);
glVertex2i(17,59);

glVertex2f(13,52.5);
glVertex2f(17,52.5);
glVertex2i(13,49);
glVertex2i(17,49);

glVertex2f(13,42.5);
glVertex2f(17,42.5);
glVertex2i(13,39);
glVertex2i(17,39);

glVertex2f(13,32.5);
glVertex2f(17,32.5);
glVertex2i(13,30);
glVertex2i(17,30);

glEnd();
/*------------------------------- Grill End------------------------- */

/* Shape -2 Middle Shape Middle Line-1 */
glBegin(GL_QUADS);
glColor3ub(225,225,225);
glVertex3f(8,35,0);
glVertex3f(18,35,0);
glVertex3f(18,37,0);
glVertex3f(8,37,0);
glEnd();

/* Shape -2 Middle Shape Middle Line-2 */
glBegin(GL_QUADS);
glColor3ub(225,225,225);
glVertex3f(8,45,0);
glVertex3f(18,45,0);
glVertex3f(18,47,0);
glVertex3f(8,47,0);
glEnd();

/* Shape -2 Middle Shape Middle Line-3 */
glBegin(GL_QUADS);
glColor3ub(225,225,225);
glVertex3f(8,55,0);
glVertex3f(18,55,0);
glVertex3f(18,57,0);
glVertex3f(8,57,0);
glEnd();

/* Shape -2 Middle Shape Middle Line-4 */
glBegin(GL_QUADS);
glColor3ub(225,225,225);
glVertex3f(8,65,0);
glVertex3f(18,65,0);
glVertex3f(18,67,0);
glVertex3f(8,67,0);
glEnd();

/* Shape -2 Middle Shape Middle Line-5 */
glBegin(GL_QUADS);
glColor3ub(225,225,225);
glVertex3f(8,75,0);
glVertex3f(18,75,0);
glVertex3f(18,77,0);
glVertex3f(8,77,0);
glEnd();

/* Shape-2 Extra */
glBegin(GL_QUADS);
glColor3ub(200,200,200);
glVertex3f(8,86,0);
glVertex3i(18,86,0);
glVertex3i(18,88,0);
glVertex3f(8,88,0);
glEnd();

/* Shape-3 */
glBegin(GL_QUADS);
glColor3ub(185,125,105);
glVertex3f(18,26,0);
glVertex3i(36,42,0);
glVertex3i(36,80,0);
glVertex3f(18,88,0);
glEnd();

/* Shape-3 Down Part */
glBegin(GL_QUADS);
glColor3ub(185,125,105);
glVertex3f(32,26,0);
glVertex3i(36,26,0);
glVertex3i(36,50,0);
glVertex3f(32,50,0);
glEnd();

/* Shape-3 Middle Line -1 */
glBegin(GL_QUADS);
glColor3ub(200,200,200);
glVertex3f(18,41,0);
glVertex3i(36,36,0);
glVertex3i(36,41,0);
glVertex3f(18,46,0);
glEnd();

/* Shape-3 Middle Line -2 */
glBegin(GL_QUADS);
glColor3ub(200,200,200);
glVertex3f(18,54,0);
glVertex3i(36,49,0);
glVertex3i(36,54,0);
glVertex3f(18,59,0);
glEnd();

/* Shape-3 Middle Line -3 */
glBegin(GL_QUADS);
glColor3ub(200,200,200);
glVertex3f(18,67,0);
glVertex3i(35,62,0);
glVertex3i(35,67,0);
glVertex3f(18,73,0);
glEnd();



/* Shape-3 Left Shadow */
glBegin(GL_QUADS);
glColor3ub(160,160,160);
glVertex3f(18,26,0);
glVertex3i(19,27,0);
glVertex3i(19,86,0);
glVertex3f(18,88,0);
glEnd();

/* Shape-3 Top Shadow */
glBegin(GL_QUADS);
glColor3ub(180,180,180);
glVertex3f(19,86,0);
glVertex3i(35,79,0);
glVertex3i(36,80,0);
glVertex3f(18,88,0);
glEnd();

/* Shape-3 Right Shadow */
glBegin(GL_QUADS);
glColor3ub(160,160,160);
glVertex3f(35,26,0);
glVertex3i(36,26,0);
glVertex3i(36,80,0);
glVertex3f(35,79,0);
glEnd();

/* Shape-4 Left */
glBegin(GL_QUADS);
glColor3ub(185,125,105);
glVertex3f(20,26,0);
glVertex3i(26,26,0);
glVertex3i(26,80,0);
glVertex3f(20,78,0);
glEnd();


/* Shape-4 Left Top Gray Shape */
glBegin(GL_QUADS);
glColor3ub(90, 90, 150);
glVertex3f(20,66.5,0); /*A*/
glVertex3f(25.2,66.5,0); /*B*/
glVertex3f(25.2,77.5,0); /*C*/
glVertex3f(20,76,0); /*D*/
glEnd();

/* ------------------Grill Start---------------------- */
glColor3ub(215, 215, 215);
glLineWidth(1);
glBegin(GL_LINES);

glVertex2f(21,66.5);
glVertex2f(21,77.5);
glVertex2f(22.5,66.5);
glVertex2f(22.5,77.5);
glVertex2f(24,66.5);
glVertex2f(24,77.5);


glVertex2f(20,73.5);
glVertex2f(25.5,74.5);
glVertex2f(20,71);
glVertex2f(25.5,72);
glVertex2f(20,68.5);
glVertex2f(25.5,69.5);

glEnd();
/* ------------------Grill End---------------------- */

/* Shape-4 Left Shadow */
glBegin(GL_QUADS);
glColor3ub(190,190,190);
glVertex3f(25.2,26,0);
glVertex3i(26,26,0);
glVertex3i(26,80,0);
glVertex3f(25.2,77.5,0);
glEnd();

/* Shape-4 Left Shadow-2 */
glBegin(GL_QUADS);
glColor3ub(190,190,190);
glVertex3f(20,76,0);
glVertex3f(25.2,77.5,0);
glVertex3i(26,80,0);
glVertex3f(20,78,0);
glEnd();

/* Shape-4 Left Shadow-3 */
glBegin(GL_QUADS);
glColor3ub(190,190,190);
glVertex3f(19,26,0);
glVertex3f(20,26,0);
glVertex3i(20,78,0);
glVertex3f(19,77.5,0);
glEnd();

/* Shape-4 Left Middle Line-1 */
glBegin(GL_QUADS);
glColor3ub(190,190,190);
glVertex3f(20,35,0);
glVertex3i(26,35,0);
glVertex3f(26,36.5,0);
glVertex3f(20,36.5,0);
glEnd();

/* Shape-4 Left Middle Line-2 */
glBegin(GL_QUADS);
glColor3ub(190,190,190);
glVertex3f(20,45,0);
glVertex3i(26,45,0);
glVertex3f(26,46.5,0);
glVertex3f(20,46.5,0);
glEnd();

/* Shape-4 Left Middle Line-3 */
glBegin(GL_QUADS);
glColor3ub(190,190,190);
glVertex3f(20,55,0);
glVertex3i(26,55,0);
glVertex3f(26,56.5,0);
glVertex3f(20,56.5,0);
glEnd();

/* Shape-4 Left Middle Line-4 */
glBegin(GL_QUADS);
glColor3ub(190,190,190);
glVertex3f(20,65,0);
glVertex3i(26,65,0);
glVertex3f(26,66.5,0);
glVertex3f(20,66.5,0);
glEnd();




/* Shape-4 Right */
glBegin(GL_QUADS);
glColor3ub(180,180,180);
glVertex3f(26,26,0);
glVertex3i(32,26,0);
glVertex3i(32,75,0);
glVertex3f(26,80,0);
glEnd();


/* Shape-4 Right Middile Shape */
glBegin(GL_QUADS);
glColor3ub(90, 90, 150);
glVertex3i(27,26,0);
glVertex3i(31,26,0);
glVertex3i(31,74,0);
glVertex3f(27,77,0);
glEnd();

/*---------------------Grill Start--------------------*/
glColor3ub(215, 215, 215);
glLineWidth(1);
glBegin(GL_LINES);
glVertex2i(28,26);
glVertex2i(28,77);
glVertex2i(29,26);
glVertex2i(29,76);
glVertex2i(30,26);
glVertex2i(30,76);

glVertex2i(27,73);
glVertex2f(31,71.5);
glVertex2f(27,69);
glVertex2f(31,68.5);

glVertex2f(27,61.8);
glVertex2f(31,62);
glVertex2f(27,58.8);
glVertex2f(31,59);

glVertex2f(27,51.8);
glVertex2f(31,52);
glVertex2f(27,48.8);
glVertex2f(31,49);

glVertex2f(27,41.8);
glVertex2f(31,42);
glVertex2f(27,38.8);
glVertex2f(31,39);

glEnd();
/*---------------------Grill End--------------------*/
/* Shape-4 Right Shadow */
glBegin(GL_QUADS);
glColor3ub(170,170,170);
glVertex3i(27,77,0);
glVertex3i(32,73,0);
glVertex3i(32,75,0);
glVertex3f(26,80,0);
glEnd();

/* Shape-4 Right Shadow-2 */
glBegin(GL_QUADS);
glColor3ub(170,170,170);
glVertex3i(26,26,0);
glVertex3i(27,26,0);
glVertex3i(27,77,0);
glVertex3f(26,80,0);
glEnd();

/* Shape-4 Right Shadow-3 */
glBegin(GL_QUADS);
glColor3ub(170,170,170);
glVertex3i(31,26,0);
glVertex3i(32,26,0);
glVertex3i(32,75,0);
glVertex3f(31,75,0);
glEnd();

/* Shape-4 Right Middile Shape Line-1 */
glBegin(GL_QUADS);
glColor3ub(170,170,170);
glVertex3i(27,35,0);
glVertex3f(31,35.5,0);
glVertex3f(31,36.5,0);
glVertex3f(27,36,0);
glEnd();

/* Shape-4 Right Middile Shape Line-2 */
glBegin(GL_QUADS);
glColor3ub(170,170,170);
glVertex3i(27,45,0);
glVertex3f(31,45.5,0);
glVertex3f(31,46.5,0);
glVertex3f(27,46,0);
glEnd();

/* Shape-4 Right Middile Shape Line-3 */
glBegin(GL_QUADS);
glColor3ub(170,170,170);
glVertex3i(27,55,0);
glVertex3f(31,55.5,0);
glVertex3f(31,56.5,0);
glVertex3f(27,56,0);
glEnd();

/* Shape-4 Right Middile Shape Line-4 */
glBegin(GL_QUADS);
glColor3ub(170,170,170);
glVertex3i(27,65,0);
glVertex3f(31,65,0);
glVertex3f(31,66,0);
glVertex3f(27,66,0);
glEnd();

/* Shape-4 Right Middile Shape Down Red */
glBegin(GL_QUADS);
//glColor3ub(185,125,105);
glColor3ub(130, 130, 130);
glVertex3i(27,26,0);
glVertex3f(31,26,0);
glVertex3f(31,35.5,0);
glVertex3f(27,35,0);
glEnd();



/* Shape-5 */
glBegin(GL_QUADS);
glColor3ub(185,125,105);
glVertex3f(36,26,0);
glVertex3i(62,26,0);
glVertex3i(62,80,0);
glVertex3f(36,80,0);
glEnd();


/*---------------------- Shape-5 Floor Door Start---------------*/
glBegin(GL_QUADS);
glColor3ub(13, 59, 57);
glVertex3f(46,26,0);
glVertex3i(51,26,0);
glVertex3i(51,35,0);
glVertex3f(46,35,0);
glEnd();

glColor3ub(225,225,225);
glLineWidth(1);
glBegin(GL_LINES);
glVertex2i(46,35);
glVertex2i(51,35);
glEnd();

glColor3ub(225,225,225);
glLineWidth(3);
glBegin(GL_LINES);
glVertex2f(48.5,26);
glVertex2f(48.5,35);
glEnd();

glBegin(GL_QUADS);
glColor3ub(225,225,225);
glVertex3f(49,31,0);
glVertex3f(49.5,31,0);
glVertex3f(49.5,31.8,0);
glVertex3f(49,31.8,0);
glEnd();

glBegin(GL_QUADS);
glColor3ub(225,225,225);
glVertex3f(48,31,0);
glVertex3f(47.5,31,0);
glVertex3f(47.5,31.8,0);
glVertex3f(48,31.8,0);
glEnd();
/*---------------------- Shape-5 Floor Door End---------------*/

/* Shape-5 Floor Design*/
glBegin(GL_QUADS);
glColor3ub(225,225,225);
glVertex3f(36,26,0);
glVertex3i(62,26,0);
glVertex3i(62,28,0);
glVertex3f(36,28,0);
glEnd();




/* Shape-5 Middle Line Shape Top */
glBegin(GL_QUADS);
glColor3ub(190,190,190);
glVertex3f(38,77,0);
glVertex3i(60,77,0);
glVertex3i(60,80,0);
glVertex3f(38,80,0);
glEnd();

/* Shape-5 Left Shadow */
glBegin(GL_QUADS);
glColor3ub(190,190,190);
glVertex3f(36,26,0);
glVertex3i(37,26,0);
glVertex3i(37,80,0);
glVertex3f(36,80,0);
glEnd();

/* Shape-5 Right Shadow */
glBegin(GL_QUADS);
glColor3ub(190,190,190);
glVertex3f(61,26,0);
glVertex3i(62,26,0);
glVertex3i(62,80,0);
glVertex3f(61,80,0);
glEnd();

/* Shape-5 Middle Line Shape Top Right Triangle */
glBegin(GL_TRIANGLES);
glColor3ub(180,180,180);
glVertex3i(60,77,0);
glVertex3i(62,80,0);
glVertex3i(60,80,0);
glEnd();

/* Shape-5 Middle Line Shape Top Left Triangle */
glBegin(GL_TRIANGLES);
glColor3ub(180,180,180);
glVertex3f(38,80,0);
glVertex3f(36,80,0);
glVertex3f(38,77,0);
glEnd();


/*Fourth Floor Balcony Start */

for(int i=66;i>35;i-=10){

   balcony(i);

}
 glutSwapBuffers();


/*Fourth Floor Balcony End */

/* ---------------------------Fourth Floor Balcony Window Start------------------------------------------- */
for(int i=70;i>38;i-=10){

  windows( 40,i);

}
 glutSwapBuffers();


/* Shape-6 */
glBegin(GL_TRIANGLES);
glColor3ub(225,225,225);
glVertex3f(62,80,0);
glVertex3i(62,68,0);
glVertex3i(65,68,0);
glEnd();


/* Shape-6 */
glBegin(GL_QUADS);
glColor3ub(185,125,105);
glVertex3f(62,26,0);
glVertex3i(79,26,0);
glVertex3i(79,68,0);
glVertex3f(62,68,0);
glEnd();

/* Shape-6 Left Shadow */
glBegin(GL_QUADS);
glColor3ub(170,170,170);
glVertex3f(62,26,0);
glVertex3i(63,26,0);
glVertex3f(63,66.5,0);
glVertex3f(62,68,0);
glEnd();

/* Shape-6 Top Shadow */
glBegin(GL_QUADS);
glColor3ub(150,150,150);
glVertex3f(63,66.5,0);
glVertex3f(79,66.5,0);
glVertex3f(79,68,0);
glVertex3f(62,68,0);
glEnd();

/* Shape-6 Sidi Big Shape */
glBegin(GL_QUADS);
glColor3ub(130,130,130);
glVertex3f(67,26,0);
glVertex3f(75,26,0);
glVertex3f(73,34,0);
glVertex3f(69,34,0);
glEnd();

/*----------------------------------------------------------------*/

/* Shape-6 Sidi Shape */
glBegin(GL_QUADS);
glColor3ub(200,200,200);
glVertex3f(67,26,0);
glVertex3f(75,26,0);
glVertex3f(75,26.5,0);
glVertex3f(67,26.5,0);
glEnd();

/* Shape-6 Sidi Shape */
glBegin(GL_QUADS);
glColor3ub(100,100,100);
glVertex3f(67,26.5,0);
glVertex3f(75,26.5,0);
glVertex3f(74.5,27,0);
glVertex3f(67.5,27,0);
glEnd();

/* Shape-6 Sidi Shape */
glBegin(GL_QUADS);
glColor3ub(200,200,200);
glVertex3f(67.5,27,0);
glVertex3f(74.5,27,0);
glVertex3f(74.5,27.5,0);
glVertex3f(67.5,27.5,0);
glEnd();

/* Shape-6 Sidi Shape */
glBegin(GL_QUADS);
glColor3ub(100,100,100);
glVertex3f(67.5,27.5,0);
glVertex3f(74.5,27.5,0);
glVertex3f(74,28,0);
glVertex3f(68,28,0);
glEnd();

/* Shape-6 Sidi Shape */
glBegin(GL_QUADS);
glColor3ub(200,200,200);
glVertex3f(68,28,0);
glVertex3f(74,28,0);
glVertex3f(74,28.5,0);
glVertex3f(68,28.5,0);
glEnd();

/* Shape-6 Sidi Shape */
glBegin(GL_QUADS);
glColor3ub(100,100,100);
glVertex3f(68,28.5,0);
glVertex3f(74,28.5,0);
glVertex3f(73.5,29,0);
glVertex3f(68.5,29,0);
glEnd();

/* Shape-6 Sidi Shape */
glBegin(GL_QUADS);
glColor3ub(200,200,200);
glVertex3f(68.5,29,0);
glVertex3f(73.5,29,0);
glVertex3f(73.5,29.5,0);
glVertex3f(68.5,29.5,0);
glEnd();

/* Shape-6 Sidi Shape */
glBegin(GL_QUADS);
glColor3ub(100,100,100);
glVertex3f(68.5,29.5,0);
glVertex3f(73.5,29.5,0);
glVertex3f(73,30,0);
glVertex3f(69,30,0);
glEnd();

/* Shape-6 Sidi Shape */
glBegin(GL_QUADS);
glColor3ub(200,200,200);
glVertex3f(69,30,0);
glVertex3f(73,30,0);
glVertex3f(73,30.5,0);
glVertex3f(69,30.5,0);
glEnd();

/* Shape-6 Sidi Left Triangle */
glBegin(GL_TRIANGLES);
glColor3ub(150,150,150);
glVertex3f(67,26,0);
glVertex3f(69,30.5,0);
glVertex3f(69,34,0);
glEnd();

/* Shape-6 Sidi Right Triangle */
glBegin(GL_TRIANGLES);
glColor3ub(150,150,150);
glVertex3f(73,30.5,0);
glVertex3f(75,26,0);
glVertex3f(73,34,0);
glEnd();

for(int i=36;i<58;i+=10){

  balcony2(i);

}
 glutSwapBuffers();



/* ------------------------------------------Mosjid Design--------------------------------------------------*/
/* Shape-8 Mosjid Main */
glBegin(GL_QUADS);
glColor3ub(215,215,215);
glVertex3f(80,26,0);
glVertex3i(90,26,0);
glVertex3i(94,50,0);
glVertex3f(76,50,0);
glEnd();

/*-----------------Mosjid Grid Line Start ----------------------*/
glColor3ub(200,200,200);
glLineWidth(1);
glBegin(GL_LINES);

glVertex2i(77, 45);
glVertex2i(77, 51);
glVertex2i(78, 39);
glVertex2i(78, 51);
glVertex2i(79, 28);
glVertex2i(79, 51);

glVertex2i(80, 26);
glVertex2i(80, 51);
glVertex2i(81, 26);
glVertex2i(81, 51);
glVertex2i(82, 26);
glVertex2i(82, 51);
glVertex2i(83, 26);
glVertex2i(83, 51);
glVertex2i(84, 26);
glVertex2i(84, 51);
glVertex2i(85, 26);
glVertex2i(85, 51);
glVertex2i(86, 26);
glVertex2i(86, 51);
glVertex2i(87, 26);
glVertex2i(87, 51);
glVertex2i(88, 26);
glVertex2i(88, 51);
glVertex2i(89, 26);
glVertex2i(89, 51);
glVertex2i(90, 26);
glVertex2i(90, 51);

glVertex2i(91, 30);
glVertex2i(91, 51);
glVertex2i(92, 39);
glVertex2i(92, 51);
glVertex2i(93, 45);
glVertex2i(93, 51);



glVertex2i(80, 28);
glVertex2i(90, 28);
glVertex2i(79, 30);
glVertex2i(91, 30);
glVertex2i(79, 32);
glVertex2i(91, 32);
glVertex2i(79, 34);
glVertex2i(91, 34);
glVertex2i(78, 36);
glVertex2i(92, 36);
glVertex2i(78, 38);
glVertex2i(92, 38);
glVertex2i(78, 40);
glVertex2i(92, 40);
glVertex2i(77, 42);
glVertex2i(93, 42);
glVertex2i(77, 44);
glVertex2i(93, 44);
glVertex2i(77, 46);
glVertex2i(93, 46);
glVertex2i(76, 48);
glVertex2i(94, 48);
glVertex2i(76, 50);
glVertex2i(94, 50);

glEnd();
/*-----------------Mosjid Grid Line End ----------------------*/

/* Mosjid Top Shape */
glBegin(GL_QUADS);
glColor3ub(130,130,130);
glVertex3f(75.2,50,0);
glVertex3f(94.8,50,0);
glVertex3f(94.8,52,0);
glVertex3f(75.2,52,0);
glEnd();

/* Mosjid Top Shape Left Angel */
glBegin(GL_TRIANGLES);
glColor3ub(100,100,100);
glVertex3f(75.2,50,0);
glVertex3f(76.2,49,0);
glVertex3f(75.8,50,0);
glEnd();

/* Mosjid Top Shape Right Angel */
glBegin(GL_TRIANGLES);
glColor3ub(100,100,100);
glVertex3f(94,50,0);
glVertex3f(94.8,50,0);
glVertex3f(94,49,0);
glEnd();

/* Shape-8 Mosjid Middle Big Shape */
glBegin(GL_QUADS);
glColor3ub(185,125,105);
glVertex3f(81,26,0);
glVertex3i(89,26,0);
glVertex3i(89,40,0);
glVertex3f(81,40,0);
glEnd();

/*-----------------------------Mosjid Color Shape Line-----------------*/
glColor3ub(255, 175, 148);
glLineWidth(1);
glBegin(GL_LINES);

glVertex2f(81.5,26);
glVertex2f(81.5,40);
glVertex2f(82,26);
glVertex2f(82,40);
glVertex2f(82.5,26);
glVertex2f(82.5,40);
glVertex2f(83,26);
glVertex2f(83,40);
glVertex2f(83.5,26);
glVertex2f(83.5,40);
glVertex2f(84,26);
glVertex2f(84,40);
glVertex2f(84.5,26);
glVertex2f(84.5,40);
glVertex2f(85,26);
glVertex2f(85,40);
glVertex2f(85.5,26);
glVertex2f(85.5,40);
glVertex2f(86,26);
glVertex2f(86,40);
glVertex2f(86.5,26);
glVertex2f(86.5,40);
glVertex2f(87,26);
glVertex2f(87,40);
glVertex2f(87.5,26);
glVertex2f(87.5,40);
glVertex2f(88,26);
glVertex2f(88,40);
glVertex2f(88.5,26);
glVertex2f(88.5,40);

glEnd();
/*-----------------------------Mosjid Color Shape Line-----------------*/

/* Shape-8 Mosjid Middle Big Shape Middle Shape */
glBegin(GL_QUADS);
glColor3ub(200,200,200);
glVertex3f(83,26,0);
glVertex3i(87,26,0);
glVertex3i(87,34,0);
glVertex3f(83,34,0);
glEnd();

/* Shape-8 Mosjid Middle Big Shape Middle Shape Pentagon Square */
glBegin(GL_POLYGON);
glColor3ub(0,95,91);
glVertex3f(83.5,26,0);
glVertex3f(86.5,26,0);
glVertex3f(86.5,31,0);
glVertex3f(85,33.5,0);
glVertex3f(83.5,31,0);
glEnd();


/* Shape-8 Mosjid Middle Big Shape Top*/
glBegin(GL_QUADS);
glColor3ub(90, 90, 150);
glVertex3f(79,44,0);
glVertex3i(91,44,0);
glVertex3i(91,47,0);
glVertex3f(79,47,0);
glEnd();

/* Shape-8 Mosjid Top*/
glBegin(GL_QUADS);
glColor3ub(180,180,180);
glVertex3f(77,52,0);
glVertex3i(93,52,0);
glVertex3i(92,54,0);
glVertex3f(78,54,0);
glEnd();

/* Shape-8 Mosjid Top Top*/
glBegin(GL_QUADS);
glColor3ub(130,130,130);
glVertex3f(78,54,0);
glVertex3i(92,54,0);
glVertex3i(92,57,0);
glVertex3f(78,57,0);
glEnd();

/*tree right to mosjid*/

glBegin(GL_QUADS);
glColor3ub(128, 77, 0);
glVertex3f(95,26,0);
glVertex3i(97,26,0);
glVertex3i(97,31,0);
glVertex3f(95,31,0);
glEnd();


glColor3ub(0, 97, 10);
circle(3,3,96,33.5);
glColor3ub(0, 97, 10);
circle(3,3,93,34.5);





glColor3ub(0, 97, 10);
circle(3,3,98,34.5);
glColor3ub(0, 97, 10);
circle(3,3,95,33.5);
glColor3ub(0, 97, 10);
circle(3,3,97.5,38);
glColor3ub(0, 97, 10);
circle(3,3,94.2,37.5);


glColor3ub(255, 0, 0);
circle(.3,.2,92.4,34);
glColor3ub(255, 0, 0);
circle(.3,.2,94,38);
glColor3ub(255, 0, 0);
circle(.3,.2,96.4,34);
glColor3ub(255, 0, 0);
circle(.3,.2,94.4,36);
glColor3ub(255, 0, 0);
circle(.3,.2,97.4,38);


/* -------------------------------- Wall & Grill Start ------------------------*/
/* Piller */
glColor3ub(255,255,255);
glLineWidth(4);
glBegin(GL_LINES);

glVertex2i(5,26);
glVertex2i(5,31);
glVertex2i(15,26);
glVertex2i(15,31);
glVertex2i(25,26);
glVertex2i(25,31);
glVertex2i(35,26);
glVertex2i(35,31);
glEnd();

//Piller Gate
glColor3ub(255,255,255);
glLineWidth(10);
glBegin(GL_LINES);

glVertex2i(40,26);
glVertex2i(40,33);
glVertex2i(42,26);
glVertex2i(42,33);
glVertex2f(39,31.8);
glVertex2f(43,31.8);

glVertex2i(55,26);
glVertex2i(55,33);
glVertex2i(57,26);
glVertex2i(57,33);
glVertex2f(54,31.8);
glVertex2f(58,31.8);
glEnd();
/* Gate Shape Left*/
glBegin(GL_QUADS);
glColor3ub(200,200,200);
glVertex3f(40,26,0);
glVertex3i(42,26,0);
glVertex3f(42,31.5,0);
glVertex3f(40,31.5,0);
glEnd();
/* Gate Shape Left*/
glBegin(GL_QUADS);
glColor3ub(200,200,200);
glVertex3f(55,26,0);
glVertex3i(57,26,0);
glVertex3f(57,31.5,0);
glVertex3f(55,31.5,0);
glEnd();



/*Wall Grill Left */
glColor3ub(80,80,80);
glLineWidth(2);
glBegin(GL_LINES);

// Piller 0 to 1
glVertex2f(0.5,26);
glVertex2f(0.5,30);
glVertex2i(1,26);
glVertex2i(1,30);
glVertex2f(1.5,26);
glVertex2f(1.5,30);
glVertex2i(2,26);
glVertex2i(2,30);
glVertex2f(2.5,26);
glVertex2f(2.5,30);
glVertex2i(3,26);
glVertex2i(3,30);
glVertex2f(3.5,26);
glVertex2f(3.5,30);
glVertex2i(4,26);
glVertex2i(4,30);
glVertex2f(4.5,26);
glVertex2f(4.5,30);

// Piller 1 to 2
glVertex2f(5.5,26);
glVertex2f(5.5,30);
glVertex2i(6,26);
glVertex2i(6,30);
glVertex2f(6.5,26);
glVertex2f(6.5,30);
glVertex2i(7,26);
glVertex2i(7,30);
glVertex2f(7.5,26);
glVertex2f(7.5,30);
glVertex2i(8,26);
glVertex2i(8,30);
glVertex2f(8.5,26);
glVertex2f(8.5,30);
glVertex2i(9,26);
glVertex2i(9,30);
glVertex2f(9.5,26);
glVertex2f(9.5,30);
glVertex2i(10,26);
glVertex2i(10,30);

// Piller 2 to 3
glVertex2f(10.5,26);
glVertex2f(10.5,30);
glVertex2i(11,26);
glVertex2i(11,30);
glVertex2f(11.5,26);
glVertex2f(11.5,30);
glVertex2i(12,26);
glVertex2i(12,30);
glVertex2f(12.5,26);
glVertex2f(12.5,30);
glVertex2i(13,26);
glVertex2i(13,30);
glVertex2f(13.5,26);
glVertex2f(13.5,30);
glVertex2i(14,26);
glVertex2i(14,30);
glVertex2f(14.5,26);
glVertex2f(14.5,30);

// Piller 3 to 4
glVertex2f(15.5,26);
glVertex2f(15.5,30);
glVertex2i(16,26);
glVertex2i(16,30);
glVertex2f(16.5,26);
glVertex2f(16.5,30);
glVertex2i(17,26);
glVertex2i(17,30);
glVertex2f(17.5,26);
glVertex2f(17.5,30);
glVertex2i(18,26);
glVertex2i(18,30);
glVertex2f(18.5,26);
glVertex2f(18.5,30);
glVertex2i(19,26);
glVertex2i(19,30);
glVertex2f(19.5,26);
glVertex2f(19.5,30);
glVertex2i(20,26);
glVertex2i(20,30);

// Piller 4 to 5
glVertex2f(20.5,26);
glVertex2f(20.5,30);
glVertex2i(21,26);
glVertex2i(21,30);
glVertex2f(21.5,26);
glVertex2f(21.5,30);
glVertex2i(22,26);
glVertex2i(22,30);
glVertex2f(22.5,26);
glVertex2f(22.5,30);
glVertex2i(23,26);
glVertex2i(23,30);
glVertex2f(23.5,26);
glVertex2f(23.5,30);
glVertex2i(24,26);
glVertex2i(24,30);
glVertex2f(24.5,26);
glVertex2f(24.5,30);

// Piller 5 to 6
glVertex2f(25.5,26);
glVertex2f(25.5,30);
glVertex2i(26,26);
glVertex2i(26,30);
glVertex2f(26.5,26);
glVertex2f(26.5,30);
glVertex2i(27,26);
glVertex2i(27,30);
glVertex2f(27.5,26);
glVertex2f(27.5,30);
glVertex2i(28,26);
glVertex2i(28,30);
glVertex2f(28.5,26);
glVertex2f(28.5,30);
glVertex2i(29,26);
glVertex2i(29,30);
glVertex2f(29.5,26);
glVertex2f(29.5,30);
glVertex2i(30,26);
glVertex2i(30,30);

// Piller 6 to 7
glVertex2f(30.5,26);
glVertex2f(30.5,30);
glVertex2i(31,26);
glVertex2i(31,30);
glVertex2f(31.5,26);
glVertex2f(31.5,30);
glVertex2i(32,26);
glVertex2i(32,30);
glVertex2f(32.5,26);
glVertex2f(32.5,30);
glVertex2i(33,26);
glVertex2i(33,30);
glVertex2f(33.5,26);
glVertex2f(33.5,30);
glVertex2i(34,26);
glVertex2i(34,30);
glVertex2f(34.5,26);
glVertex2f(34.5,30);

// Piller 7 to 8
glVertex2f(35.5,26);
glVertex2f(35.5,30);
glVertex2i(36,26);
glVertex2i(36,30);
glVertex2f(36.5,26);
glVertex2f(36.5,30);
glVertex2i(37,26);
glVertex2i(37,30);
glVertex2f(37.5,26);
glVertex2f(37.5,30);
glVertex2i(38,26);
glVertex2i(38,30);
glVertex2f(38.5,26);
glVertex2f(38.5,30);
glVertex2i(39,26);
glVertex2i(39,30);
glVertex2f(39.5,26);
glVertex2f(39.5,30);
glEnd();

/* Piller Mosjid To Left*/
glColor3ub(255,255,255);
glLineWidth(4);
glBegin(GL_LINES);
glVertex2i(63,26);
glVertex2i(63,31);
glVertex2i(76,26);
glVertex2i(76,31);
glVertex2i(80,26);
glVertex2i(80,31);
glEnd();

// Grill Near Mosjid
glColor3ub(80,80,80);
glLineWidth(2);
glBegin(GL_LINES);

// Piller 1 to 2
glVertex2f(57.5,26);
glVertex2f(57.5,30);
glVertex2f(58,26);
glVertex2f(58,30);
glVertex2f(58.5,26);
glVertex2f(58.5,30);
glVertex2i(59,26);
glVertex2i(59,30);
glVertex2f(59.5,26);
glVertex2f(59.5,30);
glVertex2i(60,26);
glVertex2i(60,30);
glVertex2f(60.5,26);
glVertex2f(60.5,30);
glVertex2i(61,26);
glVertex2i(61,30);
glVertex2f(61.5,26);
glVertex2f(61.5,30);
glVertex2i(62,26);
glVertex2i(62,30);
glVertex2f(62.5,26);
glVertex2f(62.5,30);

// Piller 2 to 3
glVertex2f(63.5,26);
glVertex2f(63.5,30);
glVertex2i(64,26);
glVertex2i(64,30);
glVertex2f(64.5,26);
glVertex2f(64.5,30);
glVertex2i(65,26);
glVertex2i(65,30);
glVertex2f(65.5,26);
glVertex2f(65.5,30);
glVertex2i(66,26);
glVertex2i(66,30);
glVertex2f(66.5,26);
glVertex2f(66.5,30);
glVertex2i(67,26);
glVertex2i(67,30);
glVertex2f(67.5,26);
glVertex2f(67.5,30);
glVertex2i(68,26);
glVertex2i(68,30);
glVertex2f(68.5,26);
glVertex2f(68.5,30);
glVertex2i(69,26);
glVertex2i(69,30);
glVertex2f(69.5,26);
glVertex2f(69.5,30);
glVertex2i(70,26);
glVertex2i(70,30);
glVertex2f(70.5,26);
glVertex2f(70.5,30);
glVertex2i(71,26);
glVertex2i(71,30);
glVertex2f(71.5,26);
glVertex2f(71.5,30);
glVertex2i(72,26);
glVertex2i(72,30);
glVertex2f(72.5,26);
glVertex2f(72.5,30);
glVertex2i(73,26);
glVertex2i(73,30);
glVertex2f(73.5,26);
glVertex2f(73.5,30);
glVertex2i(74,26);
glVertex2i(74,30);
glVertex2f(74.5,26);
glVertex2f(74.5,30);
glVertex2i(75,26);
glVertex2i(75,30);
glVertex2f(75.5,26);
glVertex2f(75.5,30);

// Piller 3 to 4
glVertex2f(76.5,26);
glVertex2f(76.5,30);
glVertex2i(77,26);
glVertex2i(77,30);
glVertex2f(77.5,26);
glVertex2f(77.5,30);
glVertex2i(78,26);
glVertex2i(78,30);
glVertex2f(78.5,26);
glVertex2f(78.5,30);
glVertex2i(79,26);
glVertex2i(79,30);
glVertex2f(79.5,26);
glVertex2f(79.5,30);


glEnd();



/* Wall Line */
glColor3ub(255,255,255);
glLineWidth(4);
glBegin(GL_LINES);
glVertex2i(0,30);
glVertex2i(40,30);

glVertex2i(57,30);
glVertex2i(80,30);

glVertex2i(76,30);
glVertex2i(80,30);
glEnd();
/* -------------------------------- Wall & Grill Start ------------------------*/

/*PEOPLE*/
   people_move();

       for(int i=0; i<1; i++)
    {
        glPushMatrix();
        glTranslatef(people_right+i,0,0);
        people(150,82,20,200,12,39,3,2);
       people(230,0,0,20,0,3,1,2);
       people(220,22,220,20,22,220,0,0);
       people(10,2,230,20,122,3,3,0);
       people(237, 154, 0,20,22,220,2,-1);


       people(150,82,20,200,12,39,40,2);

       people(45, 4, 92,20,122,3,80,0);
       people(28, 252, 3,20,22,220,81,-1);

        glPopMatrix();
    }

    glutSwapBuffers();


car_move();
for(int i=100; i>99; i--)
    {
        glPushMatrix();
        glTranslatef(car_left-i,0,0);

              car();
        glPopMatrix();
    }

    glutSwapBuffers();

/*tree*/
for(int i=1;i<38;i+=4){

    tree(i);

}
for(int i=57;i<102;i+=4){

    tree(i);

}
 glutSwapBuffers();

/*tob-right*/
glColor3ub(255, 0, 0);
circle(.2,.2,101-0.5,15.5);
glBegin(GL_QUADS);
glColor3ub(168, 133, 5);
glVertex3i(0,13,0);
glVertex3i(40,13,0);
glVertex3f(41,15.5,0);
glVertex3f(0,15.5,0);
glEnd();

/*tob-left*/
glBegin(GL_QUADS);
glColor3ub(168, 133, 5);
glVertex3i(55,13,0);
glVertex3i(100,13,0);
glVertex3f(100,15.5,0);
glVertex3f(54,15.5,0);
glEnd();




glFlush ();
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (600, 600);
glutInitWindowPosition (100, 100);
glutCreateWindow ("DIU AB-1 by |...Riad...|...Safia...|...Khalid...");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
