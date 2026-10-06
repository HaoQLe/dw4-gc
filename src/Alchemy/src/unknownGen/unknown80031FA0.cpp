#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
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
extern char lbl_80466FE0[];
extern char lbl_80471914[];
extern char lbl_80472CA4[];
extern char lbl_8055D580[8];
extern void *lbl_80561C94;
extern void *lbl_80561C98;
extern void *lbl_805621F4;
void *fn_80031FD8();
void *fn_80032014();
void fn_800320A0();
void fn_800320C8();
void *fn_80032134();
}
struct UnknownGenRoot80032014 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80032014(){fn_800638E0(this);}
};
struct UnknownGenObject80032014_0 : UnknownGenRoot80032014 {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80032014_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80032014 : UnknownGenObject80032014_0 {
 char unknown10[48];
 inline ~UnknownGenObject80032014(){unknown00=lbl_80472CA4;}
};
extern "C" {
void *fn_80031FA0(void *object){
 fn_800320A0();
 return fn_8006546C(lbl_80561C94,object);
}
void *fn_80031FD8(){
 if(!lbl_80561C94 || !(reinterpret_cast<unsigned int *>(lbl_80561C94)[0x24/4]&4)) fn_800320A0();
 return lbl_80561C94;
}
void *fn_80032014(){
 UnknownGenObject80032014 object;
 object.unknown00=lbl_80472CA4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800320A0(){
 fn_80066188((int)fn_800320C8);
}
void fn_800320C8(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561C94,(int)fn_8002A6D8,(int)fn_80021D70,(int)fn_80032134,(int)lbl_80466FE0,52,(int)fn_80032014,0,0,(int)lbl_8055D580);
}
void *fn_80032134(){return fn_80031FD8();}
void fn_80032154(){
 if(!lbl_80561C98){
  void *object=(lbl_80561C98=fn_8006546C(lbl_80561C94,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561C98));
   reinterpret_cast<short *>(lbl_80561C98)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561C98);
  }
 }
}
}
#pragma pop
