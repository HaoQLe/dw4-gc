#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80021D70();
void fn_8002A6D8();
void *fn_8003B478();
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_804652FC[];
extern char lbl_80471914[];
extern char lbl_80472100[];
extern char lbl_8055D36C[8];
extern void *lbl_8056198C;
extern void *lbl_80561990;
extern void *lbl_805621F4;
void *fn_8002CEE0();
void *fn_8002CF1C();
void fn_8002CFA8();
void fn_8002CFD0();
void *fn_8002D03C();
}
struct UnknownGenObject8002CF1C {
 void *unknown00;
 char unknown04[8];
 UnknownGenString unknown0C;
 char unknown10[48];
 inline ~UnknownGenObject8002CF1C(){unknown00=lbl_80472100;unknown00=lbl_80471914;}
};
extern "C" {
void *fn_8002CE88(){return fn_8003B478();}
void *fn_8002CEA8(void *object){
 fn_8002CFA8();
 return fn_8006546C(lbl_8056198C,object);
}
void *fn_8002CEE0(){
 if(!lbl_8056198C || !(reinterpret_cast<unsigned int *>(lbl_8056198C)[0x24/4]&4)) fn_8002CFA8();
 return lbl_8056198C;
}
void *fn_8002CF1C(){
 UnknownGenObject8002CF1C object;
 fn_800638E0(&object);
 object.unknown00=lbl_80472100;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002CFA8(){
 fn_80066188((int)fn_8002CFD0);
}
void fn_8002CFD0(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_8056198C,(int)fn_8002A6D8,(int)fn_80021D70,(int)fn_8002D03C,(int)lbl_804652FC,52,(int)fn_8002CF1C,0,0,(int)lbl_8055D36C);
}
void *fn_8002D03C(){return fn_8002CEE0();}
void fn_8002D05C(){
 if(!lbl_80561990){
  void *object=(lbl_80561990=fn_8006546C(lbl_8056198C,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561990));
   reinterpret_cast<short *>(lbl_80561990)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561990);
  }
 }
}
}
#pragma pop
