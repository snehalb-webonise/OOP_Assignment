#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class CellPhone
{
    private:
    string call;
    string pixel;
    string external_storage;
    string  RAM;
    string number;


    public:
    void make_call(string phone , string number){
        cout<<"We are in Call/Dial Function of"<<phone<<endl;
        cout<<"calling to "<<number;
    }
    void message(string phone,string msg){
        cout<<"IN SMS function\n";
        cout<<"send message to "<<number<<endl;
        cout<<"message is :"<<msg<<endl;
    }
    void message(string phone,string msg,string doc){
        cout<<"IN MMS\n";
        cout<<"send message to "<<number<<endl;
        cout<<"message is :"<<msg<<endl;
        cout<<"Documnet is :"<<doc<<endl;
    }
    void on_flash_light(){
        cout<<"IN flash light\n";
    }

    void on_camera(string pixel){
        cout<<"IN camera\n";
        cout<<"your camera is "<<pixel;
     }

};

class android : public CellPhone{

    public:

    virtual void version()=0;
    void bluetooth(){
        cout<<"IN bluetooth Android\n";
    }
    void Play_store(){
    cout<<"IN play store\n";
    }
    void Dual_sim(){
    cout<<"In dual sim\n";
    }

};

class samsung : public android{
     private:
     string OS_version;
    public :
        void version(){
         cout<<"Android OS version is :\nAndroid 8.0 Oreo";
        }
        void samsung_store(){
        cout<<"IN samsung store\n";
        }
        void samsung_manager(){
        cout<<"In samsung Manager\n";
        }
};

class MI : public android{

    private:
  string OS_version;
    public:
  void version(){
  cout<<"Android OS version is :8.1.0";
  }
        void mi_store(){
        cout<<"IN MI store\n";
        }
        void mi_manager(){
        cout<<"IN MI manager\n";
        }
};

class IOS : public CellPhone{


    public:
  virtual void version()=0;
      void i_store(){
          cout<<"IN IPHONE store\n";
      }
};

class Iphone : public IOS{

    private:
  string OS_version;
    public:
  void version(){
  cout<<"IOS version is :iOS10";
  }
        void iphone_manager()
          {
            cout<<"IN IPHONE mamager";
            }
};


