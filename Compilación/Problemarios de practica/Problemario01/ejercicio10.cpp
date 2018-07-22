#include <iostream>

using namespace std;

int main()
{
	int objeto[3];
	int pago;
	int suma;
	float iva;
	float total;
	
	cout<<"Producto 1?";
	cin>>objeto[0];
	cout<<"Producto 2?";
	cin>>objeto[1];
	cout<<"Producto 3?";
	cin>>objeto[2];

	suma=objeto[0]+objeto[1]+objeto[2];
	iva=suma*.15;
	total=suma+iva;
	

	cout<<"El subtotal de su compra es: "<<suma<<endl;
	cout<<"El iva es: "<<iva<<endl;
	cout<<"El total es: "<<total<<endl;
	cout<<"Descuento: "<<total*.2<<endl;
	cout<<"El total final es: "<<total*.8<<endl;
	cout<<"Con cuanto pagas? ";
	cin>>pago;
	cout<<"Tu cambio es: "<<pago-total*.8<<endl;
	cout<<"Gracias por tu compra"<<endl;
	
	
	


	

	return 0;
}
