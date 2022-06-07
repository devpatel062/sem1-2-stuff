#include <iostream>
using namespace std;

class Rectangle
{
     int x_tl,y_tl,x_tr,y_tr,x_bl,y_br,x_br,y_bl;
    public:
    
    Rectangle()
    {
        x_tl=y_tl=x_tr=y_tr=x_bl=y_br=x_br=y_bl=0;
    }
    
    void initialise(int a,int b,int c,int d,int e,int f,int g,int h)
    {
        x_tl=a;
        y_tl=b;
        x_tr=c;
        y_tr=d;
        x_bl=e;
        y_bl=f;
        x_br=g;
        y_br=h;
    }
    
    void move_left(int clc)
    {
        x_tl-=clc;
        x_tr-=clc;
        x_bl-=clc;
        x_br-=clc;
    }
    void move_right(int clc)
    {
        x_tl+=clc;
        x_tr+=clc;
        x_bl+=clc;
        x_br+=clc;
    }
    void move_up(int clc)
    {
        y_tl+=clc;
        y_tr+=clc;
        y_bl+=clc;
        y_br+=clc;
    }
    void move_down(int clc)
    {
        y_tl-=clc;
        y_tr-=clc;
        y_bl-=clc;
        y_br-=clc;
    }
    void increase(int dec,int clc)
    {
        if(dec=='L')
        {
            x_tl-=clc;
            x_bl-=clc;
        }
        else if(dec=='R')
        {
            x_tr+=clc;
            x_br+=clc;
        }
        else if(dec=='T')
        {
            y_tl+=clc;
            y_tr+=clc;
        }
        else if(dec=='B')
        {
            y_bl-=clc;
            y_br-=clc;
        }
    }
    void decrease(int dec,int clc)
    {
        if(dec=='L')
        {
            x_tl+=clc;
            x_bl+=clc;
        }
        else if(dec=='R')
        {
            x_tr-=clc;
            x_br-=clc;
        }
        else if(dec=='T')
        {
            y_tl-=clc;
            y_tr-=clc;
        }
        else if(dec=='B')
        {
            y_bl+=clc;
            y_br+=clc;
        }
    }
    void print()
    {
        cout<<x_tl<<" "<<y_tl<<std::endl;
        cout<<x_tr<<" "<<y_tr<<std::endl;
        cout<<x_bl<<" "<<y_bl<<std::endl;
        cout<<x_br<<" "<<y_br<<std::endl;
    }
};

int main() 
{
    Rectangle r;
    int x_topleft,y_topleft,x_topright,y_topright,x_bottomleft,y_bottomleft,x_bottomright,y_bottomright,no_of_ch,mt,i=0;
    char dir;
    
    cin>>x_topleft>>y_topleft;
    cin>>x_topright>>y_topright;
    cin>>x_bottomleft>>y_bottomleft;
    cin>>x_bottomright>>y_bottomright;
    
    r.initialise(x_topleft,y_topleft,x_topright,y_topright,x_bottomleft,y_bottomleft,x_bottomright,y_bottomright);
    
    cin>>no_of_ch;
    char tmp,dec;
    int mt1;
    
    for(i=0;i<no_of_ch;i++)
    {
        cin>>dir;
        switch(dir)
        {
            case 'L':
                cin>>mt;
                r.move_left(mt);
                break;
            case 'R':
                cin>>mt;
                r.move_right(mt);
                break;
            case 'U':
                cin>>mt;
                r.move_up(mt);
                break;
            case 'D':
                cin>>mt;
                r.move_down(mt);
                break;
            case 'A':
                
                cin>>tmp;
                switch(tmp)
                {
                    case 'I':
                        cin>>dec>>mt1;
                        r.increase(dec,mt1);
                        break;
                    case 'D':
                       cin>>dec>>mt1;
                       r.decrease(dec,mt1);
                       break;
                }
        }
    }
    r.print();
    return 0;
}