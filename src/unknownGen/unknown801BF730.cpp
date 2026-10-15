#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void *fn_801B0404();
void *fn_801B47CC();
void *fn_801B7354();
void *fn_801BBBF0();
void igGraphPath_fieldInit();
void *igHashedUserInfo_getMeta();
void igHashedUserInfo_vtableRead();
void igNode_register();
void igObjectList_register();
void igObject_register();
void igUserInfo_register();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igHashedUserInfo_className[];
extern char igGraphPathList_className[];
extern char igGraphPath_className[];
extern char igNode_vtable[];
extern char igGroup_vtable[];
extern char igGraphPath_vtable[];
extern char igGraphPathList_vtable[];
extern char lbl_804B7494[];
extern char igHashedUserInfo_dependencies[8];
extern char igHashedUserInfo_fieldTypes[4];
extern char igHashedUserInfo_fieldNames[4];
extern char igHashedUserInfo_fieldStorage[4];
extern char igHashedUserInfo_fieldOffsets[4];
extern char igGroup_dependencies[8];
extern char lbl_80560610[8];
extern char igGroup_fieldTypes[4];
extern char igGroup_fieldNames[4];
extern char igGroup_fieldStorage[4];
extern char igGroup_fieldOffsets[4];
extern char igGraphPathList_dependencies[8];
extern char igGraphPath_dependencies[8];
extern void *lbl_805621F4;
extern void *igHashedUserInfo_meta;
extern void *igGroup_meta;
extern void *igGraphPathList_meta;
extern void *igGraphPath_meta;
void igHashedUserInfo_register();
void *igHashedUserInfo_getMetaCall();
void igHashedUserInfo_fieldInit();
void *igGroup_getMeta();
void *igGroup_vtableRead();
void igGroup_arkRegister();
void igGroup_register();
void *igGroup_getMetaCall();
void igGroup_fieldInit();
void *igGraphPathList_getMeta();
void *igGraphPathList_vtableRead();
void igGraphPathList_arkRegister();
void igGraphPathList_register();
void *igGraphPathList_getMetaCall();
void *igGraphPath_getMeta();
void *igGraphPath_vtableRead();
void igGraphPath_arkRegister();
void igGraphPath_register();
void *igGraphPath_getMetaCall();
}
struct UnknownGenRoot801BF7A8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BF7A8(){igObject_construct(this);}
};
struct UnknownGenObject801BF7A8_0 : UnknownGenRoot801BF7A8 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801BF7A8_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801BF7A8_1 : UnknownGenObject801BF7A8_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801BF7A8_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject801BF7A8 : UnknownGenObject801BF7A8_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 char unknown20[8];
 inline ~UnknownGenObject801BF7A8(){unknown00=igGroup_vtable;}
};
struct UnknownGenObject801BFB18_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801BFCEC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801BFCEC(){igObject_construct(this);}
};
struct UnknownGenObject801BFCEC : UnknownGenRoot801BFCEC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[20];
 inline ~UnknownGenObject801BFCEC(){unknown00=igGraphPath_vtable;}
};
extern "C" {
void *fn_801BF730(){
 if(!igGroup_meta) igGroup_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igGroup_meta;
}
}
#pragma pop
