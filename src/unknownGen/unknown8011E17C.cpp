#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80021D70();
void fn_8002A6D8();
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8011D8BC();
extern char lbl_80471914[];
extern char lbl_8049889C[];
extern char lbl_80499204[];
extern char lbl_8055F310[8];
extern void *lbl_805621F4;
extern void *lbl_805638E8;
extern void *lbl_805638EC;
void *fn_8011E1B4();
void *fn_8011E1F0();
void fn_8011E27C();
void fn_8011E2A4();
void *fn_8011E310();
}
struct UnknownGenObject8011E1F0 {
 void *unknown00;
 char unknown04[8];
 UnknownGenString unknown0C;
 char unknown10[48];
 inline ~UnknownGenObject8011E1F0(){unknown00=lbl_80499204;unknown00=lbl_80471914;}
};
extern "C" {
void *fn_8011E17C(void *object){
 fn_8011E27C();
 return fn_8006546C(lbl_805638E8,object);
}
void *fn_8011E1B4(){
 if(!lbl_805638E8 || !(reinterpret_cast<unsigned int *>(lbl_805638E8)[0x24/4]&4)) fn_8011E27C();
 return lbl_805638E8;
}
void *fn_8011E1F0(){
 UnknownGenObject8011E1F0 object;
 fn_800638E0(&object);
 object.unknown00=lbl_80499204;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8011E27C(){
 fn_80066188((int)fn_8011E2A4);
}
void fn_8011E2A4(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_805638E8,(int)fn_8002A6D8,(int)fn_80021D70,(int)fn_8011E310,(int)lbl_8049889C,52,(int)fn_8011E1F0,0,0,(int)lbl_8055F310);
}
void *fn_8011E310(){return fn_8011E1B4();}
void fn_8011E330(){
 if(!lbl_805638EC){
  void *object=(lbl_805638EC=fn_8006546C(lbl_805638E8,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805638EC));
   reinterpret_cast<short *>(lbl_805638EC)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805638EC);
  }
 }
}
}
#pragma pop
