#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void fn_8002A6D8();
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void fn_800638E0(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_80463100[];
extern char lbl_80470674[];
extern char lbl_80471914[];
extern char lbl_8055CF00[8];
extern void *lbl_8056148C;
extern void *lbl_80561490;
extern void *lbl_805617BC;
extern void *lbl_805621F4;
void *fn_80021BF4();
void *fn_80021C30();
void fn_80021CBC();
void fn_80021CE4();
void *fn_80021D50();
void *fn_80021D70();
}
struct UnknownGenObject80021C30 {
 void *unknown00;
 char unknown04[8];
 UnknownGenString unknown0C;
 char unknown10[48];
 inline ~UnknownGenObject80021C30(){unknown00=lbl_80470674;unknown00=lbl_80471914;}
};
extern "C" {
void *fn_80021BF4(){
 if(!lbl_8056148C || !(reinterpret_cast<unsigned int *>(lbl_8056148C)[0x24/4]&4)) fn_80021CBC();
 return lbl_8056148C;
}
void *fn_80021C30(){
 UnknownGenObject80021C30 object;
 fn_800638E0(&object);
 object.unknown00=lbl_80470674;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80021CBC(){
 fn_80066188((int)fn_80021CE4);
}
void fn_80021CE4(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_8056148C,(int)fn_8002A6D8,(int)fn_80021D70,(int)fn_80021D50,(int)lbl_80463100,52,(int)fn_80021C30,0,0,(int)lbl_8055CF00);
}
void *fn_80021D50(){return fn_80021BF4();}
void *fn_80021D70(){return lbl_805617BC;}
void fn_80021D78(){
 if(!lbl_80561490){
  void *object=(lbl_80561490=fn_8006546C(lbl_8056148C,fn_800607F4(lbl_805621F4)));
  if(object){
   fn_80053E6C(fn_80063B5C(),object);
   unknownGenDrop(reinterpret_cast<UnknownGenValue *>(lbl_80561490));
   reinterpret_cast<short *>(lbl_80561490)[0x12/2]=reinterpret_cast<int *>(fn_80063B5C())[0xC/4]-1;
   fn_80063F14(lbl_80561490);
  }
 }
}
}
#pragma pop
