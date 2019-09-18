#include"resource_handler.h"
#include"sdl.h"


//************************************************Loading ***********************//
void start()
{
int gdriver=DETECT;
int gmode,errorno;
int a=10,b=10,c=10;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
errorno=graphresult();
if(errorno!=0)
{
std::cout<<"\n cannot initialise to graphics mode";
getch();
exit(1);
}
rectangle(100,100,550,120);
outtextxy(248,130,"Connecting to server.....");
setfillstyle(SOLID_FILL,BLUE);
while(c <=450)
{
bar(101,101,99+c,119);
c+=6;
delay(50);
}
rectangle(100,150,550,170);
outtextxy(248,180,"Downloading Files.....");

while(a <=450)
{
bar(101,151,99+a,169);
a+=4;
delay(50);
}
rectangle(100,200,550,220);
outtextxy(248,230,"Creating databases.....");
while(b <=450)
{
bar(101,201,99+b,219);
b+=7;
delay(50);
}

outtextxy(200,290,"Process completed successfully!!");
delay(2000);
closegraph();
}

/*void initiate()
{
int gdriver=DETECT;
int gmode,errorno;
int right=10;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");
errorno=graphresult();
if(errorno!=0)
{
std::cout<<"\n cannot initialise to graphics mode";
getch();
exit(1);
}
rectangle(100,150,550,170);
outtextxy(248,180,"Initiating Pokedex.....");
setfillstyle(SOLID_FILL,BLUE);
while(right <=450)
{
bar(101,151,99+right,169);
right+=5;
delay(50);
}
delay(2000);
closegraph();
}
*/
//*****************************************Loading poke-ball***************************************
void initiate()
{
    int gDriver = DETECT, gMode;
    initgraph(&gDriver, &gMode, "C:\\TC\\BGI");

    setcolor(8);
    circle(315,240,100);
    circle(315,240,40);
    circle(315,240,25);
    line(215,240,415,240);
    setfillstyle(SOLID_FILL,4);
    floodfill(315,199,8);
    setfillstyle(SOLID_FILL,15);
    floodfill(315,281,8);
    floodfill(315,278,8);
    floodfill(315,263,8);
    floodfill(315,216,8);
    floodfill(315,201,8);
    setcolor(15);
    setbkcolor(4);
    outtextxy(275,165,"Initiating.........");
    setbkcolor(0);
    setcolor(14);
    settextstyle(BOLD_FONT,HORIZ_DIR,4);
    outtextxy(10,50,"##Teleporting To the Poke-World##");
    setcolor(15);
    setcolor(8);
    for(float i=0;i<55;i=i+.15)
	{
		delay(10);
		//cleardevice();
		line(315,240,315+25*cos(180+i),240+25*sin(180+i));
		line(315,240,315-25*cos(180+i),240-25*sin(180+i));
		circle(315,240,25);
	}
    closegraph();
}
//************************************Password check**************************************
void admin()
{
  p:
  char pass[15],ps,pass1[]={"pikachu"};
  int i=0;
  cout<<"\n\n\t\tEnter Password :";
  do
  {
      ps=_getch();
      if(ps!=13)
      {
        pass[i]=ps;
        cout<<"*";
      }
      i++;
  } while(ps!=13);
  delay(1000);
  char x[]={"......."};
  cout<<"\n\n\t\tAuthenticating";
  for(i=0;i<7;i++)
  {
      delay(500);
      cout<<x[i];
  }
  delay(800);
  cout<<"\n\t\t\t\tPlease wait";
  delay(3000);

  if(strcmp(pass,pass1)==0)
  {
    cout<<"\n\n\t\tLogin success!!!!!";
    delay(2000);
    resource_handler();
  }
  else
  {
   cout<<"\n\n\t\tPassword Incorrect.....Please try again.";
   goto p;
  }
}

//************************************Main Start*********************************//
using namespace std;
char x,m,temp[5],a[20];
int b;

