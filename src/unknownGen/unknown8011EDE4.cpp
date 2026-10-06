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
extern char lbl_8049894C[];
extern char lbl_804999A4[];
extern char lbl_8055F348[8];
extern void *lbl_805621F4;
extern void *lbl_8056392C;
extern void *lbl_80563930;
void *fn_8011EDE4();
void *fn_8011EE20();
void fn_8011EEAC();
void fn_8011EED4();
void *fn_8011EF40();
}
struct UnknownGenRoot8011EE20 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011EE20(){fn_800638E0(this);}
};
struct UnknownGenObject8011EE20_0 : UnknownGenRoot8011EE20 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011EE20_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011EE20 : UnknownGenObject8011EE20_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011EE20(){unknown00=lbl_804999A4;}
};
extern "C" {
void *fn_8011EDE4(){
 if(!lbl_8056392C || !(reinterpret_cast<unsigned int *>(lbl_8056392C)[0x24/4]&4)) fn_8011EEAC();
 return lbl_8056392C;
}
void *fn_8011EE20(){
 UnknownGenObject8011EE20 object;
 object.unknown00=lbl_804999A4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8011EEAC(){
 fn_80066188((int)fn_8011EED4);
}
void fn_8011EED4(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_8056392C,(int)fn_8002A6D8,(int)fn_80021D70,(int)fn_8011EF40,(int)lbl_8049894C,52,(int)fn_8011EE20,0,0,(int)lbl_8055F348);
}
void *fn_8011EF40(){return fn_8011EDE4();}
void fn_8011EF60(){
 if(!lbl_80563930){
  void *object=(lbl_80563930=fn_8006546C(lbl_8056392C,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80563930));
   reinterpret_cast<short *>(lbl_80563930)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80563930);
  }
 }
}
}
#pragma pop
