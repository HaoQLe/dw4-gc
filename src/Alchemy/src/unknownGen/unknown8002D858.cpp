#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igObjectList_register();
void igObject_register();
extern char igLibraryLoader_className[];
extern char igLibraryList_className[];
extern char igLibrary_className[];
extern char igDataList_vtable[];
extern char igLibraryList_vtable[];
extern char lbl_80475D70[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igLibraryList_dependencies[8];
extern char igLibrary_fieldTypes[4];
extern char igLibrary_fieldNames[4];
extern char igLibrary_fieldStorage[4];
extern char igLibrary_fieldOffsets[4];
extern void *igLibraryLoader_meta;
extern void *igLibraryList_meta;
extern void *igLibrary_meta;
extern void *lbl_805621F4;
void *igLibraryLoader_getMeta();
void igLibraryLoader_arkRegister();
void igLibraryLoader_register();
void *igLibraryLoader_getMetaCall();
void *igLibraryList_getMeta();
void *igLibraryList_vtableRead();
void igLibraryList_arkRegister();
void igLibraryList_register();
void *igLibraryList_getMetaCall();
void *igLibrary_getMeta();
void igLibrary_arkRegister();
void igLibrary_register();
void *igLibrary_getMetaCall();
void igLibrary_fieldInit();
}
struct UnknownGenObject8002D8D0_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_8002D858(){
 if(!igLibraryList_meta) igLibraryList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igLibraryList_meta;
}
}
#pragma pop
