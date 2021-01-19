//[19/05/17]
// Summer Holiday Homework 2017-2018
// A program to calculate the area/volume/surface area/perimeter of a figure inputed by the user.

// Header files
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<iomanip.h>
#include<graphics.h>
#include<stdlib.h>


int main()
{
	clrscr();

	int x, y; // x = choice of figure, y = choice of operation
	int i, a;
	const float pi = 3.14;


	do {

	clrscr();
	cout << "\t\tWelcome to the Surface Area and Volume Calculator.\n\n" << endl;

	cout << "Here is a list of figures you can find the surface area and/or volume of:\n " << endl;
	cout << "1. Cube" << endl;
	cout << "2. Cuboid" << endl;
	cout << "3. Cylinder" << endl;
	cout << "4. Cone" << endl;
	cout << "5. Sphere" << endl;
	cout << "6. Hemisphere" << endl;
	cout << "7. Pyramid" << endl;
	cout << "\n\n";

	cout << "Choose the figure you wish to find the surface area or volume of: ";
	cin >> x;

	clrscr();

	switch(x)
	{
		case 1:
			cout << "\t\t\t\t ***** CUBE ***** \n\n";
			float s; // s = side of cube
			cout <<"Enter the side of the cube: ";
			cin >> s;
			cout << "\n\n";
			cout << "1. Lateral Surface Area \n2. Total Surface Area \n3. Volume \n\n " << endl;

			do {
			cout << "Enter choice: ";
			cin >> y;
			cout << "\n";


			switch(y)
			{
				case 1: cout << "The lateral surface area of the cube is: " << 4 * s * s << " square units.";
					break;
				case 2: cout << "The total surface area of the cube is: " << 6 * s * s << " square units.";
					break;
				case 3: cout << "The volume of the cube is: " << s * s * s << " cubic units.";
					break;
				default: cout << "Invalid choice.";


			}
			cout << " \n\nEnter 1 to calculate other values for the figure. Else, enter any other number." << endl;
			cin >> a;
			} while( a == 1);

			break;


		case 2:
			cout << "\t\t\t\t ***** CUBOID ***** \n\n";
			float l, b, h; // l = length of cuboid, b = breadth of cuboid, h = height of cuboid.
			cout <<"Enter the length of the cuboid: ";
			cin >> l;
			cout <<"Enter the breadth ofthe cuboid: ";
			cin >> b;
			cout <<"Enter the height of the cuboid: ";
			cin >> h;
			cout << "\n\n";
			cout << "1. Lateral Surface Area \n2. Total Surface Area \n3. Volume \n\n " << endl;

			do {
			cout << "Enter choice: ";
			cin >> y;
			cout <<"\n";

			switch(y)
			{
				case 1: cout << "The lateral surface area of the cuboid is: " << 2 * h * (l + b) << " square units.";
					break;
				case 2: cout << "The total surface area of the cuboid is: " << 2 * ((l * b) + (b * h) + (l * h)) << " square units.";
					break;
				case 3: cout << "The volume of the cuboid is: " << l * b * h << " cubic units.";
					break;
				default: cout << "Invalid choice.";

			}
			cout << " \n\nEnter 1 to calculate other values for the figure. Else, enter any other number." << endl;
			cin >> a;
			} while( a == 1);

			break;

		case 3:
			cout << "\t\t\t\t ***** CYLINDER ***** \n\n";
			float rcy, hcy; // rcy = raduis of cylinder, hcy = height of cylinder
			cout <<"Enter the raduis of the cylinder: ";
			cin >> rcy;
			cout << "Enter the height of the cylinder: ";
			cin >> hcy;
			cout << "\n\n";
			cout << "1. Curved Surface Area \n2. Total Surface Area \n3. Volume \n\n " << endl;

			do{
			cout << "Enter choice: ";
			cin >> y;
			cout << "\n";

			switch(y)
			{
				case 1: cout << "The curved surface area of the cylinder is: " << 2 * pi * rcy * hcy << " square units.";
					break;
				case 2: cout << "The total surface area of the cylinder is: " << 2 * pi * rcy * (rcy + hcy) << " square units.";
					break;
				case 3: cout << "The volume of the cylinder is: " << pi * rcy * rcy * hcy << " cubic units.";
					break;
				default: cout << "Invalid choice.";
			}
			cout << " \n\nEnter 1 to calculate other values for the figure. Else, enter any other number." << endl;
			cin >> a;
			} while( a == 1);

			break;

		case 4:
			cout << "\t\t\t\t ***** CONE ***** \n\n";
			float rc, hc, lc; // rc = radius of the cone, hc = height of the cone, lc = slant height of the cone.
			cout <<"Enter the radius of the cone: ";
			cin >> rc;
			cout << "Enter the height of the cone: ";
			cin >> hc;
			lc = sqrt((rc * rc) + (hc * hc));
			cout << "\n\n";
			cout << "1. Curved Surface Area \n2. Total Surface Area \n3. Volume \n\n " << endl;

			do{
			cout << "Enter choice: ";
			cin >> y;
			cout <<"\n";

			switch(y)
			{
				case 1: cout << "The curved surface area of the cone is: " << pi * rc * lc << " square units.";
					break;
				case 2: cout << "The total surface area of the cone is: " << pi * rc * (lc + rc) << " square units.";
					break;
				case 3: cout << "The volume of the cone is: " << 0.334 * pi * rc * rc * hc << " cubic units.";
					break;
				default: cout << "Invalid choice.";
			}
			cout << " \n\nEnter 1 to calculate other values for the figure. Else, enter any other number." << endl;
			cin >> a;
			} while( a == 1);

			break;

		case 5:
			cout << "\t\t\t\t ***** SPHERE ***** \n\n";
			float rs; // rs  = radius of sphere
			cout <<"Enter the radius of the sphere: ";
			cin >> rs;
			cout << "\n\n";
			cout << "1. Total Surface Area \n2. Volume \n\n " << endl;

			do{
			cout << "Enter choice: ";
			cin >> y;
			cout << "\n";

			switch(y)
			{
				case 1: cout << "The total surface area of the sphere is: " << 4 * 3.14 * rs * rs << " square units.";
					break;
				case 2: cout << "The volume of the sphere is: " << 4 / 3 * pi * rs * rs * rs << " cubic units.";
					break;
				default: cout << "Invalid choice.";
			}
			cout << " \n\nEnter 1 to calculate other values for the figure. Else, enter any other number." << endl;
			cin >> a;
			} while( a == 1);

			break;

		case 6:
			cout << "\t\t\t\t ***** HEMISPHERE ***** \n\n";
			float rhs; // rhs = radius of hemisphere
			cout <<"Enter the radius of the hemisphere: ";
			cin >> rhs;
			cout << "\n\n";
			cout << "1. Curved Surface Area \n2. Total Surface Area \n3. Volume \n\n " << endl;

			do{
			cout << "Enter choice: ";
			cin >> y;
			cout <<"\n";

			switch(y)
			{
				case 1: cout << "The curved surface area of the hemisphere is: " << 2 * pi * rhs * rhs << " square units.";
					break;
				case 2: cout << "The total surface area of the hemisphere is: " << 3 * pi * rhs * rhs << " square units.";
					break;
				case 3: cout << "The volume of the hemisphere is: " << 2 / 3 * pi * rhs * rhs * rhs << " cubic units.";
					break;
				default: cout << "Invalid choice.";
			}
			cout << " \n\nEnter 1 to calculate other values for the figure. Else, enter any other number." << endl;
			cin >> a;
			} while( a == 1);

			break;

		case 7: cout << "\t\t\t\t ***** PYRAMID ***** \n\n";
			float sb, lp; // sb = side of base, lp = slant height of pyramid
			cout <<"Enter the length of the base edge of the pyramid: ";
			cin >> sb;
			cout <<"Enter the slant height of the pyramid: ";
			cin >> lp;
			cout << "\n\n";
			cout << "1. Lateral Surface Area \n2. Total Surface Area \n3. Volume \n\n " << endl;

			do{
			cout << "Enter choice: ";
			cin >> y;
			cout <<"\n";

			switch(y)
			{
				case 1: cout << "The lateral surface area of the pyramid is: " << 0.5 * (4 * sb) * lp << " square units.";
					break;
				case 2: cout << "The total surface area of the pyramid is: " << 0.5 * (4 * sb) * lp + (sb * sb) << " square units.";
					break;
				case 3: cout << "The volume of the pyramid is: " << (sb * sb) * lp * 1/3 << " cubic units.";
					break;
				default: cout << "Invalid choice.";
			}
			cout << " \n\nEnter 1 to calculate other values for the figure. Else, enter any other number." << endl;
			cin >> a;
			} while( a == 1);

			break;

		default: cout<<"Invalid choice. Please try again." << endl;


	}
	cout <<"\n\n";
	cout << "If you wish to go back to the main menu, enter 1. \nIf you wish to exit, press 2." << endl;
	cin >> i;

      } while(i == 1);
	clrscr();

	if (i == 2) {
	  cout << "Thank you for using Surface Area and Volume Calculator." << endl;
	  system("pause");
	  exit(0); }


	getch();
	return 0;
}

