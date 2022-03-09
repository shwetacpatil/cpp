/*#include<iostream>
using namespace std;
class test{
private:
    string name;
    int bal;
public:
    test(){
    getline(cin,name);
    cin>>bal;
    cout<<name<<endl;
    cout<<bal<<endl;
    }

};
int main()
{
    test t1;
    test t2;
}*/
#include<iostream>
using namespace std;
class acccreat
{
private:
    int accno;
    string name;
    float balance;
public:
    acccreat()
    {
        cout<<"accno"<<endl;
        cin>>accno;
        cout<<"name"<<endl;
        cin>>name;
        cout<<"balance";
        cin>>balance;
        cout<<accno<<endl;
        cout<<name<<endl;
        cout<<balance<<endl;
    }
    acccreat(float amount,float balance)
    {
        balance=balance+amount;
        cout<<balance<<endl;
    }
    acccreat(int amount,int balance)
    {
        balance=balance-amount;
        cout<<balance<<endl;
    }
};
int main()
{
    acccreat a1;
    acccreat a2(120,1200);
    acccreat a3(200,1200);
}
/*#include<iostream>
using namespace std;
class bulb
{
private:
    int watt;
    string company;
    bool status;
public:
    bulb()
    {
        cout<<"company";
        getline(cin,company);
        cout<<"watt"<<endl;
        cin>>watt;
        cout<<watt<<endl;

        cout<<company<<endl;
    }
    bulb(int x)
    {
        status=x;
    }
    void onoff()
    {
        if(status==1)
        {
            cout<<"bulb is on";
        }
        else
        {
            cout<<"bulb is off";
        }
    }
};
int main()
{
    bulb b1;
    bulb b2(1);
    b1.onoff();
}
#include<iostream>
using namespace std;
class planet
{
private:
    string name;
    double dist;
    double relativeG;
public:
    planet()
    {
        name="earth";
        dist=78346768724.76647;
        relativeG=9.8;
        cout<<name<<endl;
        cout<<dist<<endl;
        cout<<relativeG<<endl;

    }
    void info2()
    {
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
    p1.info2();

}
*/
/*#include<iostream>
using namespace std;
class ticket
{
private:
    string dep;
    string arrival;
    int flightno;
    string seat;
public:
    ticket()
    {
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
*/













