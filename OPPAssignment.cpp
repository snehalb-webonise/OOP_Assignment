#include <iostream> 
using namespace std;

class CellPhone
{
    public:
 	string Phone_Dial, sim_slot, Operating_system;
	string Mega_pix;
	string Sms,Mms,Core,Batt_pw,Mem_slot;
	string camera,bluetooh,wifi,Screen_size;
	string IN_Storage;


	CellPhone()
	{
		Phone_Dial ="Enable";
		Sms = "Enable";
		Mms = "Enable";
		Mem_slot ="Yes";
		Core ="Qaurd core";
		camera ="Enable";
		wifi ="Enable";
	}	
	void Display()
	{
		cout<<"Phone Dial Service::"<<Phone_Dial<<endl;
		cout<<"SMS Service\t  ::"<<Sms<<endl;
		cout<<"MMS Service\t  ::"<<Mms<<endl;
		cout<<"Memory Slot\t  ::"<<Mem_slot<<endl;
		cout<<"Processor Core\t  ::"<<Core<<endl;
		cout<<"Camera service\t  ::"<<camera<<endl;
		cout<<"Wifi service\t  ::"<<wifi<<endl;

	}

	void display_PhoneFeature()
	{
		cout <<"Sim slot\t\t::"<<sim_slot<<endl;
		cout<<"Operationg System\t::"<<Operating_system<<endl;
		cout<<"Screen size\t\t::"<<Screen_size<<endl;
		cout<<"Inernal Storage\t\t::"<<IN_Storage<<endl;
		cout<<"Battery Power\t\t::"<<Batt_pw<<endl;
		cout<<"Camera Mega Pixel\t::"<<Mega_pix<<endl;
		cout<<"Bluetooh Service \t::"<<bluetooh<<endl;
		cout<<endl;
	}		

};
class googlepixel : public CellPhone
{
    public:
	string model_name;
	googlepixel()
	{
		model_name ="GOOGLE PIXEL";
	}
 	void display_googlepixel()
 	{
		
		cout<<"*** Comman Features ***\n";
		cout<<model_name<<endl;
		Display();
 	}
};

class googlepix1 : public googlepixel
{
	public:
	googlepix1()
	{
		sim_slot="Single Sim";
		Operating_system = "Android";
		Screen_size="5 inch";
		IN_Storage ="64GB";
		Batt_pw ="2700 mAH";
		Mega_pix="12.2MP";
		bluetooh ="Enable";
		
	}
	void display_googlep1()
 	{
		
		cout <<"\n*** google pixel 1 Features ***\n" ;
		display_PhoneFeature();
		
 	}
};

class googlepix2 : public googlepixel
{
	public:
	googlepix2()
	{
		sim_slot="Single Sim";
		Operating_system = "Android";
		Screen_size="5 inch";
		IN_Storage ="64GB";
		Batt_pw ="2700 mAH";
		Mega_pix="12.2MP";
		bluetooh ="Enable";
		
	}
	void display_googlep2()
 	{
		
		cout <<"\n*** google pixel 2 Features ***\n" ;
		display_PhoneFeature();
 	}
};

class Iphone : public CellPhone 
{
    public:
	string model_name;
	Iphone()
	{
		model_name ="APPLE IPHONE";
	}
 	void display_Iphone()
 	{

	cout<<"*** Comman Features ***\n";
	cout<<model_name<<endl;
	Display();
        
 	}
};

class Iphone7 :public Iphone
{
public:
	Iphone7()
	{
		sim_slot="Single Sim";
		Operating_system = "IOS 10";
		Screen_size="4.7-inch";
		IN_Storage ="32GB";
		Batt_pw ="1960 mAH";
		Mega_pix="12MP";
		bluetooh ="Disable";
	}
 	void display_iphone7()
 	{
	cout<<"******* Apple iPhone 7  ******\n";
	display_PhoneFeature();
 	}

};

