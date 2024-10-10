#include<iostream>
#include<string>
#include<vector>
using namespace std;

class cyrcle
{
    private:
        int *r;
    public:
        cyrcle(int value){r= new int(value);}
        ~cyrcle(){delete r;}
        int get_r(){return *r;}
        void set_r(int val){*r = val;}

};
class triangle
{
    private:
        int *h;
        int *a;
    public:
        triangle(int value_a,int value_h){h= new int(value_h),a= new int(value_a);}
        ~triangle(){delete h;}
        int get_h(){return *h;}
        void set_h(int val){*h = val;}
        int get_a(){return *a;}
        void set_a(int val){*a = val;}

};
class kvad
{
    private:
        int *b;
    public:
        kvad(int value){b= new int(value);}
        ~kvad(){delete b;}
        int get_b(){return *b;}
        void set_b(int val){*b = val;}

};
class abstract
{
    private:
     cyrcle * cyr;
     triangle * tri;
     kvad * kw;
     public:
       abstract(int r,int h,int a,int b):cyr{new cyrcle(r)},tri{new triangle(h,a)},kw{new kvad(b)}{}
        ~abstract(){delete cyr;delete tri;delete kw;}
        void print()
        {
            cout << "cyrcle radius "<< cyr->get_r() << endl;
            cout << "triangle h "<< tri->get_h();
            cout << "   triangle a "<< tri->get_a() << endl;
            cout << " kvad b "<< kw->get_b() << endl;
        }
        void s_cyr()
        {
            
            double p = 3.14;
            cout << 2*p*cir->get << endl;
        }

};
int main()
{
    abstract ab(20,4,78,54);
    ab.print();








    
    return 0;
}