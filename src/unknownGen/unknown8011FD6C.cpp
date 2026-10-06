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
void *fn_80124538();
extern char lbl_80471914[];
extern char lbl_80498A90[];
extern char lbl_80499F5C[];
extern char lbl_8055F3D8[8];
extern void *lbl_805621F4;
extern void *lbl_8056398C;
extern void *lbl_80563990;
void *fn_8011FDC4();
void *fn_8011FE00();
void fn_8011FE8C();
void fn_8011FEB4();
void *fn_8011FF20();
}
struct UnknownGenRoot8011FE00 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011FE00(){fn_800638E0(this);}
};
struct UnknownGenObject8011FE00_0 : UnknownGenRoot8011FE00 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011FE00_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011FE00 : UnknownGenObject8011FE00_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011FE00(){unknown00=lbl_80499F5C;}
};
extern "C" {
void *fn_8011FD6C(){return fn_80124538();}
void *fn_8011FD8C(void *object){
 fn_8011FE8C();
 return fn_8006546C(lbl_8056398C,object);
}
void *fn_8011FDC4(){
 if(!lbl_8056398C || !(reinterpret_cast<unsigned int *>(lbl_8056398C)[0x24/4]&4)) fn_8011FE8C();
 return lbl_8056398C;
}
void *fn_8011FE00(){
 UnknownGenObject8011FE00 object;
 object.unknown00=lbl_80499F5C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8011FE8C(){
 fn_80066188((int)fn_8011FEB4);
}
void fn_8011FEB4(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_8056398C,(int)fn_8002A6D8,(int)fn_80021D70,(int)fn_8011FF20,(int)lbl_80498A90,52,(int)fn_8011FE00,0,0,(int)lbl_8055F3D8);
}
void *fn_8011FF20(){return fn_8011FDC4();}
void fn_8011FF40(){
 if(!lbl_80563990){
  void *object=(lbl_80563990=fn_8006546C(lbl_8056398C,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80563990));
   reinterpret_cast<short *>(lbl_80563990)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80563990);
  }
 }
}
}
#pragma pop
