#include <iostream>



using namespace std;


int suma (int T[], int p, int k);



int main()

{
//galaz 1
//byl megre
//g2
//g3
	int t, n, i, j, sum;
        int *S;
	cout << "podaj ile sum chcesz liczyc ";

	cin >>t;
	i=0;

	while (i<t){

	cin >>n;
	cout << "ile liczb chcesz sumowac: ";
	S=new int[n];
	cout <<"podaj swoje liczby: ";	
	for (j=0; j<n; j++) cin>>S[j];
	cout <<"Suma podanych " <<n<<" liczb wynosi: ";
	for (j=o; j<n< j++)cout <<S[j]<<" ";
	cout << suma(S,0,n)<<endl;

	delete [] S;

	i++;
	}

			        
	return 0;
}

int suma (int T[], int p, int k){

	int wynik, i;
	    wynik=0;
	        
	    if ((k-p)<2) return 0;
		else {
		for (i=p; i<k;i++){
			wynik=wynik+T[i];
		}
		wynik=wynik+suma(T,p,(p+(k-p+1)/2))+suma(T,(p+(k-p+1)/2),k);
		return wynik;

		}
}
