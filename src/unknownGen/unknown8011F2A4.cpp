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
extern char lbl_804989A4[];
extern char lbl_80499D74[];
extern char lbl_8055F358[8];
extern void *lbl_805621F4;
extern void *lbl_8056394C;
extern void *lbl_80563950;
void *fn_8011F2A4();
void *fn_8011F2E0();
void fn_8011F36C();
void fn_8011F394();
void *fn_8011F400();
}
struct UnknownGenObject8011F2E0 {
 void *unknown00;
 char unknown04[8];
 UnknownGenString unknown0C;
 char unknown10[48];
 inline ~UnknownGenObject8011F2E0(){unknown00=lbl_80499D74;unknown00=lbl_80471914;}
};
extern "C" {
void *fn_8011F2A4(){
 if(!lbl_8056394C || !(reinterpret_cast<unsigned int *>(lbl_8056394C)[0x24/4]&4)) fn_8011F36C();
 return lbl_8056394C;
}
void *fn_8011F2E0(){
 UnknownGenObject8011F2E0 object;
 fn_800638E0(&object);
 object.unknown00=lbl_80499D74;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8011F36C(){
 fn_80066188((int)fn_8011F394);
}
void fn_8011F394(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_8056394C,(int)fn_8002A6D8,(int)fn_80021D70,(int)fn_8011F400,(int)lbl_804989A4,52,(int)fn_8011F2E0,0,0,(int)lbl_8055F358);
}
void *fn_8011F400(){return fn_8011F2A4();}
void fn_8011F420(){
 if(!lbl_80563950){
  void *object=(lbl_80563950=fn_8006546C(lbl_8056394C,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80563950));
   reinterpret_cast<short *>(lbl_80563950)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80563950);
  }
 }
}
}
#pragma pop
