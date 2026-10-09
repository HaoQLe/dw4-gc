#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_800CE2F8();
void *igGamecubeImageConvert_getMetaCall();
void *igGamecubeImage_fieldInit();
void *igGamecubeImage_getMetaCall();
void *igGamecubeIndexArray_getMetaCall();
void *igImageConvert_getMetaCall();
void igImageConvert_register();
void *igIndexArray_getMetaCall();
void igIndexArray_register();
void igMemoryImage_register();
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
void *igGamecubeIndexArray_vtableRead();
void fn_800D863C();
void igGamecubeIndexArray_register();
void *igGamecubeIndexArray_parentMeta();
void *fn_800D86DC();
void *igGamecubeImageConvert_vtableRead();
void fn_800D8784();
void igGamecubeImageConvert_register();
void *igGamecubeImageConvert_parentMeta();
void *fn_800D8824();
void *igGamecubeImage_vtableRead();
void fn_800D895C();
void igGamecubeImage_register();
void *igGamecubeImage_parentMeta();
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
void *igGamecubeIndexArray_getMeta(){
 if(!lbl_80563460 || !(reinterpret_cast<unsigned int *>(lbl_80563460)[0x24/4]&4)) fn_800D863C();
 return lbl_80563460;
}
void *igGamecubeIndexArray_vtableRead(){
 UnknownGenObject800D85A4 object;
 object.unknown00=lbl_804926E0;
 object.unknown08.value=0;
 object.unknown00=lbl_804914EC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D863C(){
 fn_80066188((int)igGamecubeIndexArray_register);
}
void igGamecubeIndexArray_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563460,(int)igIndexArray_register,(int)igGamecubeIndexArray_parentMeta,(int)igGamecubeIndexArray_getMetaCall,(int)lbl_8048ED44,28,(int)igGamecubeIndexArray_vtableRead,(int)fn_800D86DC,0,0);
}
void *igGamecubeIndexArray_parentMeta(){return lbl_80562F40;}
void *fn_800D86DC(){
 void *value0=lbl_80563460;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+64)=(void *)igIndexArray_getMetaCall;
 return value0;
}
void *igGamecubeImageConvert_getMeta(){
 if(!lbl_80563464 || !(reinterpret_cast<unsigned int *>(lbl_80563464)[0x24/4]&4)) fn_800D8784();
 return lbl_80563464;
}
void *igGamecubeImageConvert_vtableRead(){
 UnknownGenObject800D872C_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804930AC;
 object.unknown00=lbl_80492C48;
 object.unknown00=lbl_8049168C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D8784(){
 fn_80066188((int)igGamecubeImageConvert_register);
}
void igGamecubeImageConvert_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_80563464,(int)igImageConvert_register,(int)igGamecubeImageConvert_parentMeta,(int)igGamecubeImageConvert_getMetaCall,(int)lbl_8048ED5C,8,(int)igGamecubeImageConvert_vtableRead,(int)fn_800D8824,0,0);
}
void *igGamecubeImageConvert_parentMeta(){return lbl_80562F5C;}
void *fn_800D8824(){
 void *value0=lbl_80563464;
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value0)+64)=(void *)igImageConvert_getMetaCall;
 return value0;
}
void *igGamecubeImage_getMeta(){
 if(!lbl_8056346C || !(reinterpret_cast<unsigned int *>(lbl_8056346C)[0x24/4]&4)) fn_800D895C();
 return lbl_8056346C;
}
void *igGamecubeImage_vtableRead(){
 UnknownGenObject800D8874 object;
 object.unknown00=lbl_804927D4;
 object.unknown44.value=0;
 object.unknown58.value=0;
 object.unknown00=lbl_80492B34;
 object.unknown00=lbl_80491718;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_800D895C(){
 fn_80066188((int)igGamecubeImage_register);
}
void igGamecubeImage_register(){
 fn_800CE2F8();
 fn_80066204(0,(int)&lbl_8056346C,(int)igMemoryImage_register,(int)igGamecubeImage_parentMeta,(int)igGamecubeImage_getMetaCall,(int)lbl_8048ED8C,216,(int)igGamecubeImage_vtableRead,(int)igGamecubeImage_fieldInit,0,0);
}
void *igGamecubeImage_parentMeta(){return lbl_80562F70;}
}
#pragma pop
