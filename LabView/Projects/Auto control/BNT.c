//Outputs########################################
int x;
int y;
int angel;
int delay;
int mode;
int speed;
int ostep;
int lpout;
int Armx;
int Army;
int Armz;
int G_phi;
int Grip;
int Vision;
int Vmode;
int J;
//Feedback#######################################
angel=an_in;



//Control Modes##################################
int reset=-2;
int step_change=-1; 
int stop=0;
int move=1;
int set=2;
int arm=3;
int arm_set=4;
int arm_z=5;
int wait=10;

//###############################################
//###############################################
if(stp==0)
{
	mode=move;
	x=0;
	y=0;
	angel=0;
	speed=50;
}
if(stp==1)
{
	mode=arm;
	Armx=75;
	Army=0;
	Armz=180;
	delay=2000;	
}

if(stp==3)
{
	mode=move;
	x=550;
	y=0;
	angel=0;
	speed=100;
}
if(stp==4)
{
	mode=move;
	x=0;
	y=-1100;
	angel=0;
	speed=100;
}
if(stp==5)
{
	mode=move;
	x=1200;
	y=0;
	angel=0;
	speed=100;
}
if(stp==6)
{
	mode=move;
	x=0;
	y=300;
	angel=0;
	speed=100;
}
if(stp==7)
{
	mode=move;
	x=0;
	y=0;
	angel=-90;
	speed=100;
}
if(stp==8)
{
	mode=wait;
	delay=3500;
}
if(stp==9)
{
	mode=step_change;
	ostep=20;
}
//ws10--------------------------------------
if(stp==20)
{
	mode=move;
	x=0;
	y=0;
	angel=90;
	speed=100;
}
if(stp==21)
{
	mode=move;
	x=0;
	y=800;
	angel=0;
	speed=100;
}
if(stp==22)
{
	mode=move;
	x=1900;
	y=0;
	angel=0;
	speed=100;
}
if(stp==23)
{
	mode=move;
	x=0;
	y=-400;
	angel=0;
	speed=100;
}
if(stp==24)
{
	mode=move;
	x=0;
	y=0;
	angel=180;
	speed=100;
}
if(stp==25)
{
	mode=wait;
	delay=3500;
}
if(stp==26)
{
	mode=step_change;
	ostep=30;
}
//ws8--------------------------------------
if(stp==30)
{
	mode=move;
	x=0;
	y=0;
	angel=-180;
	speed=100;
}
if(stp==31)
{
	mode=move;
	x=2700;
	y=0;
	angel=0;
	speed=100;
}
if(stp==32)
{
	mode=move;
	x=0;
	y=-1500;
	angel=0;
	speed=100;
}
if(stp==33)
{
	mode=set;
	x=3;
}
if(stp==34)
{
	mode=wait;
	delay=3500;
}
if(stp==35)
{
	mode=step_change;
	ostep=40;
}
//wp7--------------------------------------
if(stp==40)
{
	mode=move;
	x=0;
	y=-5000;
	angel=0;
	speed=100;
}
if(stp==41)
{
	mode=move;
	x=0;
	y=0;
	angel=-90;
	speed=100;
}



if(stp==42)
{
	mode=stop;
}

