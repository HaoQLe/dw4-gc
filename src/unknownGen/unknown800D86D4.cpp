#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
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
extern char igGamecubeIndexArray_className[];
extern char igGamecubeImageConvert_className[];
extern char igGamecubeImage_className[];
extern char igGamecubeIndexArray_vtable[];
extern char igGamecubeImageConvert_vtable[];
extern char igGamecubeImage_vtable[];
extern char lbl_804926E0[];
extern char lbl_804927D4[];
extern char lbl_80492B34[];
extern char lbl_80492C48[];
extern char lbl_804930AC[];
extern void *igIndexArray_meta;
extern void *igImageConvert_meta;
extern void *igMemoryImage_meta;
extern void *igGamecubeIndexArray_meta;
extern void *igGamecubeImageConvert_meta;
extern void *igGamecubeImage_meta;
void *igGamecubeIndexArray_vtableRead();
void igGamecubeIndexArray_arkRegister();
void igGamecubeIndexArray_register();
void *igGamecubeIndexArray_parentMeta();
void *fn_800D86DC();
void *igGamecubeImageConvert_vtableRead();
void igGamecubeImageConvert_arkRegister();
void igGamecubeImageConvert_register();
void *igGamecubeImageConvert_parentMeta();
void *fn_800D8824();
void *igGamecubeImage_vtableRead();
void igGamecubeImage_arkRegister();
void igGamecubeImage_register();
void *igGamecubeImage_parentMeta();
}
struct UnknownGenRoot800D85A4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D85A4(){igObject_construct(this);}
};
struct UnknownGenObject800D85A4_0 : UnknownGenRoot800D85A4 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject800D85A4_0(){unknown00=lbl_804926E0;}
};
struct UnknownGenObject800D85A4 : UnknownGenObject800D85A4_0 {
 char unknown0C[20];
 inline ~UnknownGenObject800D85A4(){unknown00=igGamecubeIndexArray_vtable;}
};
struct UnknownGenObject800D872C_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot800D8874 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D8874(){igObject_construct(this);}
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
 inline ~UnknownGenObject800D8874(){unknown00=igGamecubeImage_vtable;}
};
extern "C" {
void *igGamecubeIndexArray_parentMeta(){return igIndexArray_meta;}
void *fn_800D86DC(){
 void *value0=igGamecubeIndexArray_meta;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_writeProxy=(void *)(void *)igIndexArray_getMetaCall;
 return value0;
}
}
#pragma pop
