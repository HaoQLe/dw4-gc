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
extern char lbl_80498AC4[];
extern char lbl_8049A144[];
extern char lbl_8055F3E0[8];
extern void *lbl_805621F4;
extern void *lbl_8056399C;
extern void *lbl_805639A0;
void *fn_80120008();
void *fn_80120044();
void fn_801200D0();
void fn_801200F8();
void *fn_80120164();
}
struct UnknownGenObject80120044 {
 void *unknown00;
 char unknown04[8];
 UnknownGenString unknown0C;
 char unknown10[48];
 inline ~UnknownGenObject80120044(){unknown00=lbl_8049A144;unknown00=lbl_80471914;}
};
extern "C" {
void *fn_80120008(){
 if(!lbl_8056399C || !(reinterpret_cast<unsigned int *>(lbl_8056399C)[0x24/4]&4)) fn_801200D0();
 return lbl_8056399C;
}
void *fn_80120044(){
 UnknownGenObject80120044 object;
 fn_800638E0(&object);
 object.unknown00=lbl_8049A144;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801200D0(){
 fn_80066188((int)fn_801200F8);
}
void fn_801200F8(){
 fn_8011D8BC();
 fn_80066204(0,(int)&lbl_8056399C,(int)fn_8002A6D8,(int)fn_80021D70,(int)fn_80120164,(int)lbl_80498AC4,52,(int)fn_80120044,0,0,(int)lbl_8055F3E0);
}
void *fn_80120164(){return fn_80120008();}
void fn_80120184(){
 if(!lbl_805639A0){
  void *object=(lbl_805639A0=fn_8006546C(lbl_8056399C,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_805639A0));
   reinterpret_cast<short *>(lbl_805639A0)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_805639A0);
  }
 }
}
}
#pragma pop