int main(int argc, char *argv[])
{
 system("cls");

cout<<"\n\n\t\t\tPROJECT POKEDEX\n\t\t\t\tDeveloper Deepak Singhal";
cout<<"\n\n\n\tDo you want to go to Admin Mode?(Y/N)";
x=_getch();
if(x=='y'||x=='Y')
{
  admin();
}
else
{

 //start();
 cout<<"\n\n\tDo you want to initiate Pokedex ?(Y/N)\t:";
 x=_getch();
 x=toupper(x);
 if(x=='N')
 return 0;
 else
 {
  initiate();
  M:
  system("cls");
  cout<<"\n\t\t\tWELCOME TO THE POKE-WORLD\n\n";delay(1000);cout<<"\t1.First Generation(#001-#151)\n\n";delay(1000);
  cout<<"\t2.Second Generation(#152-#251)\n\n";delay(1000);cout<<"\t3.Third Generation(#252-#386)\n\n";delay(1000);
  cout<<"\t4.Fourth Generation(#387-#493)\n\n";delay(1000);cout<<"\t5.Fifth Generation(#494-#649)\n\n";delay(1000);
  cout<<"\t6.Sixth Generation(#650-#721)\n\n";delay(1000);cout<<"\t\tChoose the Pokemon Generation\t:";
  cin>>b;
  delay(1700);
  if(b==1)//****************************First Generation********************************
  {
   system("cls");//Page-1
   cout<<"\t\t\t\tFIRST GENERATION\t\tPage-1\n";delay(800);
   cout<<setw(10)<<"Serial No."<<setw(20)<<"Name of Pokemon";cout<<setw(15)<<"Serial No."<<setw(20)<<"Name of Pokemon\n";
   cout<<setw(10)<<"#001"<<setw(20)<<"Bulbasaur";cout<<setw(15)<<"#021"<<setw(20)<<"Spearow\n";
   cout<<setw(10)<<"#002"<<setw(20)<<"Ivysaur";cout<<setw(15)<<"#022"<<setw(20)<<"Fearow\n";
   cout<<setw(10)<<"#003"<<setw(20)<<"Venusaur"; cout<<setw(15)<<"#023"<<setw(20)<<"Ekans\n";
   cout<<setw(10)<<"#004"<<setw(20)<<"Charmander";cout<<setw(15)<<"#024"<<setw(20)<<"Arbok\n";
   cout<<setw(10)<<"#005"<<setw(20)<<"Charmeleon";cout<<setw(15)<<"#025"<<setw(20)<<"Pikachu\n";
   cout<<setw(10)<<"#006"<<setw(20)<<"Charizard";cout<<setw(15)<<"#026"<<setw(20)<<"Raichu\n";
   cout<<setw(10)<<"#007"<<setw(20)<<"Squirtle";cout<<setw(15)<<"#027"<<setw(20)<<"Sandshrew\n";
   cout<<setw(10)<<"#008"<<setw(20)<<"Wartortle";cout<<setw(15)<<"#028"<<setw(20)<<"Sandslash\n";
   cout<<setw(10)<<"#009"<<setw(20)<<"Blastoise";cout<<setw(15)<<"#029"<<setw(20)<<"Nidoran F\n";
   cout<<setw(10)<<"#010"<<setw(20)<<"Caterpie";cout<<setw(15)<<"#020"<<setw(20)<<"Nidorina\n";
   cout<<setw(10)<<"#011"<<setw(20)<<"Metapod";cout<<setw(15)<<"#031"<<setw(20)<<"Nidoqueen\n";
   cout<<setw(10)<<"#012"<<setw(20)<<"Butterfree";cout<<setw(15)<<"#032"<<setw(20)<<"Nidoran M\n";
   cout<<setw(10)<<"#013"<<setw(20)<<"Weedle";cout<<setw(15)<<"#033"<<setw(20)<<"Nidorino\n";
   cout<<setw(10)<<"#014"<<setw(20)<<"Kakuna";cout<<setw(15)<<"#034"<<setw(20)<<"Nidoking\n";
   cout<<setw(10)<<"#015"<<setw(20)<<"Beedrill";cout<<setw(15)<<"#035"<<setw(20)<<"Clefairy\n";
   cout<<setw(10)<<"#016"<<setw(20)<<"Pidgey";cout<<setw(15)<<"#036"<<setw(20)<<"Clefable\n";
   cout<<setw(10)<<"#017"<<setw(20)<<"Pidgeotto";cout<<setw(15)<<"#037"<<setw(20)<<"Vulpix\n";
   cout<<setw(10)<<"#018"<<setw(20)<<"Pidgeot";cout<<setw(15)<<"#038"<<setw(20)<<"Ninetales\n";
   cout<<setw(10)<<"#019"<<setw(20)<<"Rattata";cout<<setw(15)<<"#039"<<setw(20)<<"Jigglypuff\n";
   cout<<setw(10)<<"#020"<<setw(20)<<"Raticate";cout<<setw(15)<<"#040"<<setw(20)<<"Wigglytuff\n";
   delay(1000);
   cout<<"Do want to navigate to next page ?(Y/N)\t:";
   x=_getch();
   x=toupper(x);
   if(x=='N')
   {

    cout<<"\nEnter the Serial No. :#";
    cin>>temp;
    system("cls");
    search(temp);
    strcpy(a,"pngs/");
    strcat(a,temp);
    strcat(a,".png");
    read_img(a);
    cout<<"\n\nDo you want to go back to main menu ?(Y/N)\t:";
    x=_getch();
    x=toupper(x);
    if (x=='Y')
       goto M;
   }
   else
   {
    system("cls");//Page-2
    cout<<"\t\t\tFIRST GENERATION\t\tPage-2\n";delay(800);
cout<<setw(10)<<"Serial No."<<setw(20)<<"Name of Pokemon";cout<<setw(15)<<"Serial No."<<setw(20)<<"Name of Pokemon\n";
cout<<setw(10)<<"#041"<<setw(20)<<"Zubat";cout<<setw(15)<<"#061"<<setw(20)<<"Polywhirl\n";
cout<<setw(10)<<"#042"<<setw(20)<<"Golbat";cout<<setw(15)<<"#062"<<setw(20)<<"Poliwrath\n";
cout<<setw(10)<<"#043"<<setw(20)<<"Odish";cout<<setw(15)<<"#063"<<setw(20)<<"Abra\n";
cout<<setw(10)<<"#044"<<setw(20)<<"Gloom";cout<<setw(15)<<"#064"<<setw(20)<<"Kadabra\n";
cout<<setw(10)<<"#045"<<setw(20)<<"Vileplume";cout<<setw(15)<<"#065"<<setw(20)<<"Alkazam\n";
cout<<setw(10)<<"#046"<<setw(20)<<"Paras";cout<<setw(15)<<"#066"<<setw(20)<<"Machop\n";
cout<<setw(10)<<"#047"<<setw(20)<<"Parasect";cout<<setw(15)<<"#067"<<setw(20)<<"Machoke\n";
cout<<setw(10)<<"#048"<<setw(20)<<"Venonat";cout<<setw(15)<<"#068"<<setw(20)<<"Machamp\n";
cout<<setw(10)<<"#049"<<setw(20)<<"Venomoth";cout<<setw(15)<<"#069"<<setw(20)<<"Bellsprout\n";
cout<<setw(10)<<"#050"<<setw(20)<<"Diglett";cout<<setw(15)<<"#070"<<setw(20)<<"Weepinbell\n";
cout<<setw(10)<<"#051"<<setw(20)<<"Dugtrio";cout<<setw(15)<<"#071"<<setw(20)<<"Victreebell\n";
cout<<setw(10)<<"#052"<<setw(20)<<"Meowth";cout<<setw(15)<<"#072"<<setw(20)<<"Tentacool\n";
cout<<setw(10)<<"#053"<<setw(20)<<"Persian";cout<<setw(15)<<"#073"<<setw(20)<<"Tentacruel\n";
cout<<setw(10)<<"#054"<<setw(20)<<"Psyduck";cout<<setw(15)<<"#074"<<setw(20)<<"Geodude\n";
cout<<setw(10)<<"#055"<<setw(20)<<"Golduck";cout<<setw(15)<<"#075"<<setw(20)<<"Graveler\n";
cout<<setw(10)<<"#056"<<setw(20)<<"Mankey";cout<<setw(15)<<"#076"<<setw(20)<<"Golem\n";
cout<<setw(10)<<"#057"<<setw(20)<<"Primeape";cout<<setw(15)<<"#077"<<setw(20)<<"Ponyta\n";
cout<<setw(10)<<"#058"<<setw(20)<<"Growlithe";cout<<setw(15)<<"#078"<<setw(20)<<"Rapidash\n";
cout<<setw(10)<<"#059"<<setw(20)<<"Arcanine";cout<<setw(15)<<"#079"<<setw(20)<<"Slowpoke\n";
cout<<setw(10)<<"#060"<<setw(20)<<"Poliwag";cout<<setw(15)<<"#080"<<setw(20)<<"Slowbro\n";
delay(1000);
cout<<"Do want to navigate to next page ?(Y/N)\t:";
x=_getch();
x=toupper(x);
if(x=='N')
{

    cout<<"\nEnter the Serial No. :#";
    cin>>temp;
    system("cls");
    search(temp);
    strcpy(a,"pngs/");
    strcat(a,temp);
    strcat(a,".png");
    read_img(a);
    cout<<"\n\nDo you want to go back to main menu ?(Y/N)\t:";
    x=_getch();
    x=toupper(x);
    if (x=='Y')
       goto M;
}
else
{
system("cls");//Page-3
cout<<"\t\t\tFIRST GENERATION\t\tPage-3\n";delay(800);
cout<<setw(10)<<"Serial No."<<setw(20)<<"Name Of pokemon";cout<<setw(15)<<"Serial No."<<setw(20)<<"Name of Pokemon\n";
cout<<setw(10)<<"#081"<<setw(20)<<"Magnemite";cout<<setw(15)<<"#101"<<setw(20)<<"Electrode\n";
cout<<setw(10)<<"#082"<<setw(20)<<"Magneton";cout<<setw(15)<<"#102"<<setw(20)<<"Exeggcute\n";
cout<<setw(10)<<"#083"<<setw(20)<<"Farfetch'd";cout<<setw(15)<<"#103"<<setw(20)<<"Exeggutor\n";
cout<<setw(10)<<"#084"<<setw(20)<<"Doduo";cout<<setw(15)<<"#104"<<setw(20)<<"Cubone\n";
cout<<setw(10)<<"#085"<<setw(20)<<"Dodrio";cout<<setw(15)<<"#105"<<setw(20)<<"Marowak\n";
cout<<setw(10)<<"#086"<<setw(20)<<"Seel";cout<<setw(15)<<"#106"<<setw(20)<<"Hitmonlee\n";
cout<<setw(10)<<"#087"<<setw(20)<<"Dewgong";cout<<setw(15)<<"#107"<<setw(20)<<"Hitmonchan\n";
cout<<setw(10)<<"#088"<<setw(20)<<"Grimer";cout<<setw(15)<<"#108"<<setw(20)<<"Lickitung\n";
cout<<setw(10)<<"#089"<<setw(20)<<"Muk";cout<<setw(15)<<"#109"<<setw(20)<<"Koffing\n";
cout<<setw(10)<<"#090"<<setw(20)<<"Shelder";cout<<setw(15)<<"#110"<<setw(20)<<"Weezing\n";
cout<<setw(10)<<"#091"<<setw(20)<<"Cloyster";cout<<setw(15)<<"#111"<<setw(20)<<"Ryhorn\n";
cout<<setw(10)<<"#092"<<setw(20)<<"Gastly";cout<<setw(15)<<"#112"<<setw(20)<<"Rhydon\n";
cout<<setw(10)<<"#093"<<setw(20)<<"Haunter";cout<<setw(15)<<"#113"<<setw(20)<<"Chansey\n";
cout<<setw(10)<<"#094"<<setw(20)<<"Gengar";cout<<setw(15)<<"#114"<<setw(20)<<"Tangela\n";
cout<<setw(10)<<"#095"<<setw(20)<<"Onix";cout<<setw(15)<<"#115"<<setw(20)<<"Kangaskhan\n";
cout<<setw(10)<<"#096"<<setw(20)<<"Drowzee";cout<<setw(15)<<"#116"<<setw(20)<<"Horsea\n";
cout<<setw(10)<<"#097"<<setw(20)<<"Hypno";cout<<setw(15)<<"#117"<<setw(20)<<"Seadra\n";
cout<<setw(10)<<"#098"<<setw(20)<<"Krabby";cout<<setw(15)<<"#118"<<setw(20)<<"Goldeen\n";
cout<<setw(10)<<"#099"<<setw(20)<<"Kingler";cout<<setw(15)<<"#119"<<setw(20)<<"Seaking\n";
cout<<setw(10)<<"#100"<<setw(20)<<"Voltorb";cout<<setw(15)<<"#120"<<setw(20)<<"Staryu\n";
delay(1000);
cout<<"Do want to navigate to next page ?(Y/N)\t:";
x=_getch();
x=toupper(x);
if(x=='N')
{

    cout<<"\nEnter the Serial No. :#";
    cin>>temp;
    system("cls");
    search(temp);
    strcpy(a,"pngs/");
    strcat(a,temp);
    strcat(a,".png");
    read_img(a);
    cout<<"\n\nDo you want to go back to main menu ?(Y/N)\t:";
    x=_getch();
    x=toupper(x);
    if (x=='Y')
       goto M;
}
else
{
system("cls");//Page-4
cout<<"\t\t\tFIRST GENERATION\t\tPage-4\n";delay(800);
cout<<setw(10)<<"Serial No."<<setw(20)<<"Name Of pokemon";cout<<setw(15)<<"Serial No."<<setw(20)<<"Name of Pokemon\n";
cout<<setw(10)<<"#121"<<setw(20)<<"Starmie";cout<<setw(15)<<"#137"<<setw(20)<<"Porygon\n";
cout<<setw(10)<<"#122"<<setw(20)<<"Mr. Mime";cout<<setw(15)<<"#138"<<setw(20)<<"Omanyte\n";
cout<<setw(10)<<"#123"<<setw(20)<<"Scyther";cout<<setw(15)<<"#139"<<setw(20)<<"Omastar\n";
cout<<setw(10)<<"#124"<<setw(20)<<"Jynx";cout<<setw(15)<<"#140"<<setw(20)<<"Kabuto\n";
cout<<setw(10)<<"#125"<<setw(20)<<"Electrabuzz";cout<<setw(15)<<"#141"<<setw(20)<<"Kabutops\n";
cout<<setw(10)<<"#126"<<setw(20)<<"Magmar";cout<<setw(15)<<"#142"<<setw(20)<<"Aerodactyl\n";
cout<<setw(10)<<"#127"<<setw(20)<<"Pinsir";cout<<setw(15)<<"#143"<<setw(20)<<"Snorlax\n";
cout<<setw(10)<<"#128"<<setw(20)<<"Tauros";cout<<setw(15)<<"#144"<<setw(20)<<"Articuno\n";
cout<<setw(10)<<"#129"<<setw(20)<<"Magikarp";cout<<setw(15)<<"#145"<<setw(20)<<"Zapdos\n";
cout<<setw(10)<<"#130"<<setw(20)<<"Gyarados";cout<<setw(15)<<"#146"<<setw(20)<<"Moltres\n";
cout<<setw(10)<<"#131"<<setw(20)<<"Lapras";cout<<setw(15)<<"#147"<<setw(20)<<"Dratini\n";
cout<<setw(10)<<"#132"<<setw(20)<<"Ditto";cout<<setw(15)<<"#148"<<setw(20)<<"Dragonair\n";
cout<<setw(10)<<"#133"<<setw(20)<<"Eevee";cout<<setw(15)<<"#149"<<setw(20)<<"Dragonite\n";
cout<<setw(10)<<"#134"<<setw(20)<<"Vaporeon";cout<<setw(15)<<"#150"<<setw(20)<<"Mewtwo\n";
cout<<setw(10)<<"#135"<<setw(20)<<"Jolteon";cout<<setw(15)<<"#151"<<setw(20)<<"Mew\n";
cout<<setw(10)<<"#136"<<setw(20)<<"Flareon\n";
delay(1000);
cout<<"\n\nDo you want to go back to menu ?(Y/N)\t:";
x=_getch();
x=toupper(x);
if(x=='Y')
goto M;
else
{
cout<<"\nEnter the Serial No. :";

    cout<<"\nEnter the Serial No. :#";
    cin>>temp;
    system("cls");
    search(temp);
    strcpy(a,"pngs/");
    strcat(a,temp);
    strcat(a,".png");
    read_img(a);
}
}
}
}
}
else if(b==2)//*******************************Second generation****************************
{
system("cls");
cout<<"\t\t\tSECOND GENERATION\t\tPage-1\n";delay(800);
cout<<setw(10)<<"Serial No."<<setw(20)<<"Name Of pokemon";cout<<setw(15)<<"Serial No."<<setw(20)<<"Name of Pokemon\n";
cout<<setw(10)<<"#152"<<setw(20)<<"Chikorita";cout<<setw(15)<<"#172"<<setw(20)<<"Pichu\n";
cout<<setw(10)<<"#153"<<setw(20)<<"Bayleef";cout<<setw(15)<<"#173"<<setw(20)<<"Cleffa\n";
cout<<setw(10)<<"#154"<<setw(20)<<"Meganium";cout<<setw(15)<<"#174"<<setw(20)<<"Igglybuff\n";
cout<<setw(10)<<"#155"<<setw(20)<<"Cyndaquil";cout<<setw(15)<<"#175"<<setw(20)<<"Togepi\n";
cout<<setw(10)<<"#156"<<setw(20)<<"Quilava";cout<<setw(15)<<"#176"<<setw(20)<<"Togetic\n";
cout<<setw(10)<<"#157"<<setw(20)<<"Typhlosion";cout<<setw(15)<<"#177"<<setw(20)<<"Natu\n";
cout<<setw(10)<<"#158"<<setw(20)<<"Totodile";cout<<setw(15)<<"#178"<<setw(20)<<"Xatu\n";
cout<<setw(10)<<"#159"<<setw(20)<<"Croconaw";cout<<setw(15)<<"#179"<<setw(20)<<"Mareep\n";
cout<<setw(10)<<"#160"<<setw(20)<<"Feraligatr";cout<<setw(15)<<"#180"<<setw(20)<<"Flaaffy\n";
cout<<setw(10)<<"#161"<<setw(20)<<"Sentret";cout<<setw(15)<<"#181"<<setw(20)<<"Ampharos\n";
cout<<setw(10)<<"#162"<<setw(20)<<"Furret";cout<<setw(15)<<"#182"<<setw(20)<<"Bellossom\n";
cout<<setw(10)<<"#163"<<setw(20)<<"Hoothoot";cout<<setw(15)<<"#183"<<setw(20)<<"Marill\n";
cout<<setw(10)<<"#164"<<setw(20)<<"Noctowl";cout<<setw(15)<<"#184"<<setw(20)<<"Azumarill\n";
cout<<setw(10)<<"#165"<<setw(20)<<"Ledyba";cout<<setw(15)<<"#185"<<setw(20)<<"Sudowoodo\n";
cout<<setw(10)<<"#166"<<setw(20)<<"Ledian";cout<<setw(15)<<"#186"<<setw(20)<<"Politoed\n";
cout<<setw(10)<<"#167"<<setw(20)<<"Spinarak";cout<<setw(15)<<"#187"<<setw(20)<<"Hoppip\n";
cout<<setw(10)<<"#168"<<setw(20)<<"Ariados";cout<<setw(15)<<"#188"<<setw(20)<<"Skiploom\n";
cout<<setw(10)<<"#169"<<setw(20)<<"Crobat";cout<<setw(15)<<"#189"<<setw(20)<<"Jumpluff\n";
cout<<setw(10)<<"#170"<<setw(20)<<"Chinchou";cout<<setw(15)<<"#190"<<setw(20)<<"Aipom\n";
cout<<setw(10)<<"#171"<<setw(20)<<"Lanturn";cout<<setw(15)<<"#191"<<setw(20)<<"Sunkern\n";
delay(1000);
cout<<"Do you want to navigate to next page ?(Y/N)\t:";
x=_getch();
x=toupper(x);
if(x=='N')
{

    cout<<"\nEnter the Serial No. :#";
    cin>>temp;
    system("cls");
    search(temp);
    strcpy(a,"pngs/");
    strcat(a,temp);
    strcat(a,".png");
    read_img(a);
    cout<<"\n\n\tDo you want to go back to main menu ?(Y/N)\t:";
    x=_getch();
    x=toupper(x);
    if (x=='Y')
       goto M;
}
else
{
system("cls");
cout<<"\t\t\tSECOND GENERATION\t\tPage-2\n";delay(800);
cout<<setw(10)<<"Serial No."<<setw(20)<<"Name Of pokemon";cout<<setw(15)<<"Serial No."<<setw(20)<<"Name of Pokemon\n";
cout<<setw(10)<<"#192"<<setw(20)<<"Sunflora";cout<<setw(15)<<"#212"<<setw(20)<<"Scizor\n";
cout<<setw(10)<<"#193"<<setw(20)<<"Yanma";cout<<setw(15)<<"#213"<<setw(20)<<"Shuckle\n";
cout<<setw(10)<<"#194"<<setw(20)<<"Wooper";cout<<setw(15)<<"#214"<<setw(20)<<"Heracross\n";
cout<<setw(10)<<"#195"<<setw(20)<<"Quagsire";cout<<setw(15)<<"#215"<<setw(20)<<"Sneasel\n";
cout<<setw(10)<<"#196"<<setw(20)<<"Espeon";cout<<setw(15)<<"#216"<<setw(20)<<"Teddiursa\n";
cout<<setw(10)<<"#197"<<setw(20)<<"Umbreon";cout<<setw(15)<<"#217"<<setw(20)<<"Ursaring\n";
cout<<setw(10)<<"#198"<<setw(20)<<"Murkrow";cout<<setw(15)<<"#218"<<setw(20)<<"Slugma\n";
cout<<setw(10)<<"#199"<<setw(20)<<"Slowking";cout<<setw(15)<<"#219"<<setw(20)<<"Magcargo\n";
cout<<setw(10)<<"#200"<<setw(20)<<"Misdreavus";cout<<setw(15)<<"#220"<<setw(20)<<"Swinub\n";
cout<<setw(10)<<"#201"<<setw(20)<<"Unown";cout<<setw(15)<<"#221"<<setw(20)<<"Piloswine\n";
cout<<setw(10)<<"#202"<<setw(20)<<"Wobbuffet";cout<<setw(15)<<"#222"<<setw(20)<<"Corsola\n";
cout<<setw(10)<<"#203"<<setw(20)<<"Girafarig";cout<<setw(15)<<"#223"<<setw(20)<<"Remoraid\n";
cout<<setw(10)<<"#204"<<setw(20)<<"Pineco";cout<<setw(15)<<"#224"<<setw(20)<<"Octillery\n";
cout<<setw(10)<<"#205"<<setw(20)<<"Forretress";cout<<setw(15)<<"#225"<<setw(20)<<"Delibird\n";
cout<<setw(10)<<"#206"<<setw(20)<<"Dunsparce";cout<<setw(15)<<"#226"<<setw(20)<<"Mantine\n";
cout<<setw(10)<<"#207"<<setw(20)<<"Gligar";cout<<setw(15)<<"#227"<<setw(20)<<"Skarmory\n";
cout<<setw(10)<<"#208"<<setw(20)<<"Steelix";cout<<setw(15)<<"#228"<<setw(20)<<"Houndour\n";
cout<<setw(10)<<"#209"<<setw(20)<<"Snubbull";cout<<setw(15)<<"#229"<<setw(20)<<"Houndoom\n";
cout<<setw(10)<<"#210"<<setw(20)<<"Granbull";cout<<setw(15)<<"#230"<<setw(20)<<"Kingdra\n";
cout<<setw(10)<<"#211"<<setw(20)<<"Qwilfish";cout<<setw(15)<<"#231"<<setw(20)<<"Phanpy\n";
delay(1000);
cout<<"Do you want to navigate to next page ?(Y/N)\t:";
x=_getch();
x=toupper(x);
if(x=='N')
{

    cout<<"\nEnter the Serial No. :#";
    cin>>temp;
    system("cls");
    search(temp);
    strcpy(a,"pngs/");
    strcat(a,temp);
    strcat(a,".png");
    read_img(a);
    cout<<"\n\n\tDo you want to go back to main menu ?(Y/N)\t:";
    x=_getch();
    x=toupper(x);
    if (x=='Y')
       goto M;
}
else
{
system("cls");
cout<<"\t\t\tSECOND GENERATION\t\tPage-3\n";delay(800);
cout<<setw(10)<<"Serial No."<<setw(20)<<"Name Of pokemon";cout<<setw(15)<<"Serial No."<<setw(20)<<"Name of Pokemon\n";
cout<<setw(10)<<"#232"<<setw(20)<<"Donphan";cout<<setw(15)<<"#242"<<setw(20)<<"Blissey\n";
cout<<setw(10)<<"#233"<<setw(20)<<"Porygon2";cout<<setw(15)<<"#243"<<setw(20)<<"Raikou\n";
cout<<setw(10)<<"#234"<<setw(20)<<"Stantler";cout<<setw(15)<<"#244"<<setw(20)<<"Entei\n";
cout<<setw(10)<<"#235"<<setw(20)<<"Smeargle";cout<<setw(15)<<"#245"<<setw(20)<<"Suicune\n";
cout<<setw(10)<<"#236"<<setw(20)<<"Tyrogue";cout<<setw(15)<<"#246"<<setw(20)<<"Larvitar\n";
cout<<setw(10)<<"#237"<<setw(20)<<"Hitmontop";cout<<setw(15)<<"#247"<<setw(20)<<"pupitar\n";
cout<<setw(10)<<"#238"<<setw(20)<<"Smoochum";cout<<setw(15)<<"#248"<<setw(20)<<"Tyranitar\n";
cout<<setw(10)<<"#239"<<setw(20)<<"Elekid";cout<<setw(15)<<"#249"<<setw(20)<<"Lugia\n";
cout<<setw(10)<<"#240"<<setw(20)<<"Magby";cout<<setw(15)<<"#250"<<setw(20)<<"Ho-oh\n";
cout<<setw(10)<<"#241"<<setw(20)<<"Miltank";cout<<setw(15)<<"#251"<<setw(20)<<"Celebi\n";
delay(1000);
cout<<"Do you want to go back to menu ?(Y/N)\t:";
x=_getch();
x=toupper(x);
if(x=='Y')
goto M;
else
{
    cout<<"\nEnter the Serial No. :#";
    cin>>temp;
    system("cls");
    search(temp);
    strcpy(a,"pngs/");
    strcat(a,temp);
    strcat(a,".png");
    read_img(a);
}
}
}
}
else if(b==3)//*****************************Third Generation***************************
{
system("cls");
cout<<"\t\t\tTHIRD GENERATION\t\tPage-1\n";delay(800);
cout<<setw(10)<<"Serial No."<<setw(20)<<"Name Of pokemon";cout<<setw(15)<<"Serial No."<<setw(20)<<"Name of Pokemon\n";
cout<<setw(10)<<"#252"<<setw(20)<<"Treecko";cout<<setw(15)<<"#272"<<setw(20)<<"Ludicolo\n";
cout<<setw(10)<<"#253"<<setw(20)<<"Grovyle";cout<<setw(15)<<"#273"<<setw(20)<<"Seedot\n";
cout<<setw(10)<<"#254"<<setw(20)<<"Sceptile";cout<<setw(15)<<"#274"<<setw(20)<<"Nuzleaf\n";
cout<<setw(10)<<"#255"<<setw(20)<<"Torchic";cout<<setw(15)<<"#275"<<setw(20)<<"Shiftry\n";
cout<<setw(10)<<"#256"<<setw(20)<<"Combusken";cout<<setw(15)<<"#276"<<setw(20)<<"Taillow\n";
cout<<setw(10)<<"#257"<<setw(20)<<"Blaiziken";cout<<setw(15)<<"#277"<<setw(20)<<"Swellow\n";
cout<<setw(10)<<"#258"<<setw(20)<<"Mudkip";cout<<setw(15)<<"#278"<<setw(20)<<"Wingull\n";
cout<<setw(10)<<"#259"<<setw(20)<<"Marshtomp";cout<<setw(15)<<"#279"<<setw(20)<<"Pelipper\n";
cout<<setw(10)<<"#260"<<setw(20)<<"Swampert";cout<<setw(15)<<"#280"<<setw(20)<<"Ralts\n";
cout<<setw(10)<<"#261"<<setw(20)<<"Poochyena";cout<<setw(15)<<"#281"<<setw(20)<<"Kirlia\n";
cout<<setw(10)<<"#262"<<setw(20)<<"Mightyena";cout<<setw(15)<<"#282"<<setw(20)<<"Gardevoir\n";
cout<<setw(10)<<"#263"<<setw(20)<<"Zigzagoon";cout<<setw(15)<<"#283"<<setw(20)<<"Surskit\n";
cout<<setw(10)<<"#264"<<setw(20)<<"Linoone";cout<<setw(15)<<"#284"<<setw(20)<<"Masquerain\n";
cout<<setw(10)<<"#265"<<setw(20)<<"Wurmple";cout<<setw(15)<<"#285"<<setw(20)<<"Shroomish\n";
cout<<setw(10)<<"#266"<<setw(20)<<"Silcoon";cout<<setw(15)<<"#286"<<setw(20)<<"Breloom\n";
cout<<setw(10)<<"#267"<<setw(20)<<"Beautifly";cout<<setw(15)<<"#287"<<setw(20)<<"Slakoth\n";
cout<<setw(10)<<"#268"<<setw(20)<<"Cascoon";cout<<setw(15)<<"#288"<<setw(20)<<"Vigoroth\n";
cout<<setw(10)<<"#269"<<setw(20)<<"Dustox";cout<<setw(15)<<"#289"<<setw(20)<<"Slaking\n";
cout<<setw(10)<<"#270"<<setw(20)<<"Lotad";cout<<setw(15)<<"#290"<<setw(20)<<"Nincada\n";
cout<<setw(10)<<"#271"<<setw(20)<<"Lombre";cout<<setw(15)<<"#291"<<setw(20)<<"Ninjask\n";
delay(1000);
cout<<"Do you want to navigate to next page ?(Y/N)\t:";
x=_getch();
x=toupper(x);
if(x=='N')
{

    cout<<"\nEnter the Serial No. :#";
    cin>>temp;
    system("cls");
    search(temp);
    strcpy(a,"pngs/");
    strcat(a,temp);
    strcat(a,".png");
    read_img(a);
    cout<<"\n\n\tDo you want to go back to main menu ?(Y/N)\t:";
    x=_getch();
    x=toupper(x);
    if (x=='Y')
       goto M;
}
else
{
system("cls");
cout<<"\t\t\tTHIRD GENERATION\t\tPage-2\n";delay(800);
cout<<setw(10)<<"Serial No."<<setw(20)<<"Name Of pokemon";cout<<setw(15)<<"Serial No."<<setw(20)<<"Name of Pokemon\n";
cout<<setw(10)<<"#292"<<setw(20)<<"Shedninja";cout<<setw(15)<<"#312"<<setw(20)<<"Minun\n";
cout<<setw(10)<<"#293"<<setw(20)<<"Whismur";cout<<setw(15)<<"#313"<<setw(20)<<"Volbeat\n";
cout<<setw(10)<<"#294"<<setw(20)<<"Loudred";cout<<setw(15)<<"#314"<<setw(20)<<"Illumise\n";
cout<<setw(10)<<"#295"<<setw(20)<<"Exploud";cout<<setw(15)<<"#315"<<setw(20)<<"Roselia\n";
cout<<setw(10)<<"#296"<<setw(20)<<"Makuhita";cout<<setw(15)<<"#316"<<setw(20)<<"Gulpin\n";
cout<<setw(10)<<"#297"<<setw(20)<<"Hariyama";cout<<setw(15)<<"#317"<<setw(20)<<"Swalot\n";
cout<<setw(10)<<"#298"<<setw(20)<<"Azurill";cout<<setw(15)<<"#318"<<setw(20)<<"Carvanah\n";
cout<<setw(10)<<"#299"<<setw(20)<<"Nosepass";cout<<setw(15)<<"#319"<<setw(20)<<"Sharpedo\n";
cout<<setw(10)<<"#300"<<setw(20)<<"Skitty";cout<<setw(15)<<"#320"<<setw(20)<<"Walimer\n";
cout<<setw(10)<<"#301"<<setw(20)<<"Delcatty";cout<<setw(15)<<"#321"<<setw(20)<<"Wailord\n";
cout<<setw(10)<<"#302"<<setw(20)<<"Sableye";cout<<setw(15)<<"#322"<<setw(20)<<"Numel\n";
cout<<setw(10)<<"#303"<<setw(20)<<"Mawile";cout<<setw(15)<<"#323"<<setw(20)<<"Camerupt\n";
cout<<setw(10)<<"#304"<<setw(20)<<"Aron";cout<<setw(15)<<"#324"<<setw(20)<<"Torkoal\n";
cout<<setw(10)<<"#305"<<setw(20)<<"Lairon";cout<<setw(15)<<"#325"<<setw(20)<<"Spoink\n";
cout<<setw(10)<<"#306"<<setw(20)<<"Aggron";cout<<setw(15)<<"#326"<<setw(20)<<"Grumpig\n";
cout<<setw(10)<<"#307"<<setw(20)<<"Meditite";cout<<setw(15)<<"#327"<<setw(20)<<"Spinda\n";
cout<<setw(10)<<"#308"<<setw(20)<<"Medicham";cout<<setw(15)<<"#328"<<setw(20)<<"Trapinch\n";
cout<<setw(10)<<"#309"<<setw(20)<<"Electrike";cout<<setw(15)<<"#329"<<setw(20)<<"Vibrava\n";
cout<<setw(10)<<"#310"<<setw(20)<<"Manectric";cout<<setw(15)<<"#330"<<setw(20)<<"Flygon\n";
cout<<setw(10)<<"#311"<<setw(20)<<"Plusle";cout<<setw(15)<<"#331"<<setw(20)<<"Cacnea\n";
delay(1000);
cout<<"Do you want to navigate to next page ?(Y/N)\t:";
x=_getch();
x=toupper(x);
if(x=='N')
{

    cout<<"\nEnter the Serial No. :#";
    cin>>temp;
    system("cls");
    search(temp);
    strcpy(a,"pngs/");
    strcat(a,temp);
    strcat(a,".png");
    read_img(a);
    cout<<"\n\n\tDo you want to go back to main menu ?(Y/N)\t:";
    x=_getch();
    x=toupper(x);
    if (x=='Y')
       goto M;
}
else
{
system("cls");
cout<<"\t\t\tTHIRD GENERATION\t\tPage-3\n";delay(800);
cout<<setw(10)<<"Serial No."<<setw(20)<<"Name Of pokemon";cout<<setw(15)<<"Serial No."<<setw(20)<<"Name of Pokemon\n";
cout<<setw(10)<<"#332"<<setw(20)<<"Cacturne";cout<<setw(15)<<"#352"<<setw(20)<<"Kecleon\n";
cout<<setw(10)<<"#333"<<setw(20)<<"Swablu";cout<<setw(15)<<"#353"<<setw(20)<<"Shuppet\n";
cout<<setw(10)<<"#334"<<setw(20)<<"Altaria";cout<<setw(15)<<"#354"<<setw(20)<<"Banette\n";
cout<<setw(10)<<"#335"<<setw(20)<<"Zangoose";cout<<setw(15)<<"#355"<<setw(20)<<"Duskull\n";
cout<<setw(10)<<"#336"<<setw(20)<<"Seviper";cout<<setw(15)<<"#356"<<setw(20)<<"Dusclops\n";
cout<<setw(10)<<"#337"<<setw(20)<<"Lunatone";cout<<setw(15)<<"#357"<<setw(20)<<"Tropius\n";
cout<<setw(10)<<"#338"<<setw(20)<<"Solrock";cout<<setw(15)<<"#358"<<setw(20)<<"Chimecho\n";
cout<<setw(10)<<"#339"<<setw(20)<<"Barboach";cout<<setw(15)<<"#359"<<setw(20)<<"Absol\n";
cout<<setw(10)<<"#340"<<setw(20)<<"Whiscash";cout<<setw(15)<<"#360"<<setw(20)<<"Wynaut\n";
cout<<setw(10)<<"#341"<<setw(20)<<"Corphish";cout<<setw(15)<<"#361"<<setw(20)<<"Snorunt\n";
cout<<setw(10)<<"#342"<<setw(20)<<"Crawdaunt";cout<<setw(15)<<"#362"<<setw(20)<<"Galile\n";
cout<<setw(10)<<"#343"<<setw(20)<<"Baltoy";cout<<setw(15)<<"#363"<<setw(20)<<"Spheal\n";
cout<<setw(10)<<"#344"<<setw(20)<<"Claydol";cout<<setw(15)<<"#364"<<setw(20)<<"Sealeo\n";
cout<<setw(10)<<"#345"<<setw(20)<<"Lileep";cout<<setw(15)<<"#365"<<setw(20)<<"Walrein\n";
cout<<setw(10)<<"#346"<<setw(20)<<"Cradlily";cout<<setw(15)<<"#366"<<setw(20)<<"Clapmpert\n";
cout<<setw(10)<<"#347"<<setw(20)<<"Anorith";cout<<setw(15)<<"#367"<<setw(20)<<"Huntail\n";
cout<<setw(10)<<"#348"<<setw(20)<<"Armaldo";cout<<setw(15)<<"#368"<<setw(20)<<"Gorebyss\n";
cout<<setw(10)<<"#349"<<setw(20)<<"Feebas";cout<<setw(15)<<"#369"<<setw(20)<<"Relicanth\n";
cout<<setw(10)<<"#350"<<setw(20)<<"Milotic";cout<<setw(15)<<"#370"<<setw(20)<<"Luvdisc\n";
cout<<setw(10)<<"#351"<<setw(20)<<"Castform";cout<<setw(15)<<"#371"<<setw(20)<<"Bagon\n";
delay(1000);
cout<<"Do you want to navigate to next page ?(Y/N)\t:";
x=_getch();
x=toupper(x);
if(x=='N')
{

    cout<<"\nEnter the Serial No. :#";
    cin>>temp;
    system("cls");
    search(temp);
    strcpy(a,"pngs/");
    strcat(a,temp);
    strcat(a,".png");
    read_img(a);
    cout<<"\n\n\tDo you want to go back to main menu ?(Y/N)\t:";
    x=_getch();
    x=toupper(x);
    if (x=='Y')
       goto M;
}
else
{
system("cls");
cout<<"\t\t\tTHIRD GENERATION\t\tPage-4\n";delay(800);
cout<<setw(10)<<"Serial No."<<setw(20)<<"Name Of pokemon";cout<<setw(15)<<"Serial No."<<setw(20)<<"Name of Pokemon\n";
cout<<setw(10)<<"#372"<<setw(20)<<"Shelgon";cout<<setw(15)<<"#380"<<setw(20)<<"Latias\n";
cout<<setw(10)<<"#373"<<setw(20)<<"Salamence";cout<<setw(15)<<"#381"<<setw(20)<<"Latios\n";
cout<<setw(10)<<"#374"<<setw(20)<<"Beldum";cout<<setw(15)<<"#382"<<setw(20)<<"Kyogre\n";
cout<<setw(10)<<"#375"<<setw(20)<<"Metang";cout<<setw(15)<<"#383"<<setw(20)<<"Groudon\n";
cout<<setw(10)<<"#376"<<setw(20)<<"Metagross";cout<<setw(15)<<"#384"<<setw(20)<<"Rayquaza\n";
cout<<setw(10)<<"#377"<<setw(20)<<"Regirock";cout<<setw(15)<<"#385"<<setw(20)<<"Jirachi\n";
cout<<setw(10)<<"#378"<<setw(20)<<"Regice";cout<<setw(15)<<"#386"<<setw(20)<<"Deoxys\n";
cout<<setw(10)<<"#379"<<setw(20)<<"Registeel\n";

delay(1000);
cout<<"Do you want to go back to menu ?(Y/N)\t:";
x=_getch();
x=toupper(x);
if(x=='Y')
goto M;
else
{

    cout<<"\nEnter the Serial No. :#";
    cin>>temp;
    system("cls");
    search(temp);
    strcpy(a,"pngs/");
    strcat(a,temp);
    strcat(a,".png");
    read_img(a);
}
}
}
}
}
else if(b==4)//*********************************Fourth Generation***********************
{
system("cls");
cout<<"\t\t\tFOURTH GENERATION\t\tPage-1\n";delay(800);
cout<<setw(10)<<"Serial No."<<setw(20)<<"Name Of pokemon";cout<<setw(15)<<"Serial No."<<setw(20)<<"Name of Pokemon\n";
cout<<setw(10)<<"#387"<<setw(20)<<"Turtwig";cout<<setw(15)<<"#407"<<setw(20)<<"Roserade\n";
cout<<setw(10)<<"#388"<<setw(20)<<"Grotle";cout<<setw(15)<<"#408"<<setw(20)<<"Cranidos\n";
cout<<setw(10)<<"#389"<<setw(20)<<"Torterra";cout<<setw(15)<<"#409"<<setw(20)<<"Rampardos\n";
cout<<setw(10)<<"#390"<<setw(20)<<"Chimchar";cout<<setw(15)<<"#410"<<setw(20)<<"Sheildon\n";
cout<<setw(10)<<"#391"<<setw(20)<<"Monferno";cout<<setw(15)<<"#411"<<setw(20)<<"Bastiodon\n";
cout<<setw(10)<<"#392"<<setw(20)<<"Infernape";cout<<setw(15)<<"#412"<<setw(20)<<"Burmy\n";
cout<<setw(10)<<"#393"<<setw(20)<<"Piplup";cout<<setw(15)<<"#413"<<setw(20)<<"Wormadam\n";
cout<<setw(10)<<"#394"<<setw(20)<<"Prinplup";cout<<setw(15)<<"#414"<<setw(20)<<"Mothim\n";
cout<<setw(10)<<"#395"<<setw(20)<<"Empoleon";cout<<setw(15)<<"#415"<<setw(20)<<"Combee\n";
cout<<setw(10)<<"#396"<<setw(20)<<"Starly";cout<<setw(15)<<"#416"<<setw(20)<<"Vespiquen\n";
cout<<setw(10)<<"#397"<<setw(20)<<"Staravia";cout<<setw(15)<<"#417"<<setw(20)<<"Pachirisu\n";
cout<<setw(10)<<"#398"<<setw(20)<<"Staraptor";cout<<setw(15)<<"#418"<<setw(20)<<"Buizel\n";
cout<<setw(10)<<"#399"<<setw(20)<<"Bidoof";cout<<setw(15)<<"#419"<<setw(20)<<"Floatzel\n";
cout<<setw(10)<<"#400"<<setw(20)<<"Bibarel";cout<<setw(15)<<"#420"<<setw(20)<<"Cherubi\n";
cout<<setw(10)<<"#401"<<setw(20)<<"Kricketot";cout<<setw(15)<<"#421"<<setw(20)<<"Cherrim\n";
cout<<setw(10)<<"#402"<<setw(20)<<"Kricketune";cout<<setw(15)<<"#422"<<setw(20)<<"Shellos\n";
cout<<setw(10)<<"#403"<<setw(20)<<"Shinx";cout<<setw(15)<<"#423"<<setw(20)<<"Gastrodon\n";
cout<<setw(10)<<"#404"<<setw(20)<<"Luxio";cout<<setw(15)<<"#424"<<setw(20)<<"Ambipom\n";
cout<<setw(10)<<"#405"<<setw(20)<<"Luxary";cout<<setw(15)<<"#425"<<setw(20)<<"Drifloon\n";
cout<<setw(10)<<"#406"<<setw(20)<<"Budew";cout<<setw(15)<<"#426"<<setw(20)<<"Drifblim\n";
delay(1000);
cout<<"Do you want to navigate to next page ?(Y/N)\t:";
x=_getch();
x=toupper(x);
if(x=='N')
{

    cout<<"\nEnter the Serial No. :#";
    cin>>temp;
    system("cls");
    search(temp);
    strcpy(a,"pngs/");
    strcat(a,temp);
    strcat(a,".png");
    read_img(a);
    cout<<"\n\n\tDo you want to go back to main menu ?(Y/N)\t:";
    x=_getch();
    x=toupper(x);
    if (x=='Y')
       goto M;
}
else
{
system("cls");
cout<<"\t\t\tFOURTH GENERATION\t\tPage-2\n";delay(800);
cout<<setw(10)<<"Serial No."<<setw(20)<<"Name Of pokemon";cout<<setw(15)<<"Serial No."<<setw(20)<<"Name of Pokemon\n";
cout<<setw(10)<<"#427"<<setw(20)<<"Buneary";cout<<setw(15)<<"#447"<<setw(20)<<"Riolu\n";
cout<<setw(10)<<"#428"<<setw(20)<<"Lopunny";cout<<setw(15)<<"#448"<<setw(20)<<"Lucario\n";
cout<<setw(10)<<"#429"<<setw(20)<<"Mismagius";cout<<setw(15)<<"#449"<<setw(20)<<"Hippopotas\n";
cout<<setw(10)<<"#430"<<setw(20)<<"Honchkrow";cout<<setw(15)<<"#450"<<setw(20)<<"Hippowdon\n";
cout<<setw(10)<<"#431"<<setw(20)<<"Glameow";cout<<setw(15)<<"#451"<<setw(20)<<"Skorupi\n";
cout<<setw(10)<<"#432"<<setw(20)<<"Purugly";cout<<setw(15)<<"#452"<<setw(20)<<"Drapion\n";
cout<<setw(10)<<"#433"<<setw(20)<<"Chingling";cout<<setw(15)<<"#453"<<setw(20)<<"Coragunk\n";
cout<<setw(10)<<"#434"<<setw(20)<<"Stunky";cout<<setw(15)<<"#454"<<setw(20)<<"Toxicroak\n";
cout<<setw(10)<<"#435"<<setw(20)<<"Skuntank";cout<<setw(15)<<"#455"<<setw(20)<<"Carnivine\n";
cout<<setw(10)<<"#436"<<setw(20)<<"Bronzor";cout<<setw(15)<<"#456"<<setw(20)<<"Finneon\n";
cout<<setw(10)<<"#437"<<setw(20)<<"Bronzong";cout<<setw(15)<<"#457"<<setw(20)<<"Lumineon\n";
cout<<setw(10)<<"#438"<<setw(20)<<"Bonsly";cout<<setw(15)<<"#458"<<setw(20)<<"Mantyke\n";
cout<<setw(10)<<"#439"<<setw(20)<<"Mime Jr.";cout<<setw(15)<<"#459"<<setw(20)<<"Snover\n";
cout<<setw(10)<<"#440"<<setw(20)<<"Happiny";cout<<setw(15)<<"#460"<<setw(20)<<"Abomasnow\n";
cout<<setw(10)<<"#441"<<setw(20)<<"Chatot";cout<<setw(15)<<"#461"<<setw(20)<<"Weavile\n";
cout<<setw(10)<<"#442"<<setw(20)<<"Spiritomb";cout<<setw(15)<<"#462"<<setw(20)<<"Magnezone\n";
cout<<setw(10)<<"#443"<<setw(20)<<"Gible";cout<<setw(15)<<"#463"<<setw(20)<<"Lickilicky\n";
cout<<setw(10)<<"#444"<<setw(20)<<"Gabite";cout<<setw(15)<<"#464"<<setw(20)<<"Rhyperior\n";
cout<<setw(10)<<"#445"<<setw(20)<<"Garchomp";cout<<setw(15)<<"#465"<<setw(20)<<"Tangrowth\n";
cout<<setw(10)<<"#446"<<setw(20)<<"Munchlax";cout<<setw(15)<<"#466"<<setw(20)<<"Electivire\n";
delay(1000);
cout<<"Do you want to navigate to next page ?(Y/N)\t:";
x=_getch();
x=toupper(x);
if(x=='N')
{

    cout<<"\nEnter the Serial No. :#";
    cin>>temp;
    system("cls");
    search(temp);
    strcpy(a,"pngs/");
    strcat(a,temp);
    strcat(a,".png");
    read_img(a);
    cout<<"\n\n\tDo you want to go back to main menu ?(Y/N)\t:";
    x=_getch();
    x=toupper(x);
    if (x=='Y')
       goto M;
}
else
{
system("cls");
cout<<"\t\t\tFOURTH GENERATION\t\tPage-3\n";delay(800);
cout<<setw(10)<<"Serial No."<<setw(20)<<"Name Of pokemon";cout<<setw(15)<<"Serial No."<<setw(20)<<"Name of Pokemon\n";
cout<<setw(10)<<"#467"<<setw(20)<<"Magmortar";cout<<setw(15)<<"#481"<<setw(20)<<"Mesprit\n";
cout<<setw(10)<<"#468"<<setw(20)<<"Togekiss";cout<<setw(15)<<"#482"<<setw(20)<<"Azelf\n";
cout<<setw(10)<<"#469"<<setw(20)<<"Yanmega";cout<<setw(15)<<"#483"<<setw(20)<<"Dialga\n";
cout<<setw(10)<<"#470"<<setw(20)<<"Leafeon";cout<<setw(15)<<"#484"<<setw(20)<<"Palkia\n";
cout<<setw(10)<<"#471"<<setw(20)<<"Glaceon";cout<<setw(15)<<"#485"<<setw(20)<<"Heatran\n";
cout<<setw(10)<<"#472"<<setw(20)<<"Gliscor";cout<<setw(15)<<"#486"<<setw(20)<<"Regigigas\n";
cout<<setw(10)<<"#473"<<setw(20)<<"Mamoswine";cout<<setw(15)<<"#487"<<setw(20)<<"Giratina\n";
cout<<setw(10)<<"#474"<<setw(20)<<"Porygon-z";cout<<setw(15)<<"#488"<<setw(20)<<"Cresselia\n";
cout<<setw(10)<<"#475"<<setw(20)<<"Gallade";cout<<setw(15)<<"#489"<<setw(20)<<"Phione\n";
cout<<setw(10)<<"#476"<<setw(20)<<"Probopass";cout<<setw(15)<<"#490"<<setw(20)<<"Manaphy\n";
cout<<setw(10)<<"#477"<<setw(20)<<"Dusknoir";cout<<setw(15)<<"#491"<<setw(20)<<"Darkrai\n";
cout<<setw(10)<<"#478"<<setw(20)<<"Frostlass";cout<<setw(15)<<"#492"<<setw(20)<<"Shaymin\n";
cout<<setw(10)<<"#479"<<setw(20)<<"Rotom";cout<<setw(15)<<"#493"<<setw(20)<<"Arceus\n";
cout<<setw(10)<<"#480"<<setw(20)<<"Uxie\n";
delay(1000);
cout<<"Do you want to go back to menu ?(Y/N)\t:";
x=_getch();
x=toupper(x);
if(x=='Y')
goto M;
else
{

    cout<<"\nEnter the Serial No. :#";
    cin>>temp;
    system("cls");
    search(temp);
    strcpy(a,"pngs/");
    strcat(a,temp);
    strcat(a,".png");
    read_img(a);
}
}
}
}
else if(b==5)//************************************Fifth Generation********************
{
system("cls");
cout<<"\t\t\tFIFTH GENERATION\t\tPage-1\n";delay(800);
cout<<setw(10)<<"Serial No."<<setw(20)<<"Name Of pokemon";cout<<setw(15)<<"Serial No."<<setw(20)<<"Name of Pokemon\n";
cout<<setw(10)<<"#494"<<setw(20)<<"Victini";cout<<setw(15)<<"#514"<<setw(20)<<"Simisear\n";
cout<<setw(10)<<"#495"<<setw(20)<<"Snivy";cout<<setw(15)<<"#515"<<setw(20)<<"Panpour\n";
cout<<setw(10)<<"#496"<<setw(20)<<"Servine";cout<<setw(15)<<"#516"<<setw(20)<<"Simipour\n";
cout<<setw(10)<<"#497"<<setw(20)<<"Serperior";cout<<setw(15)<<"#517"<<setw(20)<<"Munna\n";
cout<<setw(10)<<"#498"<<setw(20)<<"Tepig";cout<<setw(15)<<"#518"<<setw(20)<<"Musharna\n";
cout<<setw(10)<<"#499"<<setw(20)<<"Pignite";cout<<setw(15)<<"#519"<<setw(20)<<"Pidove\n";
cout<<setw(10)<<"#500"<<setw(20)<<"Emboar";cout<<setw(15)<<"#520"<<setw(20)<<"Tranquill\n";
cout<<setw(10)<<"#501"<<setw(20)<<"Oshawatt";cout<<setw(15)<<"#521"<<setw(20)<<"Unfezant\n";
cout<<setw(10)<<"#502"<<setw(20)<<"Dewott";cout<<setw(15)<<"#522"<<setw(20)<<"Blitzle\n";
cout<<setw(10)<<"#503"<<setw(20)<<"Samurott";cout<<setw(15)<<"#523"<<setw(20)<<"Zebstrika\n";
cout<<setw(10)<<"#504"<<setw(20)<<"Patrat";cout<<setw(15)<<"#524"<<setw(20)<<"Roggenrola\n";
cout<<setw(10)<<"#505"<<setw(20)<<"Watchog";cout<<setw(15)<<"#525"<<setw(20)<<"Boldore\n";
cout<<setw(10)<<"#506"<<setw(20)<<"Lillipup";cout<<setw(15)<<"#526"<<setw(20)<<"Gigalith\n";
cout<<setw(10)<<"#507"<<setw(20)<<"Herdier";cout<<setw(15)<<"#527"<<setw(20)<<"Woobat\n";
cout<<setw(10)<<"#508"<<setw(20)<<"Stoutland";cout<<setw(15)<<"#528"<<setw(20)<<"Swoobat\n";
cout<<setw(10)<<"#509"<<setw(20)<<"Purrlion";cout<<setw(15)<<"#529"<<setw(20)<<"Drilbur\n";
cout<<setw(10)<<"#510"<<setw(20)<<"Liepard";cout<<setw(15)<<"#530"<<setw(20)<<"Excadrill\n";
cout<<setw(10)<<"#511"<<setw(20)<<"Pansage";cout<<setw(15)<<"#531"<<setw(20)<<"Audino\n";
cout<<setw(10)<<"#512"<<setw(20)<<"Simisage";cout<<setw(15)<<"#532"<<setw(20)<<"Timburr\n";
cout<<setw(10)<<"#513"<<setw(20)<<"Pansear";cout<<setw(15)<<"#533"<<setw(20)<<"Gurdurr\n";
delay(1000);
cout<<"Do you want to navigate to next page ?(Y/N)\t:";
x=_getch();
x=toupper(x);
if(x=='N')
{

    cout<<"\nEnter the Serial No. :#";
    cin>>temp;
    system("cls");
    search(temp);
    strcpy(a,"pngs/");
    strcat(a,temp);
    strcat(a,".png");
    read_img(a);
    cout<<"\n\n\tDo you want to go back to main menu ?(Y/N)\t:";
    x=_getch();
    x=toupper(x);
    if (x=='Y')
       goto M;
}
else
{
system("cls");
cout<<"\t\t\tFIFTH GENERATION\t\tPage-2\n";delay(800);
cout<<setw(10)<<"Serial No."<<setw(20)<<"Name Of pokemon";cout<<setw(15)<<"Serial No."<<setw(20)<<"Name of Pokemon\n";
cout<<setw(10)<<"#534"<<setw(20)<<"Conkeldurr";cout<<setw(15)<<"#554"<<setw(20)<<"Darumaka\n";
cout<<setw(10)<<"#535"<<setw(20)<<"Tympole";cout<<setw(15)<<"#555"<<setw(20)<<"Darmanitan\n";
cout<<setw(10)<<"#536"<<setw(20)<<"Palpitoad";cout<<setw(15)<<"#556"<<setw(20)<<"Maractus\n";
cout<<setw(10)<<"#537"<<setw(20)<<"Seismitoad";cout<<setw(15)<<"#557"<<setw(20)<<"Dwebble\n";
cout<<setw(10)<<"#538"<<setw(20)<<"Throh";cout<<setw(15)<<"#558"<<setw(20)<<"Crustle\n";
cout<<setw(10)<<"#539"<<setw(20)<<"Sawk";cout<<setw(15)<<"#559"<<setw(20)<<"Scraggy\n";
cout<<setw(10)<<"#540"<<setw(20)<<"Sewaddle";cout<<setw(15)<<"#560"<<setw(20)<<"Scrafty\n";
cout<<setw(10)<<"#541"<<setw(20)<<"Swadloon";cout<<setw(15)<<"#561"<<setw(20)<<"Sigilyph\n";
cout<<setw(10)<<"#542"<<setw(20)<<"Leavanny";cout<<setw(15)<<"#562"<<setw(20)<<"Yamask\n";
cout<<setw(10)<<"#543"<<setw(20)<<"Venipede";cout<<setw(15)<<"#563"<<setw(20)<<"Cofagrigus\n";
cout<<setw(10)<<"#544"<<setw(20)<<"Whirlipede";cout<<setw(15)<<"#564"<<setw(20)<<"Tirtouga\n";
cout<<setw(10)<<"#545"<<setw(20)<<"Scolipede";cout<<setw(15)<<"#565"<<setw(20)<<"Carracosta\n";
cout<<setw(10)<<"#546"<<setw(20)<<"Cottonee";cout<<setw(15)<<"#566"<<setw(20)<<"Archen\n";
cout<<setw(10)<<"#547"<<setw(20)<<"Whimsicott";cout<<setw(15)<<"#567"<<setw(20)<<"Archeops\n";
cout<<setw(10)<<"#548"<<setw(20)<<"Petilil";cout<<setw(15)<<"#568"<<setw(20)<<"Trubbish\n";
cout<<setw(10)<<"#549"<<setw(20)<<"Lilligant";cout<<setw(15)<<"#569"<<setw(20)<<"Garbodor\n";
cout<<setw(10)<<"#550"<<setw(20)<<"Basculin";cout<<setw(15)<<"#570"<<setw(20)<<"Zorua\n";
cout<<setw(10)<<"#551"<<setw(20)<<"Sandile";cout<<setw(15)<<"#571"<<setw(20)<<"Zoroark\n";
cout<<setw(10)<<"#552"<<setw(20)<<"Krokorok";cout<<setw(15)<<"#572"<<setw(20)<<"Minccino\n";
cout<<setw(10)<<"#553"<<setw(20)<<"Krookodile";cout<<setw(15)<<"#573"<<setw(20)<<"Cinccino\n";
delay(1000);
cout<<"Do you want to navigate to next page ?(Y/N)\t:";
x=_getch();
x=toupper(x);
if(x=='N')
{

    cout<<"\nEnter the Serial No. :#";
    cin>>temp;
    system("cls");
    search(temp);
    strcpy(a,"pngs/");
    strcat(a,temp);
    strcat(a,".png");
    read_img(a);
    cout<<"\n\n\tDo you want to go back to main menu ?(Y/N)\t:";
    x=_getch();
    x=toupper(x);
    if (x=='Y')
       goto M;
}
else
{
system("cls");
cout<<"\t\t\tFIFTH GENERATION\t\tPage-3\n";delay(800);
cout<<setw(10)<<"Serial No."<<setw(20)<<"Name Of pokemon";cout<<setw(15)<<"Serial No."<<setw(20)<<"Name of Pokemon\n";
cout<<setw(10)<<"#574"<<setw(20)<<"Gothita";cout<<setw(15)<<"#594"<<setw(20)<<"Alomomola\n";
cout<<setw(10)<<"#575"<<setw(20)<<"Gothorita";cout<<setw(15)<<"#595"<<setw(20)<<"Joltik\n";
cout<<setw(10)<<"#576"<<setw(20)<<"Gothitelle";cout<<setw(15)<<"#596"<<setw(20)<<"Galvantula\n";
cout<<setw(10)<<"#577"<<setw(20)<<"Solosis";cout<<setw(15)<<"#597"<<setw(20)<<"Ferroseed\n";
cout<<setw(10)<<"#578"<<setw(20)<<"Duosion";cout<<setw(15)<<"#598"<<setw(20)<<"Ferrothorn\n";
cout<<setw(10)<<"#579"<<setw(20)<<"Reuniclus";cout<<setw(15)<<"#599"<<setw(20)<<"Klink\n";
cout<<setw(10)<<"#580"<<setw(20)<<"Ducklett";cout<<setw(15)<<"#600"<<setw(20)<<"Klang\n";
cout<<setw(10)<<"#581"<<setw(20)<<"Swanna";cout<<setw(15)<<"#601"<<setw(20)<<"Klinklang\n";
cout<<setw(10)<<"#582"<<setw(20)<<"Vanillite";cout<<setw(15)<<"#602"<<setw(20)<<"Tynamo\n";
cout<<setw(10)<<"#583"<<setw(20)<<"Vanillish";cout<<setw(15)<<"#603"<<setw(20)<<"Elektrik\n";
cout<<setw(10)<<"#584"<<setw(20)<<"Vanilluxe";cout<<setw(15)<<"#604"<<setw(20)<<"Eelektross\n";
cout<<setw(10)<<"#585"<<setw(20)<<"Deerling";cout<<setw(15)<<"#605"<<setw(20)<<"Elgyem\n";
cout<<setw(10)<<"#586"<<setw(20)<<"Sawsbuck";cout<<setw(15)<<"#606"<<setw(20)<<"Beheeyem\n";
cout<<setw(10)<<"#587"<<setw(20)<<"Emolga";cout<<setw(15)<<"#607"<<setw(20)<<"Litwick\n";
cout<<setw(10)<<"#588"<<setw(20)<<"Karrablast";cout<<setw(15)<<"#608"<<setw(20)<<"Lampent\n";
cout<<setw(10)<<"#589"<<setw(20)<<"Escavalier";cout<<setw(15)<<"#609"<<setw(20)<<"Chandelure\n";
cout<<setw(10)<<"#590"<<setw(20)<<"Foongus";cout<<setw(15)<<"#610"<<setw(20)<<"Axew\n";
cout<<setw(10)<<"#591"<<setw(20)<<"Amoonguss";cout<<setw(15)<<"#611"<<setw(20)<<"Fraxure\n";
cout<<setw(10)<<"#592"<<setw(20)<<"Frillish";cout<<setw(15)<<"#612"<<setw(20)<<"Haxorus\n";
cout<<setw(10)<<"#593"<<setw(20)<<"Jellicent";cout<<setw(15)<<"#613"<<setw(20)<<"Cubchoo\n";
delay(1000);
cout<<"Do you want to navigate to next page ?(Y/N)\t:";
x=_getch();
x=toupper(x);
if(x=='N')
{

    cout<<"\nEnter the Serial No. :#";
    cin>>temp;
    system("cls");
    search(temp);
    strcpy(a,"pngs/");
    strcat(a,temp);
    strcat(a,".png");
    read_img(a);
    cout<<"\n\n\tDo you want to go back to main menu ?(Y/N)\t:";
    x=_getch();
    x=toupper(x);
    if (x=='Y')
       goto M;
}
else
{
system("cls");
cout<<"\t\t\tFIFTH GENERATION\t\tPage-4\n";delay(800);
cout<<setw(10)<<"Serial No."<<setw(20)<<"Name Of pokemon";cout<<setw(15)<<"Serial No."<<setw(20)<<"Name of Pokemon\n";
cout<<setw(10)<<"#614"<<setw(20)<<"Beartic";cout<<setw(15)<<"#632"<<setw(20)<<"Durant\n";
cout<<setw(10)<<"#615"<<setw(20)<<"Cryogonal";cout<<setw(15)<<"#633"<<setw(20)<<"Deino\n";
cout<<setw(10)<<"#616"<<setw(20)<<"Shelmet";cout<<setw(15)<<"#634"<<setw(20)<<"Zweilous\n";
cout<<setw(10)<<"#617"<<setw(20)<<"Accelgor";cout<<setw(15)<<"#635"<<setw(20)<<"Hydreigon\n";
cout<<setw(10)<<"#618"<<setw(20)<<"Stunfisk";cout<<setw(15)<<"#636"<<setw(20)<<"Larvesta\n";
cout<<setw(10)<<"#619"<<setw(20)<<"Mienfoo";cout<<setw(15)<<"#637"<<setw(20)<<"Volcarona\n";
cout<<setw(10)<<"#620"<<setw(20)<<"Mienshao";cout<<setw(15)<<"#638"<<setw(20)<<"Cobalion\n";
cout<<setw(10)<<"#621"<<setw(20)<<"Druddigon";cout<<setw(15)<<"#639"<<setw(20)<<"Terrakion\n";
cout<<setw(10)<<"#622"<<setw(20)<<"Golett";cout<<setw(15)<<"#640"<<setw(20)<<"Virizion\n";
cout<<setw(10)<<"#623"<<setw(20)<<"Golurk";cout<<setw(15)<<"#641"<<setw(20)<<"Tornadus\n";
cout<<setw(10)<<"#624"<<setw(20)<<"Pawniard";cout<<setw(15)<<"#642"<<setw(20)<<"Thundurus\n";
cout<<setw(10)<<"#625"<<setw(20)<<"Bisharp";cout<<setw(15)<<"#643"<<setw(20)<<"Reshiram\n";
cout<<setw(10)<<"#626"<<setw(20)<<"Bouffalant";cout<<setw(15)<<"#644"<<setw(20)<<"Zekrom\n";
cout<<setw(10)<<"#627"<<setw(20)<<"Rufflet";cout<<setw(15)<<"#645"<<setw(20)<<"Landorus\n";
cout<<setw(10)<<"#628"<<setw(20)<<"Braviary";cout<<setw(15)<<"#646"<<setw(20)<<"Kyurem\n";
cout<<setw(10)<<"#629"<<setw(20)<<"Vullaby";cout<<setw(15)<<"#647"<<setw(20)<<"Keldeo\n";
cout<<setw(10)<<"#630"<<setw(20)<<"Mandibuzz";cout<<setw(15)<<"#648"<<setw(20)<<"Meloetta\n";
cout<<setw(10)<<"#631"<<setw(20)<<"Heatmor";cout<<setw(15)<<"#649"<<setw(20)<<"Genesect\n";
delay(1000);
cout<<"Do you want to go back to menu ?(Y/N)\t:";
x=_getch();
x=toupper(x);
if(x=='Y')
goto M;
else
{

    cout<<"\nEnter the Serial No. :#";
    cin>>temp;
    system("cls");
    search(temp);
    strcpy(a,"pngs/");
    strcat(a,temp);
    strcat(a,".png");
    read_img(a);
}
}
}
}
}
else//***************************************Sixth Generation****************************
{
system("cls");
cout<<"\t\t\tSIXTH GENERATION\t\tPage-1\n";delay(800);
cout<<setw(10)<<"Serial No."<<setw(20)<<"Name Of pokemon";cout<<setw(15)<<"Serial No."<<setw(20)<<"Name of Pokemon\n";
cout<<setw(10)<<"#650"<<setw(20)<<"Chespin";cout<<setw(15)<<"#670"<<setw(20)<<"Floette\n";
cout<<setw(10)<<"#651"<<setw(20)<<"Quilladin";cout<<setw(15)<<"#671"<<setw(20)<<"Florges\n";
cout<<setw(10)<<"#652"<<setw(20)<<"Chesnaught";cout<<setw(15)<<"#672"<<setw(20)<<"Skiddo\n";
cout<<setw(10)<<"#653"<<setw(20)<<"Fennekin";cout<<setw(15)<<"#673"<<setw(20)<<"Gogoat\n";
cout<<setw(10)<<"#654"<<setw(20)<<"Braixen";cout<<setw(15)<<"#674"<<setw(20)<<"Pancham\n";
cout<<setw(10)<<"#655"<<setw(20)<<"Delphox";cout<<setw(15)<<"#675"<<setw(20)<<"Pangoro\n";
cout<<setw(10)<<"#656"<<setw(20)<<"Froakie";cout<<setw(15)<<"#676"<<setw(20)<<"Furfrou\n";
cout<<setw(10)<<"#657"<<setw(20)<<"Frogadier";cout<<setw(15)<<"#677"<<setw(20)<<"Espurr\n";
cout<<setw(10)<<"#658"<<setw(20)<<"Greninja";cout<<setw(15)<<"#678"<<setw(20)<<"Meowstic\n";
cout<<setw(10)<<"#659"<<setw(20)<<"Bunnelby";cout<<setw(15)<<"#679"<<setw(20)<<"Honedge\n";
cout<<setw(10)<<"#660"<<setw(20)<<"Diggersby";cout<<setw(15)<<"#680"<<setw(20)<<"Doublade\n";
cout<<setw(10)<<"#661"<<setw(20)<<"Fletchling";cout<<setw(15)<<"#681"<<setw(20)<<"Aegislash\n";
cout<<setw(10)<<"#662"<<setw(20)<<"Fletchinder";cout<<setw(15)<<"#682"<<setw(20)<<"Sptitzee\n";
cout<<setw(10)<<"#663"<<setw(20)<<"Talonflame";cout<<setw(15)<<"#683"<<setw(20)<<"Aromatisse\n";
cout<<setw(10)<<"#664"<<setw(20)<<"Scatterbug";cout<<setw(15)<<"#684"<<setw(20)<<"Swirlix\n";
cout<<setw(10)<<"#665"<<setw(20)<<"Spewpa";cout<<setw(15)<<"#685"<<setw(20)<<"Slurpuff\n";
cout<<setw(10)<<"#666"<<setw(20)<<"Vivillon";cout<<setw(15)<<"#686"<<setw(20)<<"Inkay\n";
cout<<setw(10)<<"#667"<<setw(20)<<"Litleo";cout<<setw(15)<<"#687"<<setw(20)<<"Malamar\n";
cout<<setw(10)<<"#668"<<setw(20)<<"Pyroar";cout<<setw(15)<<"#688"<<setw(20)<<"Binacle\n";
cout<<setw(10)<<"#669"<<setw(20)<<"Flabebe";cout<<setw(15)<<"#689"<<setw(20)<<"Barbaracle\n";
delay(1000);
cout<<"Do you want to navigate to next page ?(Y/N)\t:";
x=_getch();
x=toupper(x);
if(x=='N')
{

    cout<<"\nEnter the Serial No. :#";
    cin>>temp;
    system("cls");
    search(temp);
    strcpy(a,"pngs/");
    strcat(a,temp);
    strcat(a,".png");
    read_img(a);
    cout<<"\n\n\tDo you want to go back to main menu ?(Y/N)\t:";
    x=_getch();
    x=toupper(x);
    if (x=='Y')
       goto M;
}
else
{
system("cls");
cout<<"\t\t\tSIXTH GENERATION\t\tPage-2\n";delay(800);
cout<<setw(10)<<"Serial No."<<setw(20)<<"Name Of pokemon";cout<<setw(15)<<"Serial No."<<setw(20)<<"Name of Pokemon\n";
cout<<setw(10)<<"#690"<<setw(20)<<"Skrelp";cout<<setw(15)<<"#706"<<setw(20)<<"Goodra\n";
cout<<setw(10)<<"#691"<<setw(20)<<"Dragalge";cout<<setw(15)<<"#707"<<setw(20)<<"Klefki\n";
cout<<setw(10)<<"#692"<<setw(20)<<"Clauncher";cout<<setw(15)<<"#708"<<setw(20)<<"Phantump\n";
cout<<setw(10)<<"#693"<<setw(20)<<"Clawitzer";cout<<setw(15)<<"#709"<<setw(20)<<"Trevenant\n";
cout<<setw(10)<<"#694"<<setw(20)<<"Helioptile";cout<<setw(15)<<"#710"<<setw(20)<<"Pumpkaboo\n";
cout<<setw(10)<<"#695"<<setw(20)<<"Heliolisk";cout<<setw(15)<<"#711"<<setw(20)<<"Gourgeist\n";
cout<<setw(10)<<"#696"<<setw(20)<<"Tyrunt";cout<<setw(15)<<"#712"<<setw(20)<<"Bergmite\n";
cout<<setw(10)<<"#697"<<setw(20)<<"Tyrantrum";cout<<setw(15)<<"#713"<<setw(20)<<"Avalugg\n";
cout<<setw(10)<<"#698"<<setw(20)<<"Amaura";cout<<setw(15)<<"#714"<<setw(20)<<"Noibat\n";
cout<<setw(10)<<"#699"<<setw(20)<<"Aurorus";cout<<setw(15)<<"#715"<<setw(20)<<"Noivern\n";
cout<<setw(10)<<"#700"<<setw(20)<<"Sylveon";cout<<setw(15)<<"#716"<<setw(20)<<"Xerneas\n";
cout<<setw(10)<<"#701"<<setw(20)<<"Hawlucha";cout<<setw(15)<<"#717"<<setw(20)<<"Yveltal\n";
cout<<setw(10)<<"#702"<<setw(20)<<"Dedenne";cout<<setw(15)<<"#718"<<setw(20)<<"Zygarde\n";
cout<<setw(10)<<"#703"<<setw(20)<<"Carbink";cout<<setw(15)<<"#719"<<setw(20)<<"Diancie\n";
cout<<setw(10)<<"#704"<<setw(20)<<"Goomy";cout<<setw(15)<<"#720"<<setw(20)<<"Hoopa\n";
cout<<setw(10)<<"#705"<<setw(20)<<"Sliggoo";cout<<setw(15)<<"#721"<<setw(20)<<"Volcanion\n";
delay(1000);
}
cout<<"Do you want to go back to menu ?(Y/N)\t:";
x=_getch();
x=toupper(x);
if(x=='Y')
goto M;
else
{

    cout<<"\nEnter the Serial No. :#";
    cin>>temp;
    system("cls");
    search(temp);
    strcpy(a,"pngs/");
    strcat(a,temp);
    strcat(a,".png");
    read_img(a);
}
}
}
}
return 0;
}






