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
void fn_801215A4();
extern char lbl_80472FA0[];
extern char lbl_80498AF8[];
extern char lbl_80498B10[];
extern char lbl_80498B28[];
extern char lbl_80498B3C[];
extern char lbl_80498B54[];
extern char lbl_80498B70[];
extern char lbl_80498B8C[];
extern char lbl_80498BA8[];
extern char lbl_80498BC4[];
extern char lbl_80498BE4[];
extern char lbl_80498BFC[];
extern char lbl_80498C14[];
extern char lbl_80498C44[];
extern char lbl_8049AD78[];
extern char lbl_8049ADD8[];
extern char lbl_8049AF00[];
extern char lbl_8049AF60[];
extern char lbl_8049AFC0[];
extern char lbl_8049B020[];
extern char lbl_8049B080[];
extern char lbl_8049B0E0[];
extern char lbl_8049B140[];
extern char lbl_8049B1A0[];
extern char lbl_8049B200[];
extern char lbl_8049B260[];
extern char lbl_8049B2C0[];
extern char lbl_8049B320[];
extern char lbl_8049B380[];
extern char lbl_8049B3E0[];
extern char lbl_8049B440[];
extern char lbl_8049B4A0[];
extern char lbl_8049B500[];
extern char lbl_8049B560[];
extern char lbl_8049B5C0[];
extern char lbl_8049B620[];
extern char lbl_8049B680[];
extern char lbl_8049B6E0[];
extern char lbl_8049B740[];
extern char lbl_8049B7A0[];
extern void *lbl_805621F4;
extern void *lbl_805639AC;
extern void *lbl_805639B0;
extern void *lbl_805639B4;
extern void *lbl_805639B8;
extern void *lbl_805639BC;
extern void *lbl_805639C0;
extern void *lbl_805639C4;
extern void *lbl_805639C8;
extern void *lbl_805639CC;
extern void *lbl_805639D0;
extern void *lbl_805639D4;
extern void *lbl_805639D8;
extern void *lbl_805639E0;
void *fn_80120284();
void *fn_801202C0();
void fn_80120318();
void fn_80120340();
void *fn_801203A8();
void *fn_80120400();
void *fn_8012043C();
void fn_80120494();
void fn_801204BC();
void *fn_80120524();
void *fn_8012057C();
void *fn_801205B8();
void fn_80120610();
void fn_80120638();
void *fn_801206A0();
void *fn_801206F8();
void *fn_80120734();
void fn_8012078C();
void fn_801207B4();
void *fn_8012081C();
void *fn_80120874();
void *fn_801208B0();
void fn_80120908();
void fn_80120930();
void *fn_80120998();
void *fn_801209F0();
void *fn_80120A2C();
void fn_80120A84();
void fn_80120AAC();
void *fn_80120B14();
void *fn_80120B6C();
void *fn_80120BA8();
void fn_80120C00();
void fn_80120C28();
void *fn_80120C90();
void *fn_80120CE8();
void *fn_80120D24();
void fn_80120D7C();
void fn_80120DA4();
void *fn_80120E0C();
void *fn_80120E64();
void *fn_80120EA0();
void fn_80120EF8();
void fn_80120F20();
void *fn_80120F88();
void *fn_80120FE0();
void *fn_8012101C();
void fn_80121074();
void fn_8012109C();
void *fn_80121104();
void *fn_8012115C();
void *fn_80121198();
void fn_801211F0();
void fn_80121218();
void *fn_80121280();
void *fn_801212D8();
void *fn_80121314();
void fn_8012136C();
void fn_80121394();
void *fn_801213FC();
void *fn_80121458();
void *fn_80121494();
void fn_801214EC();
void fn_80121514();
void *fn_80121584();
}
struct UnknownGenObject801202C0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8012043C {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801205B8 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80120734 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801208B0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80120A2C {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80120BA8 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80120D24 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80120EA0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8012101C {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80121198 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80121314 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80121494 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_8012024C(void *object){
 fn_80120318();
 return fn_8006546C(lbl_805639AC,object);
}
void *fn_80120284(){
 if(!lbl_805639AC || !(reinterpret_cast<unsigned int *>(lbl_805639AC)[0x24/4]&4)) fn_80120318();
 return lbl_805639AC;
}
void *fn_801202C0(){
 UnknownGenObject801202C0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_8049B7A0;
 object.unknown00=lbl_8049B740;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80120318(){
 fn_80066188((int)fn_80120340);
}
void fn_80120340(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_805639AC,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_801203A8,(int)lbl_80498AF8,20,(int)fn_801202C0,0,0,0);
}
void *fn_801203A8(){return fn_80120284();}
void *fn_801203C8(void *object){
 fn_80120494();
 return fn_8006546C(lbl_805639B0,object);
}
void *fn_80120400(){
 if(!lbl_805639B0 || !(reinterpret_cast<unsigned int *>(lbl_805639B0)[0x24/4]&4)) fn_80120494();
 return lbl_805639B0;
}
void *fn_8012043C(){
 UnknownGenObject8012043C object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_8049B6E0;
 object.unknown00=lbl_8049B680;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80120494(){
 fn_80066188((int)fn_801204BC);
}
void fn_801204BC(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_805639B0,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_80120524,(int)lbl_80498B10,20,(int)fn_8012043C,0,0,0);
}
void *fn_80120524(){return fn_80120400();}
void *fn_80120544(void *object){
 fn_80120610();
 return fn_8006546C(lbl_805639B4,object);
}
void *fn_8012057C(){
 if(!lbl_805639B4 || !(reinterpret_cast<unsigned int *>(lbl_805639B4)[0x24/4]&4)) fn_80120610();
 return lbl_805639B4;
}
void *fn_801205B8(){
 UnknownGenObject801205B8 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_8049B620;
 object.unknown00=lbl_8049B5C0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80120610(){
 fn_80066188((int)fn_80120638);
}
void fn_80120638(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_805639B4,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_801206A0,(int)lbl_80498B28,20,(int)fn_801205B8,0,0,0);
}
void *fn_801206A0(){return fn_8012057C();}
void *fn_801206C0(void *object){
 fn_8012078C();
 return fn_8006546C(lbl_805639B8,object);
}
void *fn_801206F8(){
 if(!lbl_805639B8 || !(reinterpret_cast<unsigned int *>(lbl_805639B8)[0x24/4]&4)) fn_8012078C();
 return lbl_805639B8;
}
void *fn_80120734(){
 UnknownGenObject80120734 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_8049B560;
 object.unknown00=lbl_8049B500;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8012078C(){
 fn_80066188((int)fn_801207B4);
}
void fn_801207B4(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_805639B8,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_8012081C,(int)lbl_80498B3C,20,(int)fn_80120734,0,0,0);
}
void *fn_8012081C(){return fn_801206F8();}
void *fn_8012083C(void *object){
 fn_80120908();
 return fn_8006546C(lbl_805639BC,object);
}
void *fn_80120874(){
 if(!lbl_805639BC || !(reinterpret_cast<unsigned int *>(lbl_805639BC)[0x24/4]&4)) fn_80120908();
 return lbl_805639BC;
}
void *fn_801208B0(){
 UnknownGenObject801208B0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_8049B4A0;
 object.unknown00=lbl_8049B440;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80120908(){
 fn_80066188((int)fn_80120930);
}
void fn_80120930(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_805639BC,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_80120998,(int)lbl_80498B54,20,(int)fn_801208B0,0,0,0);
}
void *fn_80120998(){return fn_80120874();}
void *fn_801209B8(void *object){
 fn_80120A84();
 return fn_8006546C(lbl_805639C0,object);
}
void *fn_801209F0(){
 if(!lbl_805639C0 || !(reinterpret_cast<unsigned int *>(lbl_805639C0)[0x24/4]&4)) fn_80120A84();
 return lbl_805639C0;
}
void *fn_80120A2C(){
 UnknownGenObject80120A2C object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_8049B3E0;
 object.unknown00=lbl_8049B380;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80120A84(){
 fn_80066188((int)fn_80120AAC);
}
void fn_80120AAC(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_805639C0,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_80120B14,(int)lbl_80498B70,20,(int)fn_80120A2C,0,0,0);
}
void *fn_80120B14(){return fn_801209F0();}
void *fn_80120B34(void *object){
 fn_80120C00();
 return fn_8006546C(lbl_805639C4,object);
}
void *fn_80120B6C(){
 if(!lbl_805639C4 || !(reinterpret_cast<unsigned int *>(lbl_805639C4)[0x24/4]&4)) fn_80120C00();
 return lbl_805639C4;
}
void *fn_80120BA8(){
 UnknownGenObject80120BA8 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_8049B320;
 object.unknown00=lbl_8049B2C0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80120C00(){
 fn_80066188((int)fn_80120C28);
}
void fn_80120C28(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_805639C4,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_80120C90,(int)lbl_80498B8C,20,(int)fn_80120BA8,0,0,0);
}
void *fn_80120C90(){return fn_80120B6C();}
void *fn_80120CB0(void *object){
 fn_80120D7C();
 return fn_8006546C(lbl_805639C8,object);
}
void *fn_80120CE8(){
 if(!lbl_805639C8 || !(reinterpret_cast<unsigned int *>(lbl_805639C8)[0x24/4]&4)) fn_80120D7C();
 return lbl_805639C8;
}
void *fn_80120D24(){
 UnknownGenObject80120D24 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_8049B260;
 object.unknown00=lbl_8049B200;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80120D7C(){
 fn_80066188((int)fn_80120DA4);
}
void fn_80120DA4(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_805639C8,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_80120E0C,(int)lbl_80498BA8,20,(int)fn_80120D24,0,0,0);
}
void *fn_80120E0C(){return fn_80120CE8();}
void *fn_80120E2C(void *object){
 fn_80120EF8();
 return fn_8006546C(lbl_805639CC,object);
}
void *fn_80120E64(){
 if(!lbl_805639CC || !(reinterpret_cast<unsigned int *>(lbl_805639CC)[0x24/4]&4)) fn_80120EF8();
 return lbl_805639CC;
}
void *fn_80120EA0(){
 UnknownGenObject80120EA0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_8049B1A0;
 object.unknown00=lbl_8049B140;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80120EF8(){
 fn_80066188((int)fn_80120F20);
}
void fn_80120F20(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_805639CC,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_80120F88,(int)lbl_80498BC4,20,(int)fn_80120EA0,0,0,0);
}
void *fn_80120F88(){return fn_80120E64();}
void *fn_80120FA8(void *object){
 fn_80121074();
 return fn_8006546C(lbl_805639D0,object);
}
void *fn_80120FE0(){
 if(!lbl_805639D0 || !(reinterpret_cast<unsigned int *>(lbl_805639D0)[0x24/4]&4)) fn_80121074();
 return lbl_805639D0;
}
void *fn_8012101C(){
 UnknownGenObject8012101C object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_8049B0E0;
 object.unknown00=lbl_8049B080;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80121074(){
 fn_80066188((int)fn_8012109C);
}
void fn_8012109C(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_805639D0,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_80121104,(int)lbl_80498BE4,20,(int)fn_8012101C,0,0,0);
}
void *fn_80121104(){return fn_80120FE0();}
void *fn_80121124(void *object){
 fn_801211F0();
 return fn_8006546C(lbl_805639D4,object);
}
void *fn_8012115C(){
 if(!lbl_805639D4 || !(reinterpret_cast<unsigned int *>(lbl_805639D4)[0x24/4]&4)) fn_801211F0();
 return lbl_805639D4;
}
void *fn_80121198(){
 UnknownGenObject80121198 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_8049B020;
 object.unknown00=lbl_8049AFC0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801211F0(){
 fn_80066188((int)fn_80121218);
}
void fn_80121218(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_805639D4,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_80121280,(int)lbl_80498BFC,20,(int)fn_80121198,0,0,0);
}
void *fn_80121280(){return fn_8012115C();}
void *fn_801212A0(void *object){
 fn_8012136C();
 return fn_8006546C(lbl_805639D8,object);
}
void *fn_801212D8(){
 if(!lbl_805639D8 || !(reinterpret_cast<unsigned int *>(lbl_805639D8)[0x24/4]&4)) fn_8012136C();
 return lbl_805639D8;
}
void *fn_80121314(){
 UnknownGenObject80121314 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_8049AF60;
 object.unknown00=lbl_8049AF00;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8012136C(){
 fn_80066188((int)fn_80121394);
}
void fn_80121394(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_805639D8,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_801213FC,(int)lbl_80498C14,20,(int)fn_80121314,0,0,0);
}
void *fn_801213FC(){return fn_801212D8();}
void *fn_8012141C(){
 if(!lbl_805639E0) lbl_805639E0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805639E0;
}
void *fn_80121458(){
 if(!lbl_805639E0 || !(reinterpret_cast<unsigned int *>(lbl_805639E0)[0x24/4]&4)) fn_801214EC();
 return lbl_805639E0;
}
void *fn_80121494(){
 UnknownGenObject80121494 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_8049ADD8;
 object.unknown00=lbl_8049AD78;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801214EC(){
 fn_80066188((int)fn_80121514);
}
void fn_80121514(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_805639E0,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_80121584,(int)lbl_80498C44,20,(int)fn_80121494,(int)fn_801215A4,0,0);
}
void *fn_80121584(){return fn_80121458();}
}
#pragma pop
