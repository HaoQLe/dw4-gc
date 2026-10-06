#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80065DBC(int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801C45DC();
void fn_801DF2D4();
void fn_801DF2FC();
void *fn_801DF328();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B05B8[];
extern char lbl_804B6FFC[];
extern char lbl_804B7060[];
extern char lbl_80560750[8];
extern void *lbl_805621F4;
extern void *lbl_805650F0;
extern void *lbl_805650F4;
void *fn_801C4340();
void *fn_801C437C();
void fn_801C43EC();
void fn_801C4414();
void *fn_801C4480();
}
struct UnknownGenObject801C437C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_801C42B8(){
 fn_801DF2FC();
 fn_80065DBC((int)fn_801DF2D4);
}
void *fn_801C42E4(){return fn_801DF328();}
void *fn_801C4304(){
 if(!lbl_805650F0) lbl_805650F0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805650F0;
}
void *fn_801C4340(){
 if(!lbl_805650F0 || !(reinterpret_cast<unsigned int *>(lbl_805650F0)[0x24/4]&4)) fn_801C43EC();
 return lbl_805650F0;
}
void *fn_801C437C(){
 UnknownGenObject801C437C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B7060;
 object.unknown00=lbl_804B6FFC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C43EC(){
 fn_80066188((int)fn_801C4414);
}
void fn_801C4414(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805650F0,(int)fn_8002907C,(int)fn_80024180,(int)fn_801C4480,(int)lbl_804B05B8,20,(int)fn_801C437C,0,0,(int)lbl_80560750);
}
void *fn_801C4480(){return fn_801C4340();}
void *fn_801C44A0(void *object){
 fn_801C45DC();
 return fn_8006546C(lbl_805650F4,object);
}
void *fn_801C44D8(){
 if(!lbl_805650F4 || !(reinterpret_cast<unsigned int *>(lbl_805650F4)[0x24/4]&4)) fn_801C45DC();
 return lbl_805650F4;
}
}
#pragma pop
