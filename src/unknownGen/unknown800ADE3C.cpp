#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800ADFC0();
extern char lbl_80478194[];
extern char lbl_8047AC48[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern void *lbl_805624D8;
void *fn_800ADE74();
void *fn_800ADEB0();
void fn_800ADF08();
void fn_800ADF30();
void *fn_800ADFA0();
}
struct UnknownGenObject800ADEB0_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_800ADE3C(void *object){
 fn_800ADF08();
 return fn_8006546C(lbl_805624D8,object);
}
void *fn_800ADE74(){
 if(!lbl_805624D8 || !(reinterpret_cast<unsigned int *>(lbl_805624D8)[0x24/4]&4)) fn_800ADF08();
 return lbl_805624D8;
}
void *fn_800ADEB0(){
 UnknownGenObject800ADEB0_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047AC48;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800ADF08(){
 fn_80066188((int)fn_800ADF30);
}
void fn_800ADF30(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805624D8,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800ADFA0,(int)lbl_80478194,20,(int)fn_800ADEB0,(int)fn_800ADFC0,0,0);
}
void *fn_800ADFA0(){return fn_800ADE74();}
}
#pragma pop
