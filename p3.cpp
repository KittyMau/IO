#include <iostream>

using namespace std;

int main(){


	int *zmienna;
	zmienna =new int;
	int tab[4]={1,2,3,4};
	zmienna =tab;

	cout << *zmienna <<"\t"<< &zmienna << endl;
	delete(zmienna);
	//int *zmienna = NULL;
	cout << *zmienna <<"\t"<< &zmienna << endl;
	return 0;


}