class IphoneX :public Iphone
{
public:
	IphoneX()
	{
		sim_slot="Single Sim";
		Operating_system = "IOS 10";
		Screen_size="4.7-inch";
		IN_Storage ="32GB";
		Batt_pw ="1960 mAH";
		Mega_pix="12MP";
		bluetooh ="Disable";
	}
 	void display_iphoneX()
 	{
	cout<<"******* Apple iPhone X ******\n";
	display_PhoneFeature();
 	}

};

class Samsung : public CellPhone
{
  public :
	string model_name;
	Samsung()	
	{
		model_name= "SAMSUNG";
	}
	void display_samsung()
 	{
	cout<<"*** Comman Features of samsung***\n";
	cout<<model_name<<endl;
	Display();
	cout<<endl;
 	}
};

class SamsungA6 : public Samsung
{
	public :
	SamsungA6()	
	{
		sim_slot="Dual Sim";
		Operating_system = "Android";
		Screen_size="5.6-inch";
		IN_Storage ="4GB";
		Batt_pw ="3000 mAH";
		Mega_pix="16MP";
		bluetooh ="Enable";
	}
	void display_samsungA6()
 	{
	cout<<"******* Samsung Galaxy A6 ******\n";
	display_PhoneFeature();
 	}
};
class SamsungA7 : public Samsung
{
	public :
	SamsungA7()	
	{
		sim_slot="Dual Sim";
		Operating_system = "Android";
		Screen_size="5.6-inch";
		IN_Storage ="4GB";
		Batt_pw ="3000 mAH";
		Mega_pix="16MP";
		bluetooh ="Enable";
	}
	void display_samsungA7()
 	{
	cout<<"******* Samsung Galaxy A7 ******\n";
	display_PhoneFeature();
 	}
};




int main()
{
	googlepixel googlep;
	googlepix1 googlep1;
	googlepix2 googlep2;
	Iphone  iphone;
	Iphone7 iphone7;
	IphoneX iphonex;
	Samsung sam;
	SamsungA6 samA6;
	SamsungA7 samA7;
	int choice=1;
	int flag =1;
	
	do{
	cout<<"\n**********************";
	cout <<"\nSelect Your Brand :\n";
	cout<<"1.Google Pixel \n";
	cout<<"2.Apple iphone\n";
	cout<<"3.Samsang\n";
	cout<<"4.Exit\n";
	cout <<"Enter Your Choice :\n";
	cin>>choice;
	
	switch(choice)
	{
		case 1: 
			googlep.display_googlepixel();
			cout<<"\nSelect Your Model :\n";
			cout<<"1.Google Pixel 1 \n";
			cout<<"2.Google pixel 2\n";
			cout<<"3.Exit\n";
			cout<<"Enter Choice\n";
			cin>>flag;
			switch(flag){
				case 1:
					googlep1.display_googlep1();
					break;
				case 2:
					googlep2.display_googlep2();
					break;
				case 3:
					break;
			}
			break;

		case 2:
			 
	      	    	iphone.display_Iphone();
			cout<<"\nSelect Your Model :\n";
			cout<<"1.Apple iphone 7 \n";
			cout<<"2.Apple iphone X\n";
			cout<<"3.Exit\n";
			cout<<"Enter Choice\n";
			cin>>flag;
			switch(flag){
				case 1:
					iphone7.display_iphone7();
					break;
				case 2:
					iphonex.display_iphoneX();
					break;
				case 3:
					break;
			}
			break;

		case 3:
			sam.display_samsung();
			cout<<"\nSelect Your Model :\n";
			cout<<"1.Samsung A6 \n";
			cout<<"2.Samsung A7\n";
			cout<<"3.Exit\n";
			cout<<"Enter Choice\n";
			cin>>flag;
			switch(flag){
				case 1:
					samA6.display_samsungA6();
					break;
				case 2:
					samA7.display_samsungA7();
					break;
				case 3:
					break;
			}
			break;
		case 4:
			break;
		
		default:
			cout<<"Wrong Choice";
	}
	}while (choice != 4);
	
	
    return 0;
} 
