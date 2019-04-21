class SHIP{
	protected:
		static int shipno;
		int TotalContainers, BasicContainers, HeavyContainers, 
		EBcontainers, TBcontainers, RBcontainers, SBcontainers
		EHcontainers, THcontainers, RHcontainers, SHcontainers;
		
	public:
	void SHIP()
	{
		shipno= shipno +1;
		system("cls");
		printf("\t\t\t\t\tSHIPPING DOCK\n\n\n\n");
		printf("Choose option\n 1. Add Containers\n 2. Remove Container\n 3. View Ship details\n 4. Go back to previous menu");
		char op = getch();
		
		switch(ch)
	{
		case(1) : Container c1;
		case(2) : Removecon();
		case(3) : DispDetails();
		case(4) : back();

	}	
	void DispDetails()
	{
		cout<<"Total Number of Containers: "<<TotalContainers;
		cout<<"\nBasic Containers: "<<BasicContainers;
		cout<<"	 \n ==>Refrigerated Containers: "<<RBcontainers;
		cout<<"	 \n ==>Containers with Toxic material: "<<TBcontainers;
		cout<<"	 \n ==>Containers with Explosive material: "<<EBcontainers;
		cout<<"	 \n ==>Simple Containers: "<<SBcontainers;
		cout<<"\nHeavy Containers: "<<HeavyContainers;
		cout<<"	 \n ==>Refrigerated Containers: "<<RHcontainers;
		cout<<"	 \n ==>Containers with Toxic material: "<<THcontainers;
		cout<<"	 \n ==>Containers with Explosive material: "<<EHcontainers;
		cout<<"	 \n ==>Simple Containers: "<<SHcontainers;
	}
	}
	
	Container Removecon()
	{
		cout<<"Which Container Do you want to remove?";
		cout<<"\n1.Basic Container\n2.Heavy Container";
		if(cin==1)
		{
			cout<<"1. Simple Container\n2. Refrigerated Conatiner\n3. Toxic Container\n4. Explosive Container\n"
			cin<<x;
			switch(x)
			{
				case 1 : { 
							SBcontainer= SBconatiner - 1;
							system("cls");
							cout<<"Simple Basic Container Removed";
							getch();
							break;
						}
				case 2 : { 
							RBcontainer= RBconatiner - 1;
							system("cls");
							cout<<"Refrigerated Basic Container Removed";
							getch();
							break;
						}
				case 3 : { 
							TBcontainer= TBconatiner - 1;
							system("cls");
							cout<<"Toxic Basic Container Removed";
							getch();
							break;
						}
				case 4 : { 
							EBcontainer= EBconatiner - 1;
							system("cls");
							cout<<"Explosive Basic Container Removed";
							getch();
							break;
						}

			}
		}
	}
	if(cin==2)
		{
			cout<<"1. Simple Container\n2. Refrigerated Conatiner\n3. Toxic Container\n4. Explosive Container\n"
			cin<<x;
			switch(x)
			{
				case 1 : { 
							SHcontainer= HBconatiner - 1;
							system("cls");
							cout<<"Simple Heavy Container Removed";
							getch();
							break;
						}
				case 2 : { 
							RHcontainer= RHconatiner - 1;
							system("cls");
							cout<<"Refrigerated Heavy Container Removed";
							getch();
							break;
						}
				case 3 : { 
							THcontainer= THconatiner - 1;
							system("cls");
							cout<<"Toxic Heavy Container Removed";
							getch();
							break;
						}
				case 4 : { 
							EHcontainer= EHconatiner - 1;
							system("cls");
							cout<<"Explosive Heavy Container Removed";
							getch();
							break;
						}

			}
		}
	}
		
};
//////////////////////////////////////////////////////////////////////

class Container: public SHIP
{
	protected:
		static int contnum, basicnum, heavynum;
		
	public:
	void Container()
	{
		system("cls");
		printf("\t\t\t\t\tSHIPPING DOCK\n\n\n\n");
		printf("Choose Container Type \n 1. Basic Container \n 2. Heavy Container\n 3. Go back to previous menu");
		char op = getch();
	
		switch(op)
	{
		case(1) : BasicContainer();
		case(2) : HeavyContainer();
		case(3) : back();
	}
	
	void BasicContainer()
	{
		basicnum = basicnum + 1;
		cout<<"\nBasic Container added to Ship\n";
		cout<<"Add functionality to Container?\n";
		
	}
	void HeavyContainer()
	{
		heavynum = heavynum + 1;
		cout<<"\nHeavy Container added to Ship\n";
		cout<<"Add functionality to Container?\n";
		
	}
	
	void Addfunctionality()
	{
		char op;
		cout<<"Add functionality to containers"<<endl;
		cout<<"Choose option/n 1. Refrigeration/n 2. Toxic Material 3.  Explosive Material/n";
		cin<<op;
	
		switch(op)
	{
		case(1) : Rcontainer= Rcontainer + 1;	//Refrigeration
		case(2) : Tcontainer= Tcontainer + 1;	//Toxic 
		case(3) : Econtainer= Econtainer + 1;	//Explosive 
	}	
	
	}
}



int main()
{
	printf("\t\t\t\t\tSHIPPING DOCK\n\n\n\n");
	printf("Choose option\n 1. Reserve new ship\n 2. View ships list\n 3. Exit");
	char ch = getch();
	system("cls");
	switch(ch)
	{
		case(1) : SHIP s1;
		case(2) : viewship();
		case(3) : printf("\n\n\t\t\tThankyou!"); getch(); exit(1);
	}
	

	
}
