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
if(stp==2)
{
	mode=set;
	x=3;
	speed=50;
}
if(stp==3)
{
	mode=reset;
}

if(stp==4)
{
	mode=arm;
	Armx=75;
	Army=0;
	Armz=280;
	delay=2000;
}
//--------------------------
if(stp==5)
{
	Vision=1;
	Vmode=2;
	if(Vnum==0)
	{
		mode=wait;
		delay=1500;
	}
	else
	{
		mode=step_change;
		ostep=20;
	}
}
if(stp==6)
{
	Vision=0;
	mode=reset;
}

if(stp==7)
{
	mode=move;
	x=0;
	y=-250;
	angel=0;
	speed=50;
}

if(stp==8)
{
	Vision=1;
	Vmode=2;
	if(Vnum==0)
	{
		mode=wait;
		delay=1500;
	}
	else
	{
		mode=step_change;
		ostep=20;
	}
}
if(stp==9)
{
	Vision=0;
	mode=reset;
}

if(stp==10)
{
	mode=move;
	x=0;
	y=-250;
	angel=0;
	speed=50;
}

if(stp==11)
{
	Vision=1;
	Vmode=2;
	if(Vnum==0)
	{
		mode=wait;
		delay=1500;
	}
	else
	{
		mode=step_change;
		ostep=20;
	}
}

if(stp==12)
{
	mode=stop;
}
//---------------------------


if(stp==20)
{
	mode=arm_set;
	Armx=75;
	Army=0;
	delay=2000;
}

if(stp==21)
{
	mode=arm_z;
	Armz=100;
	Grip=0;
	delay=3000;
}
if(stp==22)
{
	mode=arm_z;
	Armz=100;
	Grip=1;
	delay=1000;
}
if(stp==23)
{
	mode=arm_z;
	Armz=200;
	Grip=1;
	delay=1000;
}
if(stp==24)
{
	mode=arm;
	Armx=75;
	Army=0;
	Armz=200;
	Grip=1;
	delay=4000;
}



if(stp==25)
{
	mode=stop;
}

