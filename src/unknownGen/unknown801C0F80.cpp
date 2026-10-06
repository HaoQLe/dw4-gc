#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_8002907C();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80065DBC(int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_8011148C();
void fn_801AA6DC();
void fn_801BF938();
void fn_801C129C();
void fn_801E871C();
void fn_801E8744();
void *fn_801E8770();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804AF710[];
extern char lbl_804AF72C[];
extern char lbl_804AF750[];
extern char lbl_804B7244[];
extern char lbl_804B72A8[];
extern char lbl_8056066C[8];
extern void *lbl_805621F4;
extern void *lbl_80564F1C;
extern void *lbl_80564F20;
void *fn_801C1008();
void *fn_801C1044();
void fn_801C10B4();
void fn_801C10DC();
void *fn_801C1148();
void *fn_801C11A4();
void fn_801C11E0();
void fn_801C1208();
void *fn_801C127C();
}
struct UnknownGenObject801C1044_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void fn_801C0F80(){
 fn_801E8744();
 fn_80065DBC((int)fn_801E871C);
}
void *fn_801C0FAC(){return fn_801E8770();}
void *fn_801C0FCC(){
 if(!lbl_80564F1C) lbl_80564F1C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564F1C;
}
void *fn_801C1008(){
 if(!lbl_80564F1C || !(reinterpret_cast<unsigned int *>(lbl_80564F1C)[0x24/4]&4)) fn_801C10B4();
 return lbl_80564F1C;
}
void *fn_801C1044(){
 UnknownGenObject801C1044_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B72A8;
 object.unknown00=lbl_804B7244;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C10B4(){
 fn_80066188((int)fn_801C10DC);
}
void fn_801C10DC(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564F1C,(int)fn_8002907C,(int)fn_80024180,(int)fn_801C1148,(int)lbl_804AF710,20,(int)fn_801C1044,0,0,(int)lbl_8056066C);
}
void *fn_801C1148(){return fn_801C1008();}
void *fn_801C1168(){
 if(!lbl_80564F20) lbl_80564F20=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564F20;
}
void *fn_801C11A4(){
 if(!lbl_80564F20 || !(reinterpret_cast<unsigned int *>(lbl_80564F20)[0x24/4]&4)) fn_801C11E0();
 return lbl_80564F20;
}
void fn_801C11E0(){
 fn_80066188((int)fn_801C1208);
}
void fn_801C1208(){
 fn_801AA6DC();
 fn_80066204(1,(int)&lbl_80564F20,(int)fn_801BF938,(int)fn_8011148C,(int)fn_801C127C,(int)lbl_804AF750,112,0,(int)fn_801C129C,0,(int)lbl_804AF72C);
}
void *fn_801C127C(){return fn_801C11A4();}
}
#pragma pop
