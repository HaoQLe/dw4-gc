#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8010CBD4();
void fn_8010CFA4();
void *fn_8010E6DC();
void fn_80110EC0();
extern char lbl_80494E64[];
extern char lbl_80495AD8[];
extern char lbl_8049634C[];
extern void *lbl_805621F4;
extern void *lbl_805636DC;
extern void *lbl_805636E0;
void *fn_80110B80();
void *fn_80110BBC();
void fn_80110C08();
void fn_80110C30();
void *fn_80110C98();
}
struct UnknownGenObject80110BBC {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80110B48(void *object){
 fn_80110C08();
 return fn_8006546C(lbl_805636DC,object);
}
void *fn_80110B80(){
 if(!lbl_805636DC || !(reinterpret_cast<unsigned int *>(lbl_805636DC)[0x24/4]&4)) fn_80110C08();
 return lbl_805636DC;
}
void *fn_80110BBC(){
 UnknownGenObject80110BBC object;
 fn_8006665C(&object);
 object.unknown00=lbl_80495AD8;
 object.unknown00=lbl_8049634C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80110C08(){
 fn_80066188((int)fn_80110C30);
}
void fn_80110C30(){
 fn_8010CBD4();
 fn_80066204(0,(int)&lbl_805636DC,(int)fn_8010CFA4,(int)fn_8010E6DC,(int)fn_80110C98,(int)lbl_80494E64,12,(int)fn_80110BBC,0,0,0);
}
void *fn_80110C98(){return fn_80110B80();}
void *fn_80110CB8(){
 if(!lbl_805636E0) lbl_805636E0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805636E0;
}
void *fn_80110CF4(){
 if(!lbl_805636E0 || !(reinterpret_cast<unsigned int *>(lbl_805636E0)[0x24/4]&4)) fn_80110EC0();
 return lbl_805636E0;
}
}
#pragma pop
