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
	x=0;
	y=0;
	angel=0;
	speed=50;
}
if(stp==-5)
{
	mode=move;
	x=450;
	y=0;
	angel=0;
	speed=100;
}
if(stp==-4)
{
	mode=move;
	x=0;
	y=-1500;
	angel=0;
	speed=100;
}
if(stp==-3)
{
	mode=move;
	x=1000;
	y=0;
	angel=0;
	speed=100;
}
if(stp==-2)
{
	mode=move;
	x=0;
	y=0;
	angel=-90;
	speed=100;
}
if(stp==-1)
{
	mode=set;
	x=1;	
}
if(stp==0)
{
	mode=reset;
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
	Vmode=1;
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
	y=-250;
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
	Vmode=1;
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
	y=-250;
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
	Vmode=1;
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
	y=500;
	angel=0;
	speed=100;
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
	delay=1000;
}
if(stp==505) /////////deliver
{
	if(Din1==1)
	{
		mode=move;
		x=0;
		y=-250;
		angel=0;
		speed=100;
	}
	else
	{
		mode=step_change;
		ostep=506;
	}
}

if(stp==506)
{
	mode=arm_p;
	Armp=180;
	delay=4000;
}

if(stp==507)
{
	mode=arm_z;
	Armz=115;
	Grip=1;
	delay=1500;
}
if(stp==508)
{
	mode=arm_z;
	Armz=115;
	Grip=0;
	delay=1000;
}

if(stp==509)
{
	mode=arm_z;
	Armz=95;
	Grip=0;
	delay=1000;
}
if(stp==510)
{
	mode=reset;
}
if(stp==511) /////////deliver
{
	mode=move;
	x=0;
	if(Din1==1)
	{
		y=-1200;
	}
	else if(Din1==2)
	{
		y=-1200;
	}
	else if(Din1==3)
	{
		y=-950;
	}
	angel=0;
	speed=100;
}
if(stp==512) 
{
	mode=move;
	x=1700;
	y=0;
	angel=0;
	speed=100;
}
if(stp==513) 
{
	mode=move;
	x=0;
	y=0;
	angel=-90;
	speed=100;
}
if(stp==514)
{
	mode=reset;
}

if(stp==515)
{
	mode=arm_z;
	Armz=95;
	Grip=1;
	delay=1000;
}
if(stp==516)
{
	mode=arm_z;
	Armz=200;
	Grip=1;
	delay=1000;
}
if(stp==517)
{
	mode=step_change;
	ostep=521;
}
if(stp==521)
{
	mode=arm_p;
	Armp=0;
	delay=4000;
}
if(stp==522)
{
	mode=arm;
	Armx=150;
	Army=0;
	Armz=20;
	Grip=1;
	J=90;
	delay=2000;
}
if(stp==523)
{
	mode=arm_z;
	Armz=20;
	Grip=0;
	delay=1000;
}
if(stp==524)
{
	mode=arm_z;
	Armz=200;
	Grip=0;
	delay=1000;
}
if(stp==525)/////////return
{
	mode=reset;
}
if(stp==526)
{
	mode=move;
	x=-500;	
	y=0;
	angel=0;
	speed=100;
}
if(stp==527)
{
	mode=move;
	x=0;
	y=0;
	angel=-90;
	speed=100;
}
if(stp==528)
{
	mode=move;
	x=-250;	
	y=0;
	angel=0;
	speed=100;
}
if(stp==529)/////////return
{
	mode=reset;
}
if(stp==530)
{
	if(Oin!=5)
	{
		mode=step_change;
		ostep=1;
	}
	else
	{
		Oout=Oin+1;
		mode=step_change;
		ostep=550;
	}
	
}


if(stp==528)
{
	mode=stop;
}

