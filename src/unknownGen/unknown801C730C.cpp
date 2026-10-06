#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_80035C70();
void fn_80035DA8();
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_801AA6DC();
void *fn_801AD7BC();
void fn_801B09E4();
void fn_801C7718();
extern char lbl_80472FA0[];
extern char lbl_804748A0[];
extern char lbl_80474900[];
extern char lbl_804AAFB8[];
extern char lbl_804B143C[];
extern char lbl_804B14C8[];
extern char lbl_804B39E8[];
extern char lbl_804B5434[];
extern char lbl_804B6CF4[];
extern char lbl_80560824[4];
extern char lbl_80560828[4];
extern char lbl_8056082C[4];
extern char lbl_80560830[4];
extern char lbl_80560834[8];
extern void *lbl_805621F4;
extern void *lbl_805652CC;
extern void *lbl_805652D4;
extern void *lbl_805652D8;
void *fn_801C7380();
void *fn_801C73BC();
void fn_801C7420();
void fn_801C7448();
void *fn_801C74B8();
void fn_801C74D8();
void *fn_801C758C();
void *fn_801C75C8();
void fn_801C765C();
void fn_801C7684();
void *fn_801C76F8();
}
struct UnknownGenObject801C73BC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801C75C8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C75C8(){fn_8006665C(this);}
};
struct UnknownGenObject801C75C8 : UnknownGenRoot801C75C8 {
 char unknown04[32];
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject801C75C8(){unknown00=lbl_804B5434;}
};
extern "C" {
void *fn_801C730C(void *object){
 fn_801C7420();
 return fn_8006546C(lbl_805652CC,object);
}
void *fn_801C7344(){
 if(!lbl_805652CC) lbl_805652CC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805652CC;
}
void *fn_801C7380(){
 if(!lbl_805652CC || !(reinterpret_cast<unsigned int *>(lbl_805652CC)[0x24/4]&4)) fn_801C7420();
 return lbl_805652CC;
}
void *fn_801C73BC(){
 UnknownGenObject801C73BC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80474900;
 object.unknown00=lbl_804748A0;
 object.unknown00=lbl_804B6CF4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C7420(){
 fn_80066188((int)fn_801C7448);
}
void fn_801C7448(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805652CC,(int)fn_80035DA8,(int)fn_80035C70,(int)fn_801C74B8,(int)lbl_804B143C,24,(int)fn_801C73BC,(int)fn_801C74D8,0,0);
}
void *fn_801C74B8(){return fn_801C7380();}
void fn_801C74D8(){
 void *value0=lbl_805652CC;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_80560824,1);
 fn_800659C0(value0,lbl_80560828,lbl_8056082C,lbl_80560830,value1);
}
void *fn_801C7540(){
 char *data=lbl_804AAFB8;
 if(!lbl_805652D4) lbl_805652D4=fn_800635C8(data+0x6500,data+0x64E0,data+0x64F0,0x4);
 return lbl_805652D4;
}
void *fn_801C758C(){
 if(!lbl_805652D8 || !(reinterpret_cast<unsigned int *>(lbl_805652D8)[0x24/4]&4)) fn_801C765C();
 return lbl_805652D8;
}
void *fn_801C75C8(){
 UnknownGenObject801C75C8 object;
 object.unknown00=lbl_804B39E8;
 object.unknown00=lbl_804B5434;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801C765C(){
 fn_80066188((int)fn_801C7684);
}
void fn_801C7684(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805652D8,(int)fn_801B09E4,(int)fn_801AD7BC,(int)fn_801C76F8,(int)lbl_804B14C8,40,(int)fn_801C75C8,(int)fn_801C7718,0,(int)lbl_80560834);
}
void *fn_801C76F8(){return fn_801C758C();}
}
#pragma pop
