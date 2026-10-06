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
void fn_801ADA38();
void *fn_801AF130();
extern char lbl_80472FA0[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_804B1AB0[];
extern char lbl_804B1AC8[];
extern char lbl_804B6694[];
extern char lbl_804B66F8[];
extern char lbl_804B675C[];
extern char lbl_804B67C0[];
extern char lbl_804B9898[];
extern char lbl_805608C0[8];
extern char lbl_805608C8[8];
extern void *lbl_805621F4;
extern void *lbl_805653A8;
extern void *lbl_805653AC;
void *fn_801C94F8();
void *fn_801C9534();
void fn_801C95B0();
void fn_801C95D8();
void *fn_801C9644();
void *fn_801C96A0();
void *fn_801C96DC();
void fn_801C974C();
void fn_801C9774();
void *fn_801C97E0();
}
struct UnknownGenObject801C9534_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenObject801C96DC_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_801C94C0(void *object){
 fn_801C95B0();
 return fn_8006546C(lbl_805653A8,object);
}
void *fn_801C94F8(){
 if(!lbl_805653A8 || !(reinterpret_cast<unsigned int *>(lbl_805653A8)[0x24/4]&4)) fn_801C95B0();
 return lbl_805653A8;
}
void *fn_801C9534(){
 UnknownGenObject801C9534_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B9898;
 object.unknown00=lbl_804B67C0;
 object.unknown00=lbl_804B675C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C95B0(){
 fn_80066188((int)fn_801C95D8);
}
void fn_801C95D8(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805653A8,(int)fn_801ADA38,(int)fn_801AF130,(int)fn_801C9644,(int)lbl_804B1AB0,32,(int)fn_801C9534,0,0,(int)lbl_805608C0);
}
void *fn_801C9644(){return fn_801C94F8();}
void *fn_801C9664(){
 if(!lbl_805653AC) lbl_805653AC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805653AC;
}
void *fn_801C96A0(){
 if(!lbl_805653AC || !(reinterpret_cast<unsigned int *>(lbl_805653AC)[0x24/4]&4)) fn_801C974C();
 return lbl_805653AC;
}
void *fn_801C96DC(){
 UnknownGenObject801C96DC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_804B66F8;
 object.unknown00=lbl_804B6694;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C974C(){
 fn_80066188((int)fn_801C9774);
}
void fn_801C9774(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805653AC,(int)fn_8002907C,(int)fn_80024180,(int)fn_801C97E0,(int)lbl_804B1AC8,20,(int)fn_801C96DC,0,0,(int)lbl_805608C8);
}
void *fn_801C97E0(){return fn_801C96A0();}
}
#pragma pop
