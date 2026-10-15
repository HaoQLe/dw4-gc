#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80030000();
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igElfFile_fieldInit();
void igObject_register();
extern char igProgramFile_className[];
extern char igElfFile_className[];
extern char igProgramFile_vtable[];
extern char igElfFile_vtable[];
extern char igProgramFile_dependencies[8];
extern char igProgramFile_fieldTypes[8];
extern char igProgramFile_fieldNames[8];
extern char igProgramFile_fieldStorage[8];
extern char igProgramFile_fieldOffsets[8];
extern void *igProgramFile_meta;
extern void *igElfFile_meta;
void *igProgramFile_getMeta();
void *igProgramFile_vtableRead();
void igProgramFile_arkRegister();
void igProgramFile_register();
void *igProgramFile_getMetaCall();
void igProgramFile_fieldInit();
void *igElfFile_getMeta();
void *igElfFile_vtableRead();
void igElfFile_arkRegister();
void igElfFile_register();
void *igElfFile_getMetaCall();
void *igElfFile_parentMeta();
}
struct UnknownGenRoot8003A554 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003A554(){igObject_construct(this);}
};
struct UnknownGenObject8003A554 : UnknownGenRoot8003A554 {
 char unknown04[4];
 UnknownGenString unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject8003A554(){unknown00=igProgramFile_vtable;}
};
struct UnknownGenRoot8003A7F8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8003A7F8(){igObject_construct(this);}
};
struct UnknownGenObject8003A7F8_0 : UnknownGenRoot8003A7F8 {
 char unknown04[4];
 UnknownGenString unknown08;
 UnknownGenRefMember unknown0C;
 inline ~UnknownGenObject8003A7F8_0(){unknown00=igProgramFile_vtable;}
};
struct UnknownGenObject8003A7F8 : UnknownGenObject8003A7F8_0 {
 char unknown10[96];
 inline ~UnknownGenObject8003A7F8(){unknown00=igElfFile_vtable;}
};
extern "C" {
void *igElfFile_parentMeta(){return igProgramFile_meta;}
}
#pragma pop
