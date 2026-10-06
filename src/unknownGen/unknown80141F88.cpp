#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void fn_801422F4();
void fn_801465FC();
extern char lbl_8049E17C[];
extern char lbl_804A6460[];
extern char lbl_804AA22C[];
extern void *lbl_8056405C;
extern void *lbl_80564060;
extern void *lbl_8056417C;
void *fn_80141F88();
void *fn_80141FC4();
void fn_80142010();
void fn_80142038();
void *fn_801420A0();
void *fn_801420C0();
}
struct UnknownGenObject80141FC4_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_80141F88(){
 if(!lbl_8056405C || !(reinterpret_cast<unsigned int *>(lbl_8056405C)[0x24/4]&4)) fn_80142010();
 return lbl_8056405C;
}
void *fn_80141FC4(){
 UnknownGenObject80141FC4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA22C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80142010(){
 fn_80066188((int)fn_80142038);
}
void fn_80142038(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_8056405C,(int)fn_801465FC,(int)fn_801420C0,(int)fn_801420A0,(int)lbl_8049E17C,32,(int)fn_80141FC4,0,0,0);
}
void *fn_801420A0(){return fn_80141F88();}
void *fn_801420C0(){return lbl_8056417C;}
void *fn_801420C8(){
 if(!lbl_80564060 || !(reinterpret_cast<unsigned int *>(lbl_80564060)[0x24/4]&4)) fn_801422F4();
 return lbl_80564060;
}
}
#pragma pop
