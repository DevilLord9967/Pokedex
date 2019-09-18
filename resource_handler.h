#include"inc.h"
using namespace std;
//***********************CLASS POKEMON***************************************
class pkmn
{
    int hp, spd, atk, spl_atk, def, spl_def, total;
    char s_no[5], name[30], type1[10], type2[10];
public:
    void store_pkmn();
    void display_pkmn();
    void Modify_pkmn();
    void del_pkmn();
    char *gets_no()
    {
        return s_no;
    }
};

void pkmn::store_pkmn()
{
    cout<<"Enter\nS_no. :";
    cin>>s_no;
    cout<<"\t\tName :";
    gets(name);
    gets(name);
    cout<<"\n\nType1 :";
    cin>>type1;
    cout<<"\t\tType2 :";
    cin>>type2;
    cout<<"\n\nHP :";
    cin>>hp;
    cout<<"\t\tAttack :";
    cin>>atk;
    cout<<"\n\nDefence :";
    cin>>def;
    cout<<"\t\tSpecial Attack :";
    cin>>spl_atk;
    cout<<"\n\nSpecial Defence :";
    cin>>spl_def;
    cout<<"\t\tSpeed :";
    cin>>spd;
    total=hp+spd+atk+spl_atk+def+spl_def;
}

void pkmn::display_pkmn()
{
    cout<<"\nS_no. :"<<s_no<<"\t\tName :"<<name;
    cout<<"\n\nType 1 :"<<type1<<"\t\tType 2 :"<<type2;
    cout<<"\n\nHP :"<<hp<<"\t\t\tSpeed :"<<spd;
    cout<<"\n\nAttack :"<<atk<<"\t\tSpecial Attack :"<<spl_atk;
    cout<<"\n\nDefence :"<<def<<"\t\tSpecial Defence :"<<spl_def;
    cout<<"\n\n\n\t\t Total :"<<total<<endl;
}
void pkmn::Modify_pkmn()
{
    pkmn p1;
    char ch[5];
    cout<<"\n\nEnter s_no of pkmn to be modified";
    cin>>ch;
    ifstream fp("pkmn_data.dat",ios::out|ios::binary);
    ofstream fo("temp.dat",ios::out|ios::binary);
    while(fp.read((char *)&p1,sizeof(p1)))
    {
        if(strcmp(p1.gets_no(),ch)!=0)
        {

          fo.write((char*)&p1,sizeof(p1));
          break;
        }
        else
        {
            p1.display_pkmn();
            cout<<"\n\nEnter Updated value of record...........\n";
            p1.store_pkmn();
            fo.write((char*)&p1,sizeof(p1));
        }
    }
    fp.close();
    fo.close();
    remove("pkmn_data.dat");
    rename("temp.dat","pkmn_data.dat");


}
void pkmn::del_pkmn()
{
   pkmn p1;
    char ch[5];
    cout<<"\n\nEnter s_no of pkmn to be deleted  :";
    cin>>ch;
    ifstream fp("pkmn_data.dat",ios::out|ios::binary);
    ofstream fo("temp.dat",ios::out|ios::binary);
    while(fp.read((char *)&p1,sizeof(p1)))
    {
        if(strcmp(p1.gets_no(),ch)!=0)
        {

          fo.write((char*)&p1,sizeof(p1));
          break;
        }
        else
        {
            continue;
        }
    }
    fp.close();
    fo.close();
    remove("pkmn_data.dat");
    rename("temp.dat","pkmn_data.dat");

}

//********************************************ADMIN MODE*************************
void resource_handler()
{
    //To enter records
    system("cls");
   ofstream fs("pkmn_data.dat",ios::binary|ios::out|ios::app);
   pkmn p;
   char ch;
   cout<<"\n\n\n\t\t\tADMIN MODE : Project Pokedex\n";
   cout<<"\t1.> To Enter a record (Press Y)\n";
   cout<<"\t2.> To Modify a record (Press M)\n";
   cout<<"\t3.> To Delete a record(Press F)\n";
   cout<<"\t4.> To Display all records (Press D)\n";
   ch=_getch();
   while(ch=='y'||ch=='Y')
   {
     p.store_pkmn();
     fs.write((char*)&p,sizeof(p));
     cout<<"Do you want to enter more Records :\n1.>Yes(Press Y)\n2.>No(Press N)";
     ch=_getch();
   }
   fs.close();
    //To display records
    if(ch=='d'||ch=='D')
    {
   ifstream op("pkmn_data.dat",ios::binary|ios::in);
   while(op.read((char*)&p,sizeof(p)))
   {
     p.display_pkmn();
     cout<<"\n\n";
   }
   op.close();
   }
   else if(ch=='m'||ch=='M')
   {
       p.Modify_pkmn();
   }
   else if(ch=='f'||ch=='F')
    p.del_pkmn();

}
//***********************************TO SEARCH AND DISPLAY FROM pkmn_data.dat**********
void search(char a[])
{
  pkmn p;
  int n=0;
  fstream fs("pkmn_data.dat",ios::in|ios::out);
  while(fs.read((char *)&p,sizeof(p)))
  {
      if(strcmp(p.gets_no(),a)!=0)
      {
          continue;
      }
      else
      {
        p.display_pkmn();
        n++;
        break;
      }

  }
  if(n==0)
        cout<<"Pokemon Serial no. Invalid or does not exisis\n";
  fs.close();
}
