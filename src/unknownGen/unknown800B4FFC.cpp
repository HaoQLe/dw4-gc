#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800B5148();
extern char lbl_8047925C[];
extern char lbl_8047C138[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805627CC;
void *fn_800B4FFC();
void *fn_800B5038();
void fn_800B5090();
void fn_800B50B8();
void *fn_800B5128();
}
struct UnknownGenObject800B5038 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B4FFC(){
 if(!lbl_805627CC || !(reinterpret_cast<unsigned int *>(lbl_805627CC)[0x24/4]&4)) fn_800B5090();
 return lbl_805627CC;
}
void *fn_800B5038(){
 UnknownGenObject800B5038 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047C138;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B5090(){
 fn_80066188((int)fn_800B50B8);
}
void fn_800B50B8(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805627CC,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B5128,(int)lbl_8047925C,16,(int)fn_800B5038,(int)fn_800B5148,0,0);
}
void *fn_800B5128(){return fn_800B4FFC();}
}
#pragma pop
