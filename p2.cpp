#include <iostream>

using namespace std;
void zamien (int &a, int &b);
int main()
{
    int i,j;
    int temp;
    cin >>i>>j;

    if (i>j) zamien(i,j);

    if (i>0){
        temp=i;

        while (j%i!=0){
            i=i+temp;
            if (i>j){
                zamien(i,j);
                temp=i;
            }
        }

    cout <<j<<endl;

    }
    else cout <<"jeden z podanych argumentow jest nieprawidlowy\n";


    return 0;
}

void zamien (int &a, int &b){

    int t;
    t=a;
    a=b;
    b=t;
}

