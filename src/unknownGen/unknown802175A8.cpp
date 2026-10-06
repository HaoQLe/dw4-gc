#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024D1C();
void fn_80033A14();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_80216620();
void fn_802176F4();
extern char lbl_80472FA0[];
extern char lbl_80480AF8[];
extern char lbl_80480B58[];
extern char lbl_804BA4BC[];
extern void *lbl_80565A28;
void *fn_802175A8();
void *fn_802175E4();
void fn_8021763C();
void fn_80217664();
void *fn_802176D4();
}
struct UnknownGenObject802175E4_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_802175A8(){
 if(!lbl_80565A28 || !(reinterpret_cast<unsigned int *>(lbl_80565A28)[0x24/4]&4)) fn_8021763C();
 return lbl_80565A28;
}
void *fn_802175E4(){
 UnknownGenObject802175E4_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80480B58;
 object.unknown00=lbl_80480AF8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8021763C(){
 fn_80066188((int)fn_80217664);
}
void fn_80217664(){
 fn_80216620();
 fn_80066204(0,(int)&lbl_80565A28,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_802176D4,(int)lbl_804BA4BC,20,(int)fn_802175E4,(int)fn_802176F4,0,0);
}
void *fn_802176D4(){return fn_802175A8();}
}
#pragma pop