int main(){

    samsung sam;
    MI mi;
    Iphone iphone;

    string phone;
    string number ="7741046264";
    string doc ="abc.png";
    string msg ="hello there";
    int choice;
    cout<<"Select Which OPerating System(OS) You Want :\n";
    cout<<"1.Android Operating System \n";
    cout<<"2.Apple IOS\n";
    cout<<"3.EXIT\n";
    cout<<"Enter your choice :";
    cin>>choice;

    if(choice ==1){
        int ch_android;

        cout<<"Select Moblie Model : \n";
        cout<<"1.SAMSUNG\n";
        cout<<"2.MI\n";
        cout<<"Enter your choice :\n";
        cin>>ch_android;

        do{
            switch(ch_android){

              case 1:
                    int ch_sam;


                    phone= "Samsung";
                    cout<<"Welcome From SAMSUNG\n";
                    cout<<"Functions OF samsung :\n";
                    while(true){
                    cout<<"\n*****************\n";
                    cout<<"Select Function :\n";
                    cout<<"1.make call\n";
                    cout<<"2.send SMS\n";
                    cout<<"3.send MMS\n";
                    cout<<"4.ON Camera\n";
                    cout<<"5.ON Flashlight\n";
                    cout<<"6.Android version\n";
                    cout<<"7.ON bluetooth\n";
                    cout<<"8.play sore\n";
                    cout<<"9.Sim card manager\n";
                    cout<<"10.Samsung Store\n";
                    cout<<"11.samsung manager\n";
                    cout<<"12.exit\n";
                    cout<<"\n**********************\n";
                    cin>>ch_sam;


                      switch(ch_sam){
                        case 1 :
                           sam.make_call(phone,number);
                           break;
                         case 2:
                          sam.message(phone,msg);;
                          break;
                        case 3:
                          sam.message(phone,msg,doc);
                          break;
                        case 4:
                          sam.on_camera("13MP");
                          break;
                        case 5:
                          sam.on_flash_light();
                          break;
                        case 6:
                          sam.version();
                          break;
                        case 7:
                          sam.bluetooth();
                          break;
                        case 8:
                          sam.Play_store();
                          break;
                        case 9:
                          sam.Dual_sim();
                          break;
                        case 10:
                          sam.samsung_store();
                          break;
                        case 11:
                          sam.samsung_manager();
                          break;
                        case 12:
                          exit(1);
                        default :
                          cout<<"wrong choice \n";
                      }
                    }
                    break;
              case 2:
                  int ch_mi;


                    phone= "MI";
                    cout<<"Welcome From MI\n";
                    cout<<"Functions OF MI :\n";
                    while(true){
                     cout<<"Select Function :\n";
                    cout<<"1.make call\n";
                    cout<<"2.send SMS\n";
                    cout<<"3.send MMS\n";
                    cout<<"4.ON Camera\n";
                    cout<<"5.ON Flashlight\n";
                    cout<<"6.Android version\n";
                    cout<<"7.ON bluetooth\n";
                    cout<<"8.play sore\n";
                    cout<<"9.Sim card manager\n";
                    cout<<"10.MI Store\n";
                    cout<<"11.MI manager\n";
                    cout<<"12.exit\n";
                    cin>>ch_mi;


                      switch(ch_mi){
                        case 1 :
                          mi.make_call(phone,number);
                           break;
                         case 2:
                          mi.message(phone,msg);
                          break;
                        case 3:
                          mi.message(phone,msg,doc);
                          break;
                        case 4:
                          mi.on_camera("3MP");
                          break;
                       case 5:
                          mi.on_flash_light();
                          break;
                        case 6:
                          mi.version();
                          break;
                        case 7:
                          mi.bluetooth();
                          break;
                        case 8:
                          mi.Play_store();
                          break;
                        case 9:
                          mi.Dual_sim();
                          break;
                        case 10:
                          mi.mi_store();
                          break;
                        case 11:
                          mi.mi_manager();
                          break;
                        case 12:
                          exit(1);
                        default :
                          cout<<"wrong choice \n";
                      }
                    }
                    break;

            }

        }while(ch_android <=0 || ch_android >3);

    }
    else if(choice == 2){
      int ch_iphone;

        cout<<"Select Moblie Model : \n";
        cout<<"1.iphone\n";
        cout<<"Enter your choice :\n";
        cin>>ch_iphone;

        do
        {
          switch(ch_iphone){
            case 1:
                  int ch_iphn;


                phone= "IPHONE";
                cout<<"Welcome From IPHONE\n";
                cout<<"Functions OF IPHONE :\n";
                while(true){
                cout<<"\n*****************\n";
                cout<<"Select Function :\n";
                cout<<"1.make call\n";
                cout<<"2.send SMS\n";
                cout<<"3.send MMS\n";
                cout<<"4.ON Camera\n";
                cout<<"5.ON Flashlight\n";
                cout<<"6.OS version\n";
                cout<<"7.Istore\n";
                cout<<"8.iphone manager\n";
                cout<<"9.exit\n";
                cin>>ch_iphn;
                cout<<"\n**********************\n";


                  switch(ch_iphn){
                    case 1 :
                       iphone.make_call(phone,number);
                       break;
                     case 2:
                      iphone.message(phone,msg);;
                      break;
                    case 3:
                      iphone.message(phone,msg,doc);
                      break;
                    case 4:
                      iphone.on_camera("103MP");
                      break;
                    case 5:
                      iphone.on_flash_light();
                      break;
                    case 6:
                     iphone.version();
                      break;
                    case 7:
                      iphone.i_store();
                      break;
                    case 8:
                      iphone.iphone_manager();
                    case 9:
                      exit(1);
                    default :
                      cout<<"wrong choice \n";
                  }
                }while(ch_iphn != 7);
                break;

          }
        } while (ch_iphone !=2);

    }
    else if(choice == 3){
      return 0;
    }
}
