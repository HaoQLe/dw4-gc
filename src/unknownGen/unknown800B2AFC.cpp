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
void fn_800B2C48();
extern char lbl_80478DF4[];
extern char lbl_8047BA64[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805626EC;
void *fn_800B2AFC();
void *fn_800B2B38();
void fn_800B2B90();
void fn_800B2BB8();
void *fn_800B2C28();
}
struct UnknownGenObject800B2B38 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800B2AFC(){
 if(!lbl_805626EC || !(reinterpret_cast<unsigned int *>(lbl_805626EC)[0x24/4]&4)) fn_800B2B90();
 return lbl_805626EC;
}
void *fn_800B2B38(){
 UnknownGenObject800B2B38 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047BA64;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B2B90(){
 fn_80066188((int)fn_800B2BB8);
}
void fn_800B2BB8(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805626EC,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B2C28,(int)lbl_80478DF4,16,(int)fn_800B2B38,(int)fn_800B2C48,0,0);
}
void *fn_800B2C28(){return fn_800B2AFC();}
}
#pragma pop
