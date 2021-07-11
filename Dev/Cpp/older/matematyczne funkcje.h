#ifndef MATEMATYCZNE_FUNKCJE_H_INCLUDED
#define MATEMATYCZNE_FUNKCJE_H_INCLUDED
int abs(int x);
void sqrt(float x,float exp);
void sgn(int x);
void exp(int a,int x);
void floor(int x);
void roof(int x);


void sqrt(float x,float exp)
{
    cout<<pow(x,1/exp)<<endl;
}
void sgn(int x)
{
    if(abs(x)!=x)
        cout<<-1<<endl;
    else
        cout<<1<<endl;
}
void exp(int a,int x)
{
    cout<<pow(a,x)<<endl;
}
void floor(int x)
{
    cout<<x-1<<endl;
}
void roof(int x)
{
    cout<<x+1<<endl;
}
int abs(int x)
{
    return pow(pow(x,2),1/2);
}



#endif // MATEMATYCZNE_FUNKCJE_H_INCLUDED
