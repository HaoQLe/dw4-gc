#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024D1C();
void fn_80033A14();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8011D8BC();
void fn_80121C68();
extern char lbl_80472FA0[];
extern char lbl_80498CA0[];
extern char lbl_8049A9A8[];
extern char lbl_8049AA08[];
extern void *lbl_80563A00;
void *fn_80121B1C();
void *fn_80121B58();
void fn_80121BB0();
void fn_80121BD8();
void *fn_80121C48();
}
struct UnknownGenObject80121B58_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80121B1C(){
 if(!lbl_80563A00 || !(reinterpret_cast<unsigned int *>(lbl_80563A00)[0x24/4]&4)) fn_80121BB0();
 return lbl_80563A00;
}
void *fn_80121B58(){
 UnknownGenObject80121B58_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_8049AA08;
 object.unknown00=lbl_8049A9A8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80121BB0(){
 fn_80066188((int)fn_80121BD8);
}
void fn_80121BD8(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_80563A00,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_80121C48,(int)lbl_80498CA0,20,(int)fn_80121B58,(int)fn_80121C68,0,0);
}
void *fn_80121C48(){return fn_80121B1C();}
}
#pragma pop
