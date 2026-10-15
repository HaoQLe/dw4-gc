#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80023CF4();
void *fn_80024180();
void *fn_8002942C();
void *fn_800584BC();
void *fn_800584E8();
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igDirEntry_register();
void *igFile_getMeta();
void igMemoryDirEntry_fieldInit();
void igNamedObject_register();
void igObjectList_register();
extern char igMemoryFileEntryList_className[];
extern char igMemoryFileEntry_className[];
extern char igMemoryDirEntry_className[];
extern char igMemoryDirEntry_vtable[];
extern char igDirEntry_vtable[];
extern char igDataList_vtable[];
extern char igMemoryFileEntry_vtable[];
extern char igMemoryFileEntryList_vtable[];
extern char lbl_80475F5C[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igMemoryFileEntryList_dependencies[8];
extern char igMemoryFileEntry_fieldTypes[8];
extern char igMemoryFileEntry_fieldNames[8];
extern char igMemoryFileEntry_fieldStorage[8];
extern char igMemoryFileEntry_fieldOffsets[8];
extern char igMemoryDirEntry_dependencies[8];
extern void *igMemoryFileEntryList_meta;
extern void *igMemoryFileEntry_meta;
extern void *igMemoryDirEntry_meta;
void *igMemoryFileEntryList_getMeta();
void *igMemoryFileEntryList_vtableRead();
void igMemoryFileEntryList_arkRegister();
void igMemoryFileEntryList_register();
void *igMemoryFileEntryList_getMetaCall();
void *igMemoryFileEntry_getMeta();
void *igMemoryFileEntry_vtableRead();
void igMemoryFileEntry_arkRegister();
void igMemoryFileEntry_register();
void *igMemoryFileEntry_getMetaCall();
void igMemoryFileEntry_fieldInit();
void *igMemoryDirEntry_getMeta();
void *igMemoryDirEntry_vtableRead();
void igMemoryDirEntry_arkRegister();
void igMemoryDirEntry_register();
void *igMemoryDirEntry_getMetaCall();
}
struct UnknownGenObject8002C484_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8002C61C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002C61C(){igObject_construct(this);}
};
struct UnknownGenObject8002C61C_0 : UnknownGenRoot8002C61C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8002C61C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8002C61C : UnknownGenObject8002C61C_0 {
 char unknown0C[20];
 inline ~UnknownGenObject8002C61C(){unknown00=igMemoryFileEntry_vtable;}
};
struct UnknownGenRoot8002C848 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002C848(){igObject_construct(this);}
};
struct UnknownGenObject8002C848_0 : UnknownGenRoot8002C848 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8002C848_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8002C848_1 : UnknownGenObject8002C848_0 {
 inline ~UnknownGenObject8002C848_1(){unknown00=igDirEntry_vtable;}
};
struct UnknownGenObject8002C848 : UnknownGenObject8002C848_1 {
 char unknown0C[52];
 inline ~UnknownGenObject8002C848(){unknown00=igMemoryDirEntry_vtable;}
};
extern "C" {
void *igMemoryDirEntry_create(void *object){
 igMemoryDirEntry_arkRegister();
 return meta_createInstance(igMemoryDirEntry_meta,object);
}
void *igMemoryDirEntry_getMeta(){
 if(!igMemoryDirEntry_meta || !(reinterpret_cast<unsigned int *>(igMemoryDirEntry_meta)[0x24/4]&4)) igMemoryDirEntry_arkRegister();
 return igMemoryDirEntry_meta;
}
void *igMemoryDirEntry_vtableRead(){
 UnknownGenObject8002C848 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igDirEntry_vtable;
 object.unknown00=igMemoryDirEntry_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMemoryDirEntry_arkRegister(){
 meta_registerNow((int)igMemoryDirEntry_register);
}
void igMemoryDirEntry_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igMemoryDirEntry_meta,(int)igDirEntry_register,(int)fn_8002942C,(int)igMemoryDirEntry_getMetaCall,(int)igMemoryDirEntry_className,56,(int)igMemoryDirEntry_vtableRead,(int)igMemoryDirEntry_fieldInit,0,(int)igMemoryDirEntry_dependencies);
}
void *igMemoryDirEntry_getMetaCall(){return igMemoryDirEntry_getMeta();}
}
#pragma pop
