#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800ABC8C();
void fn_800AC034();
void *fn_800AC294();
void fn_800B2970();
extern char lbl_80478CE8[];
extern char lbl_80478D10[];
extern char lbl_80478D24[];
extern char lbl_8047B964[];
extern char lbl_8047B9E4[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char lbl_8055E2A0[8];
extern char lbl_8055E2A8[4];
extern char lbl_8055E2AC[4];
extern char lbl_8055E2B0[4];
extern char lbl_8055E2B4[4];
extern void *lbl_805621F4;
extern void *lbl_805626B8;
extern void *lbl_805626C0;
void *fn_800B2460();
void *fn_800B249C();
void fn_800B253C();
void fn_800B2564();
void *fn_800B25D8();
void fn_800B25F8();
void *fn_800B2678();
void *fn_800B26B4();
void *fn_800B26F0();
void fn_800B28B0();
void fn_800B28D8();
void *fn_800B2950();
}
struct UnknownGenRoot800B249C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B249C(){fn_8006665C(this);}
};
struct UnknownGenObject800B249C : UnknownGenRoot800B249C {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject800B249C(){unknown00=lbl_8047B964;}
};
struct UnknownGenRoot800B26F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B26F0(){fn_8006665C(this);}
};
struct UnknownGenObject800B26F0 : UnknownGenRoot800B26F0 {
 char unknown04[24];
 UnknownGenString unknown1C;
 UnknownGenString unknown20;
 UnknownGenString unknown24;
 UnknownGenRefMember unknown28;
 UnknownGenRefMember unknown2C;
 UnknownGenRefMember unknown30;
 char unknown34[12];
 inline ~UnknownGenObject800B26F0(){unknown00=lbl_8047B9E4;}
};
extern "C" {
void *fn_800B2460(){
 if(!lbl_805626B8 || !(reinterpret_cast<unsigned int *>(lbl_805626B8)[0x24/4]&4)) fn_800B253C();
 return lbl_805626B8;
}
void *fn_800B249C(){
 UnknownGenObject800B249C object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B964;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B253C(){
 fn_80066188((int)fn_800B2564);
}
void fn_800B2564(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805626B8,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B25D8,(int)lbl_80478CE8,16,(int)fn_800B249C,(int)fn_800B25F8,0,(int)lbl_8055E2A0);
}
void *fn_800B25D8(){return fn_800B2460();}
void fn_800B25F8(){
 void *value0=lbl_805626B8;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055E2A8,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_800B2678();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_8055E2AC,lbl_8055E2B0,lbl_8055E2B4,value1);
}
void *fn_800B2678(){
 if(!lbl_805626C0) lbl_805626C0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805626C0;
}
void *fn_800B26B4(){
 if(!lbl_805626C0 || !(reinterpret_cast<unsigned int *>(lbl_805626C0)[0x24/4]&4)) fn_800B28B0();
 return lbl_805626C0;
}
void *fn_800B26F0(){
 UnknownGenObject800B26F0 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=lbl_8047B9E4;
 object.unknown1C.value=0;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 object.unknown30.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800B28B0(){
 fn_80066188((int)fn_800B28D8);
}
void fn_800B28D8(){
 fn_800ABC8C();
 fn_80066204(0,(int)&lbl_805626C0,(int)fn_800AC034,(int)fn_800AC294,(int)fn_800B2950,(int)lbl_80478D24,52,(int)fn_800B26F0,(int)fn_800B2970,0,(int)lbl_80478D10);
}
void *fn_800B2950(){return fn_800B26B4();}
}
#pragma pop
