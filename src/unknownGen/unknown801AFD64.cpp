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
void fn_801B000C();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AC8B0[];
extern char lbl_804B925C[];
extern char lbl_804B92C0[];
extern char lbl_8056025C[8];
extern void *lbl_805621F4;
extern void *lbl_805648A4;
extern void *lbl_805648A8;
void *fn_801AFDA0();
void *fn_801AFDDC();
void fn_801AFE4C();
void fn_801AFE74();
void *fn_801AFEE0();
}
struct UnknownGenObject801AFDDC {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801AFD64(){
 if(!lbl_805648A4) lbl_805648A4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805648A4;
}
void *fn_801AFDA0(){
 if(!lbl_805648A4 || !(reinterpret_cast<unsigned int *>(lbl_805648A4)[0x24/4]&4)) fn_801AFE4C();
 return lbl_805648A4;
}
void *fn_801AFDDC(){
 UnknownGenObject801AFDDC object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B92C0;
 object.unknown00=lbl_804B925C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801AFE4C(){
 fn_80066188((int)fn_801AFE74);
}
void fn_801AFE74(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805648A4,(int)fn_8002907C,(int)fn_80024180,(int)fn_801AFEE0,(int)lbl_804AC8B0,20,(int)fn_801AFDDC,0,0,(int)lbl_8056025C);
}
void *fn_801AFEE0(){return fn_801AFDA0();}
void *fn_801AFF00(void *object){
 fn_801B000C();
 return fn_8006546C(lbl_805648A8,object);
}
void *fn_801AFF38(){
 if(!lbl_805648A8 || !(reinterpret_cast<unsigned int *>(lbl_805648A8)[0x24/4]&4)) fn_801B000C();
 return lbl_805648A8;
}
}
#pragma pop
