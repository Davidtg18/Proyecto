#include <iostream>
using namespace std;
int main()
{
	int Factura;
    int CantidadProductos;
    int TipoProducto;
    double Precio; 
    double SubTotal;
    double Descuento;
    double TotalPagar;

	string Cliente;
	SubTotal = Precio*CantidadProductos;
	Descuento = SubTotal*TipoProducto;
	TotalPagar = SubTotal - Descuento;
	
     int opcion;
     do{
        cout << "\n     MENU "
             << "\n ______________"
             << "\n 1.Celulares "
             << "\n 2.Relojes "
             << "\n 3.Laptops "
             << "\n 4.PCs "
             << "\n 5.Salir "
             << "\n ______________"
             << "\n OPCION (1/5): ";
             cin >> opcion;

		switch (opcion)
		{
			case 1: 
            
				Precio = 5000.35;
				cout<<"Cantidad de celulares a comprar?: ";
	    		cin>>CantidadProductos;
						if(CantidadProductos>=100)

						{Descuento = Precio*0.10;}

						else if (CantidadProductos<100)
						{
							(Descuento = 0);
								
						}
						SubTotal = Precio*CantidadProductos;
						TotalPagar = SubTotal - Descuento;
		    			cout<< "\nCelulares";
		    			cout<< "\nLa cantidad de compra es: " << CantidadProductos;
		    			cout<< "\nEl precio es: " << Precio;
						cout<< "\nEl Subtotal es: " << SubTotal;
		    			cout<< "\nDescuento " <<  Descuento;
		   				cout<< "\nTotal: " << TotalPagar;
		   				cout<<endl;

			break;
			
			case 2:

				Precio = 500.75;
	    		cout<<"Cantidad de relojes a comprar?: ";
	    		cin>>CantidadProductos;
						if(CantidadProductos>=50)

						{Descuento = Precio*0.15;}

						else if (CantidadProductos<50)
						{
							(Descuento = 0);
								
						}
						SubTotal = Precio*CantidadProductos;
						TotalPagar = SubTotal - Descuento;
		    			cout<< "\nRelojes";
		    			cout<< "\nLa cantidad de compra es: " << CantidadProductos;
		    			cout<< "\nEl precio es: " << Precio;
						cout<< "\nEl Subtotal es: " << SubTotal;
		    			cout<< "\nDescuento " <<  Descuento;
		   				cout<< "\nTotal: " << TotalPagar;
		   				cout<<endl;
                           
			break;
			
			case 3:

				Precio = 9999.99;
				cout<<"Cantidad de laptops a comprar?: ";
	    		cin>>CantidadProductos;
	    			if(CantidadProductos>=10)

	    			{Descuento = Precio*0.20;}

					else if (CantidadProductos<10)
					{
							(Descuento = 0);
								
					}
	    			SubTotal = Precio*CantidadProductos;
					TotalPagar = SubTotal - Descuento;
		    			cout<< "\nLaptops";
		    			cout<< "\nLa cantidad de compra es: " << CantidadProductos;
		    			cout<< "\nEl precio es: " << Precio;
						cout<< "\nEl Subtotal es: " << SubTotal;
		    			cout<< "\nDescuento " <<  Descuento;
		   				cout<< "\nTotal: " << TotalPagar;
		   				cout<<endl;

			break;
			
			case 4:

				Precio = 7500.54;
				cout<<"Cantidad de PCs a comprar?: ";
	    		cin>>CantidadProductos;
	    			if(CantidadProductos>=20)

	    			{Descuento = Precio*0.25;}

					else if (CantidadProductos<20)
					{
							(Descuento = 0);
								
					}
	    			SubTotal = Precio*CantidadProductos;
					TotalPagar = SubTotal - Descuento;
		    			cout<< "\nPCs";
		    			cout<< "\nLa cantidad de compra es: " << CantidadProductos;
		    			cout<< "\nEl precio es: " << Precio;
						cout<< "\nEl Subtotal es: " << SubTotal;
		    			cout<< "\nDescuento " <<  Descuento;
		   				cout<< "\nTotal: " << TotalPagar;
		   				cout<<endl;

			break;	
			
			default:

                cout << "\n Gracias por su compra\n";

                break;
		}

	}
    
    while( opcion != 5 );
		
		return 0;
		
}
