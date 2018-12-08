#include <iostream>
using namespace std;

// testeaza daca atat un numar dat, cat si oglinditul sau sunt prime

int main()
{
	int a, invers, prim_a, prim_invers;
    cin>>a;
    int ca=a;
    
    // invers
    invers=0;
    while (a!=0) {
		invers=invers*10+a%10;
		a=a/10;
		}
	
    //initializare "intrerupatoare", 1=este prim    
    prim_a = 1;
    prim_invers = 1;
 
    

    //testare a
    int i = 2;
    while(i < ca)
    {
        if(ca % i == 0)
            prim_a = 0;//nu este prim
        i += 1;
    }

    //testare inversul(oglinditul) lui a
    int ii = 2;
    while(ii < invers)
    {
        if(invers % ii == 0)
            prim_invers = 0;//nu este prim
        ii += 1;
    }


    if(ca==1) {prim_a=0;}
    if(prim_a==1 && prim_invers==1)
        cout<<"DA";
    else
        cout<<"NU";

     
    return 0;
	
}
