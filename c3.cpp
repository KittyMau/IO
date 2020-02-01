#include <iostream>



using namespace std;


int suma (int T[], int p, int k);



int main()

{

	int t, n, i, j, sum;
        int *S;
	
	cin >>t;
	i=0;
//jakas zmiena 1
cout << "zmiana 1\n";
	while (i<t){

	cin >>n;
	S=new int[n];
	
	for (j=0; j<n; j++) cin>>S[j];
//	cout <<"Suma "<<n<< " liczb wynosi: ";
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
