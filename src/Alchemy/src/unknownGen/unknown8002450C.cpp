#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80021D70();
void fn_800246C8();
void fn_8002A6D8();
void fn_800638E0(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
extern char lbl_80463508[];
extern char lbl_80470E00[];
extern char lbl_80471914[];
extern char lbl_8055D090[8];
extern void *lbl_80561560;
void *fn_80024544();
void *fn_80024580();
void fn_8002460C();
void fn_80024634();
void *fn_800246A8();
}
struct UnknownGenObject80024580 {
 void *unknown00;
 char unknown04[8];
 UnknownGenString unknown0C;
 char unknown10[48];
 inline ~UnknownGenObject80024580(){unknown00=lbl_80470E00;unknown00=lbl_80471914;}
};
extern "C" {
void *fn_8002450C(void *object){
 fn_8002460C();
 return fn_8006546C(lbl_80561560,object);
}
void *fn_80024544(){
 if(!lbl_80561560 || !(reinterpret_cast<unsigned int *>(lbl_80561560)[0x24/4]&4)) fn_8002460C();
 return lbl_80561560;
}
void *fn_80024580(){
 UnknownGenObject80024580 object;
 fn_800638E0(&object);
 object.unknown00=lbl_80470E00;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002460C(){
 fn_80066188((int)fn_80024634);
}
void fn_80024634(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561560,(int)fn_8002A6D8,(int)fn_80021D70,(int)fn_800246A8,(int)lbl_80463508,64,(int)fn_80024580,(int)fn_800246C8,0,(int)lbl_8055D090);
}
void *fn_800246A8(){return fn_80024544();}
}
#pragma pop
