#include <bits/stdc++.h>
using namespace std ;
// Phase #1
double power(double base , int pow) ;
long long fact(int n) ;
double absolute(double n);

// Phase #2
double factorial(int n);
double sin(double n) ;
double cos(double n) ;
double tan(double n) ;
double arcsin(double x) ;
double arccos(double x) ;
double arctan(double x) ;
double ln(double n) ;
double sinh(double n) ;
double cosh(double n) ;
double tanh(double n) ;
double exp(double n) ;
double logBase10 (double n) ;
double log(double base , double n) ;
double TenPowerX(double x) ;
double aPOWERx(double a , double x) ;
double sqrt(double x) ;
double BaseROUTEx(double base , double x) ;
// Phase 3
double m(string v,double x) ;

const double Pi = 3.14159265 ;
#define PI=180;

int main()
{
    cout << "Help" << endl ;
    cout << "Example : " << endl ;
    cout << "1. choose your state degrees Or radians " << endl ;
    cout << "2. Enter the number (30)" << endl ;
    cout << "3. Enter the function(sin)" << endl << endl ;
    double num1,num2,num3,sum=1;
    string  str1,str2;
    cout << "Functions name :" << endl ;
    cout << "1.sin 2.cos 3.tan 4.arcsin 5.arccos 6.arctan 7.sinh 8.cosh 9.tanh 10.ln" << endl ;
    cout << "11.exp 12.logBase10 13.log 14.TenPowerX 15.aPOWERx 16.sqrt 17.BaseROUTEx 18.M" << endl ;
    cout << "19.power 20.abs 21.fact" << endl << endl ;
    cout<<"Enter (degrees) Or (radians)"<<endl;
    cin>>str1 ;

    system ("CLS") ;

    cout<<"0\b";
    cin>>num1;
    cout << endl ;
    sum=num1;
    for(;;)
    {
        cin>>str2;
        if((str1=="degrees")and(str2=="sin"))
        {
//            cout<<sin(sum)<<endl;
            sum=sin(sum);
        }
        else  if((str1=="degrees")and(str2=="cos"))
        {
//            cout<<cos(sum)<<endl;
            sum=cos(sum);
        }
        else if((str1=="degrees")and(str2=="tan"))
        {
//            cout<<tan(sum)<<endl;
            sum=tan(sum);
        }
         if((str1=="degrees")and(str2=="sinh"))
        {
//            cout<<sin(sum)<<endl;
            sum=sinh(sum);
        }
        else  if((str1=="degrees")and(str2=="cosh"))
        {
//            cout<<cos(sum)<<endl;
            sum=cosh(sum);
        }
        else if((str1=="radians")and(str2=="sinh"))
        {
            sum*=180/3.14159265;
//            cout<<sin(sum)<<endl;
            sum=sinh(sum);
        }
        else  if((str1=="radians")and(str2=="cosh"))
        {
            sum*=180/3.14159265;
//            cout<<cos(sum)<<endl;
            sum=cosh(sum);
        }
        else if((str1=="radians")and(str2=="tanh"))
        {
            sum*=180/3.14159265;
//            cout<<tan(sum)<<endl;
            sum=tanh(sum);
        }
        else if((str1=="degrees")and(str2=="tanh"))
        {
//            cout<<tan(sum)<<endl;
            sum=tanh(sum);
        }
        else  if((str1=="degrees")and(str2=="arcsin"))
        {
//            cout<<arcsin(sum)<<endl;
            sum=arcsin(sum);
        }
        else  if((str1=="degrees")and(str2=="arccos"))
        {
//            cout<<arccos(sum)<<endl;
            sum=arccos(sum);
        }
        else if((str1=="radians")and(str2=="sin"))
        {
            sum*=180/3.14159265;
//            cout<<sin(sum)<<endl;
            sum=sin(sum);
        }
        else  if((str1=="radians")and(str2=="cos"))
        {
            sum*=180/3.14159265;
//            cout<<cos(sum)<<endl;
            sum=cos(sum);
        }
        else if((str1=="radians")and(str2=="tan"))
        {
            sum*=180/3.14159265;
//            cout<<tan(sum)<<endl;
            sum=tan(sum);
        }
        else  if((str1=="radians")and(str2=="arcsin"))
        {
            sum*=180/3.14159265;
//            cout<<arcsin(sum)<<endl;
            sum=arcsin(sum);
        }
        else  if((str1=="radians")and(str2=="arccos"))
        {
            sum*=3.14159265/180;
//            cout<<arccos(sum)<<endl;
            sum=arccos(sum);
        }
        else  if((str1=="radians")and(str2=="arctan"))
        {
            sum*=180/3.14159265;
//            cout<<arctan(sum)<<endl;
            sum=arctan(sum);
        }
        else if(str2=="ln")
        {
//            cout<<ln(sum)<<endl;
            sum=ln(sum);
        }
        else if(str2=="power")
        {
            cin>>num2;
//            cout<<power(sum,num2)<<endl;
            sum=power(sum,num2);
        }
        else if(str2=="fact")
        {
//            cout<<factorial(sum)<<endl;
            sum=factorial(sum);
        }
        else if (str2=="abs")
        {
//            cout<<absolute(sum)<<endl;
            sum=absolute(sum);
        }
        else if(str2=="exp")
        {
//            cout<<exp(sum)<<endl;
            sum=exp(sum);
        }
        else if(str2=="logBase10")
        {
//            cout<<logBase10(sum)<<endl;
            sum=logBase10(sum);
        }
        else if(str2=="log")
        {
//            cout<<log(sum)<<endl;
            sum=log(sum);
        }
        else if(str2=="TenPowerX")
        {
//            cout<<TenPowerX(sum)<<endl;
            sum=TenPowerX(sum);
        }
        else if(str2=="aPOWERx")
        {
            cin>>num2;
//            cout<< aPOWERx(sum,num2)<<endl;
            sum= aPOWERx(sum,num2);
        }
        else if(str2=="sqrt")
        {
//            cout<<sqrt(sum)<<endl;
            sum=sqrt(sum);

        }
        else if(str2=="BaseROUTEx")
        {
            cin>>num2;
//            cout<<BaseROUTEx(sum,num2)<<endl;
            sum=BaseROUTEx(num2,sum);
        }
        else if((str2== "M-") or (str2== "MC") or (str2== "M+") or (str2== "MS"))
        {
            m(str2,sum);
        }

        else if(str2=="*")
        {
            cin>>num2;
            //cout<<sum<<endl;
            double zy =sum*num2;
//            cout<<zy<<endl;
            sum*=num2;
        }
        else if(str2=="+")
        {
            cin>>num2;
//            cout<<sum+num2<<endl;
            sum+=num2;
        }
        else if(str2=="-")
        {
            cin>>num2;
//            cout<<sum-num2<<endl;
            sum-=num2;
        }
        else if (str2=="/")
        {
            cin>>num2;
//            cout<<sum/num2<<endl;
            sum/=(float)num2;
        }
        else if(str2=="radians"){
            str1="radians";
            cin>>num1;
            sum=num1;
        }
        else if(str2=="degrees"){
            str1="degrees";
            cin>>num1;
            sum=num1;
        }
        else if((str2[0]>='0')and (str2[0]<='9'))
        {
            sum=atof(str2.c_str());
        }
        system ("CLS") ;
        //cout << fixed ;
        if(str2=="MR")
        {
            cout<<m(str2,sum)<<endl;
            sum = m(str2,sum) ;
        }
        else
        {
            cout << sum << endl << endl ;
        }
    }
    return 0;
}

