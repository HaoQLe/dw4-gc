#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8011D8BC();
void fn_8011D9B4();
void *fn_8011F6A4();
void fn_80122910();
void *fn_801229CC();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_80498D1C[];
extern char lbl_8049A32C[];
extern char lbl_8049A388[];
extern char lbl_8049A3EC[];
extern char lbl_8049B9DC[];
extern char lbl_8055F3F8[8];
extern char lbl_8055F400[8];
extern void *lbl_805621F4;
extern void *lbl_80563A30;
extern void *lbl_80563A34;
void *fn_801225F8();
void *fn_80122634();
void fn_801226A4();
void fn_801226CC();
void *fn_80122738();
void *fn_801227CC();
void *fn_80122808();
void fn_80122854();
void fn_8012287C();
void *fn_801228F0();
}
struct UnknownGenObject80122634 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80122808 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *fn_80122584(void *object){
 fn_801226A4();
 return fn_8006546C(lbl_80563A30,object);
}
void *fn_801225BC(){
 if(!lbl_80563A30) lbl_80563A30=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563A30;
}
void *fn_801225F8(){
 if(!lbl_80563A30 || !(reinterpret_cast<unsigned int *>(lbl_80563A30)[0x24/4]&4)) fn_801226A4();
 return lbl_80563A30;
}
void *fn_80122634(){
 UnknownGenObject80122634 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_8049A3EC;
 object.unknown00=lbl_8049A388;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801226A4(){
 fn_80066188((int)fn_801226CC);
}
void fn_801226CC(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_80563A30,(int)fn_8002907C,(int)fn_80024180,(int)fn_80122738,(int)lbl_80498D1C,20,(int)fn_80122634,0,0,(int)lbl_8055F3F8);
}
void *fn_80122738(){return fn_801225F8();}
void *fn_80122758(void *object){
 fn_80122854();
 return fn_8006546C(lbl_80563A34,object);
}
void *fn_80122790(){
 if(!lbl_80563A34) lbl_80563A34=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563A34;
}
void *fn_801227CC(){
 if(!lbl_80563A34 || !(reinterpret_cast<unsigned int *>(lbl_80563A34)[0x24/4]&4)) fn_80122854();
 return lbl_80563A34;
}
void *fn_80122808(){
 UnknownGenObject80122808 object;
 fn_8006665C(&object);
 object.unknown00=lbl_8049B9DC;
 object.unknown00=lbl_8049A32C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80122854(){
 fn_80066188((int)fn_8012287C);
}
void fn_8012287C(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_80563A34,(int)fn_8011D9B4,(int)fn_8011F6A4,(int)fn_801228F0,(int)lbl_8055F400,32,(int)fn_80122808,(int)fn_80122910,(int)fn_801229CC,0);
}
void *fn_801228F0(){return fn_801227CC();}
}
#pragma pop
