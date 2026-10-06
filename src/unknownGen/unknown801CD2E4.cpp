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
void fn_801CD5D4();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B2924[];
extern char lbl_804B5A34[];
extern char lbl_804B5A98[];
extern char lbl_80560A38[8];
extern void *lbl_805621F4;
extern void *lbl_8056556C;
extern void *lbl_80565570;
void *fn_801CD320();
void *fn_801CD35C();
void fn_801CD3CC();
void fn_801CD3F4();
void *fn_801CD460();
}
struct UnknownGenObject801CD35C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801CD2E4(){
 if(!lbl_8056556C) lbl_8056556C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8056556C;
}
void *fn_801CD320(){
 if(!lbl_8056556C || !(reinterpret_cast<unsigned int *>(lbl_8056556C)[0x24/4]&4)) fn_801CD3CC();
 return lbl_8056556C;
}
void *fn_801CD35C(){
 UnknownGenObject801CD35C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B5A98;
 object.unknown00=lbl_804B5A34;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801CD3CC(){
 fn_80066188((int)fn_801CD3F4);
}
void fn_801CD3F4(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056556C,(int)fn_8002907C,(int)fn_80024180,(int)fn_801CD460,(int)lbl_804B2924,20,(int)fn_801CD35C,0,0,(int)lbl_80560A38);
}
void *fn_801CD460(){return fn_801CD320();}
void *fn_801CD480(void *object){
 fn_801CD5D4();
 return fn_8006546C(lbl_80565570,object);
}
void *fn_801CD4B8(){
 if(!lbl_80565570 || !(reinterpret_cast<unsigned int *>(lbl_80565570)[0x24/4]&4)) fn_801CD5D4();
 return lbl_80565570;
}
}
#pragma pop