// Phase #1
double power(double base , int pow)
{
    double power = 1 ;
    if (pow>=0)
    {
        for (int i=1 ; i<=pow ; i++)
            power *= base ;

        return power ;
    }
    else
    {
        for (int i=0 ; i>pow ; i--)
            power *= base ;

        return ((1.0)/power) ;
    }
}

long long fact(int n)
{
    double fact = 1 ;
    while (n!=0)
    {
        fact *= n ;
        n-- ;
    }
    return fact ;
}

double absolute(double n)
{
    if (n>=0)
        return n ;
    else
        return n*-1 ;
}


// Phase #2
double factorial(int n)
{
    double fact = 1 ;

    while (n!=0)
    {
        fact *= n ;
        n-- ;
    }
    return fact ;
}

double sin(double n)
{
    while (n >= 360)
        n-=360 ;

    n *= (Pi/180) ;
    double sum=n ;
    int evenODD=0 ;
    for (int i=3 ; i<20 ; i+=2)
    {
        if (evenODD%2 == 0)
        {
            sum-= (1.0/factorial(i)) * power(n,i) ;
            evenODD++ ;
        }
        else
        {
            sum+= (1.0/factorial(i)) * power(n,i) ;
            evenODD++ ;
        }
    }
    return sum ;
}

double cos(double n)
{
    while (n >= 360)
        n-=360 ;

    n *= (Pi/180) ;
    double sum=1 ;
    int evenODD=0 ;
    for (int i=2 ; i<20 ; i+=2)
    {
        if (evenODD%2 == 0)
        {
            sum-= (1.0/factorial(i)) * power(n,i) ;
            evenODD++ ;
        }
        else
        {
            sum+= (1.0/factorial(i)) * power(n,i) ;
            evenODD++ ;
        }
    }

    return sum ;
}

