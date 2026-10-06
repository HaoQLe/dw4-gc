#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024D1C();
void *fn_80029E64(void *);
void fn_80033A14();
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8011D8BC();
void fn_80122288();
extern char lbl_80472FA0[];
extern char lbl_8047DF98[];
extern char lbl_8047DFF8[];
extern char lbl_80498CCC[];
extern void *lbl_805621F4;
extern void *lbl_80563A14;
void *fn_8012213C();
void *fn_80122178();
void fn_801221D0();
void fn_801221F8();
void *fn_80122268();
}
struct UnknownGenObject80122178_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801220C8(void *object){
 fn_801221D0();
 return fn_8006546C(lbl_80563A14,object);
}
void *fn_80122100(){
 if(!lbl_80563A14) lbl_80563A14=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563A14;
}
void *fn_8012213C(){
 if(!lbl_80563A14 || !(reinterpret_cast<unsigned int *>(lbl_80563A14)[0x24/4]&4)) fn_801221D0();
 return lbl_80563A14;
}
void *fn_80122178(){
 UnknownGenObject80122178_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_8047DFF8;
 object.unknown00=lbl_8047DF98;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801221D0(){
 fn_80066188((int)fn_801221F8);
}
void fn_801221F8(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_80563A14,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_80122268,(int)lbl_80498CCC,20,(int)fn_80122178,(int)fn_80122288,0,0);
}
void *fn_80122268(){return fn_8012213C();}
}
#pragma pop
