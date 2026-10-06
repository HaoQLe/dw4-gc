#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void fn_801CDB00();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B2980[];
extern char lbl_804B5910[];
extern char lbl_804B5974[];
extern char lbl_80560A48[8];
extern void *lbl_805621F4;
extern void *lbl_80565580;
extern void *lbl_80565584;
void *fn_801CD754();
void *fn_801CD790();
void fn_801CD800();
void fn_801CD828();
void *fn_801CD894();
}
struct UnknownGenObject801CD790_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801CD718(){
 if(!lbl_80565580) lbl_80565580=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80565580;
}
void *fn_801CD754(){
 if(!lbl_80565580 || !(reinterpret_cast<unsigned int *>(lbl_80565580)[0x24/4]&4)) fn_801CD800();
 return lbl_80565580;
}
void *fn_801CD790(){
 UnknownGenObject801CD790_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B5974;
 object.unknown00=lbl_804B5910;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CD800(){
 fn_80066188((int)fn_801CD828);
}
void fn_801CD828(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565580,(int)fn_8002907C,(int)fn_80024180,(int)fn_801CD894,(int)lbl_804B2980,20,(int)fn_801CD790,0,0,(int)lbl_80560A48);
}
void *fn_801CD894(){return fn_801CD754();}
void *fn_801CD8B4(void *object){
 fn_801CDB00();
 return fn_8006546C(lbl_80565584,object);
}
void *fn_801CD8EC(){
 if(!lbl_80565584 || !(reinterpret_cast<unsigned int *>(lbl_80565584)[0x24/4]&4)) fn_801CDB00();
 return lbl_80565584;
}
}
#pragma pop