double tan(double n)
{
    return (sin(n)/cos(n)) ;
}

double arcsin(double x)
{
    double result=0 ;
    for (int i=0 ; i<10 ; i++)
    {
        result += (((factorial(2*i)*power(x,2*i+1))*1.0)/(power(4,i)*power(factorial(i),2)*(2*i+1))) ;
    }
    return result*(180/Pi) ;
}

double arccos(double x)
{
    return ((180/2)-arcsin(x)) ;
}

double arctan(double x)
{
    double result=0 ;
    for (int i=0 ; i<30 ; i++)
    {
        result += (power(-1,i)*power(x,2*i+1)) / (2*i+1) ;
    }
    return result*(180/Pi) ;
}

double exp(double n)
{
    double sum=0 ;
    for (int i=0 ; i<150 ; i++)
    {
        sum += (1/factorial(i))*power(n,i) ;
    }
    return sum ;
}

double sinh(double n)
{
    double result ;
    result = (exp(n)-exp(-n))/2 ;
    return result ;
}

double cosh(double n)
{
    double result ;
    result = (exp(n)+exp(-n))/2 ;
    return result ;
}

double tanh(double n)
{
    double result ;
    result = sinh(n)/cosh(n) ;
    return result ;
}

double ln(double n)
{
    double x = (n-1)/(n+1) ;
    double sum=2*x ;

    for (int i=3 ; i<1000 ; i+=2)
    {
        sum += (2.0/i)* power(x,i) ;
    }
    return sum ;
}

double logBase10(double n)
{
    return (ln(n)/ln(10)) ;
}

double log(double base , double n)
{
    double result ;
    result = ln(n)/ln(base) ;
    return result ;
}

double TenPowerX(double x)
{
    double result ;
    result = exp(x*ln(10)) ;
    return result ;
}

double aPOWERx(double a , double x)
{
    double result ;
    result = exp(x*ln(a)) ;
    return result ;
}

double sqrt(double x)
{
    double result ;
    result = exp(0.5*ln(x)) ;
    return result ;
}

double BaseROUTEx(double base , double x)
{
    double result ;
    result = exp((1.0/base)*ln(x)) ;
    return result ;
}

double m(string v,double x)
{
    static double sum1=0;
    if(v=="M+")
    {
        sum1+=x;
        return sum1;
    }
    else if (v=="M-")
    {
        sum1-=x;
        return sum1;
    }
    else if(v=="MC")
    {
        sum1=0;
        return sum1;
    }
    else if(v=="MR")
        return sum1;

    else if(v=="MS")
        sum1=x;
}
