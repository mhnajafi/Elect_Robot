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
if(stp==-2)
	mode=move;
	x=0;
	y=0;
	angel=0;
	speed=50;
}
if(stp==-1)
{
	mode=move;
	x=1200;
	y=0;
	angel=0;
	speed=100;
}

if(stp==0)
{
	mode=move;
	x=0;
	y=1360;
	angel=0;
	speed=100;
}
if(stp==1)
{
	mode=arm;
	Armx=75;
	Army=0;
	Armz=280;
	J=90;
	delay=4000;	
}

//Obj Search--------------------------
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
	Vision=1;
	Vmode=Din2;
	if(Vnum==0)
	{
		mode=wait;
		delay=1500;
	}
	else
	{
		Dout1=1;
		Dout2=Din2+1;
		mode=step_change;
		ostep=500;
	}
}
if(stp==5)
{
	Vision=0;
	mode=reset;
}

if(stp==6)
{
	mode=move;
	x=0;
	y=250;
	angel=0;
	speed=50;
}
if(stp==7)
{
	mode=reset;
}
if(stp==8)
{
	Vision=1;
	Vmode=Din2;
	if(Vnum==0)
	{
		mode=wait;
		delay=1500;
	}
	else
	{
		Dout1=2;
		Dout2=Din2+1;
		mode=step_change;
		ostep=500;
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
	y=250;
	angel=0;
	speed=50;
}
if(stp==11)
{
	mode=reset;
}
if(stp==12)
{
	Vision=1;
	Vmode=Din2;
	if(Vnum==0)
	{
		mode=wait;
		delay=1500;
	}
	else
	{
		Dout1=3;
		Dout2=Din2+1;
		mode=step_change;
		ostep=500;
	}
}


if(stp==13)
{
	Vision=0;
	mode=reset;
}

if(stp==14)
{
	mode=move;
	x=0;
	y=-500;
	angel=0;
	speed=50;
}

if(stp==15)
{
	Dout2=Din2+1;
	mode=step_change;
	ostep=2;
}

//---------------------------


if(stp==500)
{
	mode=arm_set;
	Armx=75;
	Army=0;
	delay=2000;
}

if(stp==501)
{
	mode=arm_z;
	Armz=100;
	Grip=0;
	delay=3000;
}
if(stp==502)
{
	mode=arm_z;
	Armz=100;
	Grip=1;
	delay=1000;
}
if(stp==503)
{
	mode=arm_z;
	Armz=200;
	Grip=1;
	delay=1000;
}
if(stp==504)
{
	mode=arm;
	Armx=20;
	Army=0;
	Armz=200;
	Grip=1;
	J=90;
	delay=4000;
}
if(stp==505)
{
	mode=arm_p;
	Armp=180;
	delay=4000;
}
if(stp==506)
{
	mode=arm_z;
	Armz=115;
	Grip=1;
	delay=1500;
}
if(stp==507)
{
	mode=arm_z;
	Armz=115;
	Grip=0;
	delay=1000;
}

if(stp==508)
{
	mode=arm_z;
	Armz=95;
	Grip=0;
	delay=1000;
}
if(stp==509)
{
	mode=reset;
}
if(stp==510) //deliver
{
	mode=move;
	x=0;
	y=1500;
	angel=0;
	speed=50;
}
if(stp==511)
{
	mode=arm_z;
	Armz=95;
	Grip=1;
	delay=1000;
}
if(stp==512)
{
	mode=arm_z;
	Armz=130;
	Grip=1;
	delay=1000;
}
if(stp==513)
{
	mode=arm_p;
	Armp=90;
	delay=4000;
}
if(stp==514)
{
	mode=arm;
	Armx=250;
	Army=0;
	Armz=130;
	Grip=1;
	J=90;
	delay=4000;
}
if(stp==515)
{
	mode=arm_z;
	Armz=130;
	Grip=0;
	delay=1000;
}
if(stp==516)/////////return
{
	mode=reset;
}
if(stp==517)
{
	mode=move;
	x=0;
	if(Din1==1)
	{
		y=-1500;
	}
	else if(Din1==2)
	{
		y=-1500;
	}
	else if(Din1==3)
	{
		y=-1500;
	}
	angel=0;
	speed=50;
}
if(stp==518)/////////return
{
	mode=reset;
}
if(stp==519)
{
	if(Oin!=5)
	{
		Oout=Oin+1;
		mode=step_change;
		ostep=1;
	}
	else
	{
		mode=step_change;
		ostep=550;
	}
	
}


if(stp==550)
{
	mode=stop;
}

