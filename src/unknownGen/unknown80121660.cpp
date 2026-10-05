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
void fn_80121820();
extern char lbl_80472FA0[];
extern char lbl_80498C6C[];
extern char lbl_8049ABF0[];
extern char lbl_8049AC50[];
extern void *lbl_805621F4;
extern void *lbl_805639EC;
void *fn_801216D4();
void *fn_80121710();
void fn_80121768();
void fn_80121790();
void *fn_80121800();
}
struct UnknownGenObject80121710 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_80121660(void *object){
 fn_80121768();
 return fn_8006546C(lbl_805639EC,object);
}
void *fn_80121698(){
 if(!lbl_805639EC) lbl_805639EC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805639EC;
}
void *fn_801216D4(){
 if(!lbl_805639EC || !(reinterpret_cast<unsigned int *>(lbl_805639EC)[0x24/4]&4)) fn_80121768();
 return lbl_805639EC;
}
void *fn_80121710(){
 UnknownGenObject80121710 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_8049AC50;
 object.unknown00=lbl_8049ABF0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80121768(){
 fn_80066188((int)fn_80121790);
}
void fn_80121790(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_805639EC,(int)fn_80033A14,(int)fn_80024D1C,(int)fn_80121800,(int)lbl_80498C6C,20,(int)fn_80121710,(int)fn_80121820,0,0);
}
void *fn_80121800(){return fn_801216D4();}
}
#pragma pop
