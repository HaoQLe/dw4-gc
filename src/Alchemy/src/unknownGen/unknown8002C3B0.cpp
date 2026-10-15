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
extern char lbl_8055D2FC[8];
extern char lbl_8055D304[8];
extern char lbl_8055D30C[8];
extern char lbl_8055D314[8];
extern char lbl_8055D31C[8];
extern char lbl_8055D324[8];
extern void *igMemoryFileEntryList_meta;
extern void *igMemoryFileEntry_meta;
extern void *igMemoryDirEntry_meta;
void *igMemoryFileEntryList_getMeta();
void *igMemoryFileEntryList_vtableRead();
void igMemoryFileEntryList_registerNow();
void igMemoryFileEntryList_register();
void *igMemoryFileEntryList_getMetaCall();
void *igMemoryFileEntry_getMeta();
void *igMemoryFileEntry_vtableRead();
void igMemoryFileEntry_registerNow();
void igMemoryFileEntry_register();
void *igMemoryFileEntry_getMetaCall();
void igMemoryFileEntry_fieldInit();
void *igMemoryDirEntry_getMeta();
void *igMemoryDirEntry_vtableRead();
void igMemoryDirEntry_registerNow();
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
void *igFile_getMetaCall(){return igFile_getMeta();}
void *fn_8002C3D0(){return fn_800584BC();}
void *fn_8002C3F0(){return fn_800584E8();}
void *igMemoryFileEntryList_create(void *object){
 igMemoryFileEntryList_registerNow();
 return meta_createInstance(igMemoryFileEntryList_meta,object);
}
void *igMemoryFileEntryList_getMeta(){
 if(!igMemoryFileEntryList_meta || !(reinterpret_cast<unsigned int *>(igMemoryFileEntryList_meta)[0x24/4]&4)) igMemoryFileEntryList_registerNow();
 return igMemoryFileEntryList_meta;
}
void *igMemoryFileEntryList_vtableRead(){
 UnknownGenObject8002C484_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_80475F5C;
 object.unknown00=igMemoryFileEntryList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMemoryFileEntryList_registerNow(){
 meta_registerNow((int)igMemoryFileEntryList_register);
}
void igMemoryFileEntryList_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igMemoryFileEntryList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igMemoryFileEntryList_getMetaCall,(int)igMemoryFileEntryList_className,20,(int)igMemoryFileEntryList_vtableRead,0,0,(int)lbl_8055D2FC);
}
void *igMemoryFileEntryList_getMetaCall(){return igMemoryFileEntryList_getMeta();}
void *igMemoryFileEntry_create(void *object){
 igMemoryFileEntry_registerNow();
 return meta_createInstance(igMemoryFileEntry_meta,object);
}
void *igMemoryFileEntry_getMeta(){
 if(!igMemoryFileEntry_meta || !(reinterpret_cast<unsigned int *>(igMemoryFileEntry_meta)[0x24/4]&4)) igMemoryFileEntry_registerNow();
 return igMemoryFileEntry_meta;
}
void *igMemoryFileEntry_vtableRead(){
 UnknownGenObject8002C61C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igMemoryFileEntry_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMemoryFileEntry_registerNow(){
 meta_registerNow((int)igMemoryFileEntry_register);
}
void igMemoryFileEntry_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igMemoryFileEntry_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)igMemoryFileEntry_getMetaCall,(int)igMemoryFileEntry_className,20,(int)igMemoryFileEntry_vtableRead,(int)igMemoryFileEntry_fieldInit,0,0);
}
void *igMemoryFileEntry_getMetaCall(){return igMemoryFileEntry_getMeta();}
void igMemoryFileEntry_fieldInit(){
 void *value0=igMemoryFileEntry_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055D304,2);
 meta_setupFields(value0,lbl_8055D30C,lbl_8055D314,lbl_8055D31C,value1);
}
void *igMemoryDirEntry_create(void *object){
 igMemoryDirEntry_registerNow();
 return meta_createInstance(igMemoryDirEntry_meta,object);
}
void *igMemoryDirEntry_getMeta(){
 if(!igMemoryDirEntry_meta || !(reinterpret_cast<unsigned int *>(igMemoryDirEntry_meta)[0x24/4]&4)) igMemoryDirEntry_registerNow();
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
void igMemoryDirEntry_registerNow(){
 meta_registerNow((int)igMemoryDirEntry_register);
}
void igMemoryDirEntry_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igMemoryDirEntry_meta,(int)igDirEntry_register,(int)fn_8002942C,(int)igMemoryDirEntry_getMetaCall,(int)igMemoryDirEntry_className,56,(int)igMemoryDirEntry_vtableRead,(int)igMemoryDirEntry_fieldInit,0,(int)lbl_8055D324);
}
void *igMemoryDirEntry_getMetaCall(){return igMemoryDirEntry_getMeta();}
}
#pragma pop
