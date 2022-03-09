/*#include<iostream>
using namespace std;
class test{
private:
    void show(){
     cout<<"private";
    }
public:
    void display(){
     cout<<"public";
     show();
    }

};
int main()
{
    test t1;
    t1.display();
}
#include<iostream>
#include<string.h>
using namespace std;
class account{
  private:
      int id;
      string name;
      float balance;
  public:
      void display(){
       id=12345;
       name="shweta patil";
       balance=1203.5;
          cout<<id<<endl;
          cout<<name<<endl;
          cout<<balance<<endl;
      }
};
int main()
{
    account a1;

    a1.display();
}
#include<iostream>
#include<string.h>
using namespace std;
class acccreat{
private:
    int accno;
    string name;
    float balance;
public:
    void creat(){
     cout<<"accno"<<endl;
     cin>>accno;
     cout<<accno<<endl;
     cout<<"name"<<endl;
     cin>>name;
     cout<<name<<endl;
     cout<<"balance";
     cin>>balance;
     cout<<balance<<endl;
    }
    void deposite(){
      float amount;
      cout<<"amount";
      cin>>amount;
      balance=balance+amount;
      cout<<balance<<endl;
     }
    void withdraw(){
     float amount;
     cout<<"amount";
     cin>>amount;
     balance=balance-amount;
     cout<<balance<<endl;
    }
};
int main()
{
   acccreat a1;
   a1.creat();
   a1.deposite();
   a1.withdraw();
}
#include<iostream>
using namespace std;
class bulb{
   private:
       int watt;
       string company;
       bool status;
   public:
       void creat(){
         cout<<"company";
         getline(cin,company);
         cout<<"watt"<<endl;
         cin>>watt;
         cout<<watt<<endl;

         cout<<company<<endl;
         cout<<"status 1/0";
         cin>>status;
       }
       void showstatus(){
         if(status==1){
            cout<<"bulb is on";
         }else{
            cout<<"bulb is off";
         }
       }
};
int main()
{
    bulb b1;
    b1.creat();
    b1.showstatus();
}
#include<iostream>
#include<string.h>
using namespace std;
class planet{
private:
    string name;
   double dist;
   double relativeG;
public:
    void info1(){
       name="earth";
       dist=78346768724.76647;
       relativeG=9.8;
       cout<<name<<endl;
       cout<<dist<<endl;
       cout<<relativeG<<endl;

    }
     void info2(){
       name="mars";
       dist=76476357969536.764587;
       relativeG=3.675;
       cout<<name<<endl;
       cout<<dist<<endl;
       cout<<relativeG<<endl;

    }
};
int main()
{
    planet p1;
    planet p2;
    p1.info1();
    p2.info2();
}
#include<iostream>
#include<string.h>
using namespace std;
class ticket{
   private:
       string dep;
       string arrival;
       int flightno;
       string seat;
   public:
       void tick(){
          cout<<"departure venue"<<endl;
          cin>>dep;

          cout<<"arrival venue"<<endl;
          cin>>arrival;

          cout<<"flight number"<<endl;
          cin>>flightno;

          cout<<"seat assignment"<<endl;
          cin>>seat;

           cout<<dep<<endl;
           cout<<arrival<<endl;
           cout<<flightno<<endl;
           cout<<seat<<endl;
       }
};
int main()
{
    ticket t1;
    ticket t2;
    t1.tick();
    t2.tick();
}
#include<iostream>
using namespace std;
class complex{
private:
    int i,imag,real,compx;
public:
    int comp(int x,int y){
          //compx=imag*i+real;
          imag=x;
          real=y;
          cout<<imag<<"i"<<"+"<<real<<endl;
    }
};
int main()
{
    int x,y,z;
    complex c1,c2;
    x=c1.comp(10,20);
    y=c2.comp(20,30);
    z=x+y;
    cout<<z<<endl;
    return 0;
}
#include<iostream>
using namespace std;
class room{
private:
    float l,b,h,vol;
public:
    int volume(int l,int b,int h){
        vol=l*b*h;
        cout<<vol;
    }
};
int main()
{
    room r1;
    r1.volume(10.2,5.3,5.6);
}
#include<iostream>
using namespace std;
class student{
private:
    string name;
    float m1,m2,m3,avg;
public:
    float stud(){
        getline(cin,name);
        cin>>m1>>m2>>m3;
        cout<<name<<endl;
        avg=(m1+m2+m3)/3;
        cout<<avg<<endl;
    }
};
int main()
{
    student s1;
    s1.stud();
}*/
#include<iostream>
using namespace std;
class box{
private:
    float l,b,h;
public:
    box(){
     cout<<"box has volume and area"<<endl;
    }
    float setvalue(){
      cin>>l>>b>>h;
    }
    float getvolume(){
     int vol=l*b*h;
     cout<<"volume is "<<vol<<endl;
    }
    float getsurfacearea(){
     int surfaceA=2*(l*b+l*h+b*h);
     cout<<"surface area is "<<surfaceA<<endl;
    }
};
int main()
{
    box b1;
    b1.setvalue();
    b1.getvolume();
    b1.getsurfacearea();
    return 0;
}















