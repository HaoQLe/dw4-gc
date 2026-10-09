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
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void igDirEntry_register();
void *igFile_getMeta();
void igMemoryDirEntry_fieldInit();
void igNamedObject_register();
void igObjectList_register();
extern char lbl_80465058[];
extern char lbl_80465070[];
extern char lbl_80465084[];
extern char lbl_80471F20[];
extern char lbl_80472EF4[];
extern char lbl_80472FA0[];
extern char lbl_80475E9C[];
extern char lbl_80475EF8[];
extern char lbl_80475F5C[];
extern char lbl_8047650C[];
extern char lbl_80476C7C[];
extern char lbl_80476E0C[];
extern char lbl_8055D2FC[8];
extern char lbl_8055D304[8];
extern char lbl_8055D30C[8];
extern char lbl_8055D314[8];
extern char lbl_8055D31C[8];
extern char lbl_8055D324[8];
extern void *lbl_80561904;
extern void *lbl_80561908;
extern void *lbl_80561914;
void *igMemoryFileEntryList_getMeta();
void *igMemoryFileEntryList_vtableRead();
void fn_8002C4F4();
void igMemoryFileEntryList_register();
void *igMemoryFileEntryList_getMetaCall();
void *igMemoryFileEntry_getMeta();
void *igMemoryFileEntry_vtableRead();
void fn_8002C6B4();
void igMemoryFileEntry_register();
void *igMemoryFileEntry_getMetaCall();
void igMemoryFileEntry_fieldInit();
void *igMemoryDirEntry_getMeta();
void *igMemoryDirEntry_vtableRead();
void fn_8002C8F0();
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
 inline UnknownGenRoot8002C61C(){fn_8006665C(this);}
};
struct UnknownGenObject8002C61C_0 : UnknownGenRoot8002C61C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8002C61C_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8002C61C : UnknownGenObject8002C61C_0 {
 char unknown0C[20];
 inline ~UnknownGenObject8002C61C(){unknown00=lbl_80475E9C;}
};
struct UnknownGenRoot8002C848 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002C848(){fn_8006665C(this);}
};
struct UnknownGenObject8002C848_0 : UnknownGenRoot8002C848 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8002C848_0(){unknown00=lbl_8047650C;}
};
struct UnknownGenObject8002C848_1 : UnknownGenObject8002C848_0 {
 inline ~UnknownGenObject8002C848_1(){unknown00=lbl_80472EF4;}
};
struct UnknownGenObject8002C848 : UnknownGenObject8002C848_1 {
 char unknown0C[52];
 inline ~UnknownGenObject8002C848(){unknown00=lbl_80471F20;}
};
extern "C" {
void *igFile_getMetaCall(){return igFile_getMeta();}
void *fn_8002C3D0(){return fn_800584BC();}
void *fn_8002C3F0(){return fn_800584E8();}
void *fn_8002C410(void *object){
 fn_8002C4F4();
 return fn_8006546C(lbl_80561904,object);
}
void *igMemoryFileEntryList_getMeta(){
 if(!lbl_80561904 || !(reinterpret_cast<unsigned int *>(lbl_80561904)[0x24/4]&4)) fn_8002C4F4();
 return lbl_80561904;
}
void *igMemoryFileEntryList_vtableRead(){
 UnknownGenObject8002C484_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_80472FA0;
 object.unknown00=lbl_80476E0C;
 object.unknown00=lbl_80476C7C;
 object.unknown00=lbl_80475F5C;
 object.unknown00=lbl_80475EF8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002C4F4(){
 fn_80066188((int)igMemoryFileEntryList_register);
}
void igMemoryFileEntryList_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561904,(int)igObjectList_register,(int)fn_80024180,(int)igMemoryFileEntryList_getMetaCall,(int)lbl_80465058,20,(int)igMemoryFileEntryList_vtableRead,0,0,(int)lbl_8055D2FC);
}
void *igMemoryFileEntryList_getMetaCall(){return igMemoryFileEntryList_getMeta();}
void *fn_8002C5A8(void *object){
 fn_8002C6B4();
 return fn_8006546C(lbl_80561908,object);
}
void *igMemoryFileEntry_getMeta(){
 if(!lbl_80561908 || !(reinterpret_cast<unsigned int *>(lbl_80561908)[0x24/4]&4)) fn_8002C6B4();
 return lbl_80561908;
}
void *igMemoryFileEntry_vtableRead(){
 UnknownGenObject8002C61C object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80475E9C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002C6B4(){
 fn_80066188((int)igMemoryFileEntry_register);
}
void igMemoryFileEntry_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561908,(int)igNamedObject_register,(int)fn_80023CF4,(int)igMemoryFileEntry_getMetaCall,(int)lbl_80465070,20,(int)igMemoryFileEntry_vtableRead,(int)igMemoryFileEntry_fieldInit,0,0);
}
void *igMemoryFileEntry_getMetaCall(){return igMemoryFileEntry_getMeta();}
void igMemoryFileEntry_fieldInit(){
 void *value0=lbl_80561908;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055D304,2);
 fn_800659C0(value0,lbl_8055D30C,lbl_8055D314,lbl_8055D31C,value1);
}
void *fn_8002C7D4(void *object){
 fn_8002C8F0();
 return fn_8006546C(lbl_80561914,object);
}
void *igMemoryDirEntry_getMeta(){
 if(!lbl_80561914 || !(reinterpret_cast<unsigned int *>(lbl_80561914)[0x24/4]&4)) fn_8002C8F0();
 return lbl_80561914;
}
void *igMemoryDirEntry_vtableRead(){
 UnknownGenObject8002C848 object;
 object.unknown00=lbl_8047650C;
 object.unknown08.value=0;
 object.unknown00=lbl_80472EF4;
 object.unknown00=lbl_80471F20;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8002C8F0(){
 fn_80066188((int)igMemoryDirEntry_register);
}
void igMemoryDirEntry_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561914,(int)igDirEntry_register,(int)fn_8002942C,(int)igMemoryDirEntry_getMetaCall,(int)lbl_80465084,56,(int)igMemoryDirEntry_vtableRead,(int)igMemoryDirEntry_fieldInit,0,(int)lbl_8055D324);
}
void *igMemoryDirEntry_getMetaCall(){return igMemoryDirEntry_getMeta();}
}
#pragma pop
