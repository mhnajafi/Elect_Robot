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
int Armp;
int Dout1;
int Dout2;
int Oout;
//Feedback#######################################
angel=an_in;
Dout1=Din1;
Dout2=Din2;
Oout=Oin;


//Control Modes##################################
int reset=-2;
int step_change=-1; 
int stop=0;
int move=1;
int set=2;
int arm=3;
int arm_set=4;
int arm_z=5;
int arm_p=6;
int wait=10;

//###############################################
//###############################################
if(stp==-6)
{
	mode=move;
	x=450;
	y=0;
	angel=0;
	speed=100;
}
if(stp==-5)
{
	mode=move;
	x=0;
	y=-1500;
	angel=0;
	speed=100;
}
if(stp==-4)
{
	mode=move;
	x=500;
	y=0;
	angel=0;
	speed=100;
}
if(stp==-3)
{
	mode=move;
	x=0;
	y=-1200;
	angel=0;
	speed=100;
}
if(stp==-2)
{
	mode=move;
	x=1000;
	y=0;
	angel=0;
	speed=100;
}
if(stp==-1)
{
	mode=reset;
}
if(stp==0)
{
	mode=move;
	x=-500;
	y=0;
	angel=0;
	speed=100;
}
if(stp==1)
{
	mode=move;
	x=0;
	y=-3000;
	angel=0;
	speed=100;
}
if(stp==2)
{
	mode=move;
	x=4600;
	y=0;
	angel=0;
	speed=100;
}
if(stp==3)
{
	mode=move;
	x=0;
	y=1700;
	angel=0;
	speed=100;

}

if(stp==7)
{
	mode=stop;
}
