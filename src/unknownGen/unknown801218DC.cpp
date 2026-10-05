#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024D1C();
void fn_80033A14();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8011D8BC();
void fn_80121A60();
extern char lbl_80472FA0[];
extern char lbl_80498C80[];
extern char lbl_8049AB30[];
extern char lbl_8049AB90[];
extern void *lbl_805639F4;
void *fn_80121914();
void *fn_80121950();
void fn_801219A8();
void fn_801219D0();
void *fn_80121A40();
}
struct UnknownGenObject80121950 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801218DC(void *object){
 fn_801219A8();
 return fn_8006546C(lbl_805639F4,object);
}
void *fn_80121914(){
 if(!lbl_805639F4 || !(reinterpret_cast<unsigned int *>(lbl_805639F4)[0x24/4]&4)) fn_801219A8();
 return lbl_805639F4;
}
void *fn_80121950(){
 UnknownGenObject80121950 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_8049AB90;
 object.unknown00=lbl_8049AB30;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801219A8(){
 fn_80066188((int)fn_801219D0);
}
void fn_801219D0(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_805639F4,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_80121A40,(int)lbl_80498C80,20,(int)fn_80121950,(int)fn_80121A60,0,0);
}
void *fn_80121A40(){return fn_80121914();}
}
#pragma pop
