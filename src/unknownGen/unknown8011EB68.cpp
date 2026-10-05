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
extern char lbl_80498920[];
extern char lbl_804997BC[];
extern char lbl_8055F340[8];
extern void *lbl_805621F4;
extern void *lbl_8056391C;
extern void *lbl_80563920;
void *fn_8011EBA0();
void *fn_8011EBDC();
void fn_8011EC68();
void fn_8011EC90();
void *fn_8011ECFC();
}
struct UnknownGenObject8011EBDC {
 void *unknown00;
 char unknown04[8];
 UnknownGenString unknown0C;
 char unknown10[48];
 inline ~UnknownGenObject8011EBDC(){unknown00=lbl_804997BC;unknown00=lbl_80471914;}
};
extern "C" {
void *fn_8011EB68(void *object){
 fn_8011EC68();
 return fn_8006546C(lbl_8056391C,object);
}
void *fn_8011EBA0(){
 if(!lbl_8056391C || !(reinterpret_cast<unsigned int *>(lbl_8056391C)[0x24/4]&4)) fn_8011EC68();
 return lbl_8056391C;
}
void *fn_8011EBDC(){
 UnknownGenObject8011EBDC object;
 fn_800638E0(&object);
 object.unknown00=lbl_804997BC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8011EC68(){
 fn_80066188((int)fn_8011EC90);
}
void fn_8011EC90(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_8056391C,(int)fn_8002A6D8,(int)fn_80021D70,(int)fn_8011ECFC,(int)lbl_80498920,52,(int)fn_8011EBDC,0,0,(int)lbl_8055F340);
}
void *fn_8011ECFC(){return fn_8011EBA0();}
void fn_8011ED1C(){
 if(!lbl_80563920){
  void *object=(lbl_80563920=fn_8006546C(lbl_8056391C,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80563920));
   reinterpret_cast<short *>(lbl_80563920)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80563920);
  }
 }
}
}
#pragma pop
