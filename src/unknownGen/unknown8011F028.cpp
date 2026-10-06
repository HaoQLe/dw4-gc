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
extern char lbl_80498978[];
extern char lbl_80499B8C[];
extern char lbl_8055F350[8];
extern void *lbl_805621F4;
extern void *lbl_8056393C;
extern void *lbl_80563940;
void *fn_8011F060();
void *fn_8011F09C();
void fn_8011F128();
void fn_8011F150();
void *fn_8011F1BC();
}
struct UnknownGenRoot8011F09C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8011F09C(){fn_800638E0(this);}
};
struct UnknownGenObject8011F09C_0 : UnknownGenRoot8011F09C {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject8011F09C_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject8011F09C : UnknownGenObject8011F09C_0 {
 char unknown10[48];
 inline ~UnknownGenObject8011F09C(){unknown00=lbl_80499B8C;}
};
extern "C" {
void *fn_8011F028(void *object){
 fn_8011F128();
 return fn_8006546C(lbl_8056393C,object);
}
void *fn_8011F060(){
 if(!lbl_8056393C || !(reinterpret_cast<unsigned int *>(lbl_8056393C)[0x24/4]&4)) fn_8011F128();
 return lbl_8056393C;
}
void *fn_8011F09C(){
 UnknownGenObject8011F09C object;
 object.unknown00=lbl_80499B8C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8011F128(){
 fn_80066188((int)fn_8011F150);
}
void fn_8011F150(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_8056393C,(int)fn_8002A6D8,(int)fn_80021D70,(int)fn_8011F1BC,(int)lbl_80498978,52,(int)fn_8011F09C,0,0,(int)lbl_8055F350);
}
void *fn_8011F1BC(){return fn_8011F060();}
void fn_8011F1DC(){
 if(!lbl_80563940){
  void *object=(lbl_80563940=fn_8006546C(lbl_8056393C,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80563940));
   reinterpret_cast<short *>(lbl_80563940)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80563940);
  }
 }
}
}
#pragma pop
