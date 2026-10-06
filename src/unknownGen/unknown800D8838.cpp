#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800D2268();
void *fn_800D26A4();
void fn_800D89FC();
extern char lbl_8048ED8C[];
extern char lbl_80491718[];
extern char lbl_804927D4[];
extern char lbl_80492B34[];
extern void *lbl_80562F70;
extern void *lbl_8056346C;
void *fn_800D8874();
void fn_800D895C();
void fn_800D8984();
void *fn_800D89F4();
}
struct UnknownGenRoot800D8874 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D8874(){fn_8006665C(this);}
};
struct UnknownGenObject800D8874_0 : UnknownGenRoot800D8874 {
 char unknown04[64];
 UnknownGenRefMember unknown44;
 char unknown48[16];
 UnknownGenString unknown58;
 inline ~UnknownGenObject800D8874_0(){unknown00=lbl_804927D4;}
};
struct UnknownGenObject800D8874_1 : UnknownGenObject800D8874_0 {
 inline ~UnknownGenObject800D8874_1(){unknown00=lbl_80492B34;}
};
struct UnknownGenObject800D8874 : UnknownGenObject800D8874_1 {
 char unknown5C[132];
 inline ~UnknownGenObject800D8874(){unknown00=lbl_80491718;}
};
extern "C" {
void *fn_800D8838(){
 if(!lbl_8056346C || !(reinterpret_cast<unsigned int *>(lbl_8056346C)[0x24/4]&4)) fn_800D895C();
 return lbl_8056346C;
}
void *fn_800D8874(){
 UnknownGenObject800D8874 object;
 object.unknown00=lbl_804927D4;
 object.unknown44.value=0;
 object.unknown58.value=0;
 object.unknown00=lbl_80492B34;
 object.unknown00=lbl_80491718;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D895C(){
 fn_80066188((int)fn_800D8984);
}
void fn_800D8984(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_8056346C,(int)fn_800D2268,(int)fn_800D89F4,(int)fn_800D26A4,(int)lbl_8048ED8C,216,(int)fn_800D8874,(int)fn_800D89FC,0,0);
}
void *fn_800D89F4(){return lbl_80562F70;}
}
#pragma pop
