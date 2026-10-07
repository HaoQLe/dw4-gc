#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void fn_800D1B08();
void *fn_800D1B78();
void *fn_800D1C9C();
void fn_800D1E48();
void *fn_800D1EB4();
void *fn_800D1EE8();
void fn_800D2268();
void *fn_800D26A4();
void *fn_800D89FC();
extern char lbl_8048ED44[];
extern char lbl_8048ED5C[];
extern char lbl_8048ED8C[];
extern char lbl_804914EC[];
extern char lbl_8049168C[];
extern char lbl_80491718[];
extern char lbl_804926E0[];
extern char lbl_804927D4[];
extern char lbl_80492B34[];
extern char lbl_80492C48[];
extern char lbl_804930AC[];
extern void *lbl_80562F40;
extern void *lbl_80562F5C;
extern void *lbl_80562F70;
extern void *lbl_80563460;
extern void *lbl_80563464;
extern void *lbl_8056346C;
void *fn_800D85A4();
void fn_800D863C();
void fn_800D8664();
void *fn_800D86D4();
void *fn_800D86DC();
void *fn_800D872C();
void fn_800D8784();
void fn_800D87AC();
void *fn_800D881C();
void *fn_800D8824();
void *fn_800D8874();
void fn_800D895C();
void fn_800D8984();
void *fn_800D89F4();
}
struct UnknownGenRoot800D85A4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D85A4(){fn_8006665C(this);}
};
struct UnknownGenObject800D85A4_0 : UnknownGenRoot800D85A4 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject800D85A4_0(){unknown00=lbl_804926E0;}
};
struct UnknownGenObject800D85A4 : UnknownGenObject800D85A4_0 {
 char unknown0C[20];
 inline ~UnknownGenObject800D85A4(){unknown00=lbl_804914EC;}
};
struct UnknownGenObject800D872C_0 {
 void *unknown00;
 char unknown04[4];
};
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
void *fn_800D8568(){
 if(!lbl_80563460 || !(reinterpret_cast<unsigned int *>(lbl_80563460)[0x24/4]&4)) fn_800D863C();
 return lbl_80563460;
}
void *fn_800D85A4(){
 UnknownGenObject800D85A4 object;
 object.unknown00=lbl_804926E0;
 object.unknown08.value=0;
 object.unknown00=lbl_804914EC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D863C(){
 fn_80066188((int)fn_800D8664);
}
void fn_800D8664(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563460,(int)fn_800D1B08,(int)fn_800D86D4,(int)fn_800D1C9C,(int)lbl_8048ED44,28,(int)fn_800D85A4,(int)fn_800D86DC,0,0);
}
void *fn_800D86D4(){return lbl_80562F40;}
void *fn_800D86DC(){
 void *value0=lbl_80563460;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+64)=(void *)fn_800D1B78;
 return value0;
}
void *fn_800D86F0(){
 if(!lbl_80563464 || !(reinterpret_cast<unsigned int *>(lbl_80563464)[0x24/4]&4)) fn_800D8784();
 return lbl_80563464;
}
void *fn_800D872C(){
 UnknownGenObject800D872C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804930AC;
 object.unknown00=lbl_80492C48;
 object.unknown00=lbl_8049168C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D8784(){
 fn_80066188((int)fn_800D87AC);
}
void fn_800D87AC(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563464,(int)fn_800D1E48,(int)fn_800D881C,(int)fn_800D1EE8,(int)lbl_8048ED5C,8,(int)fn_800D872C,(int)fn_800D8824,0,0);
}
void *fn_800D881C(){return lbl_80562F5C;}
void *fn_800D8824(){
 void *value0=lbl_80563464;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+64)=(void *)fn_800D1EB4;
 return value0;
}
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
