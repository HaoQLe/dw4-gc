#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
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
extern char lbl_8055D38C[8];
extern char lbl_8055D394[4];
extern char lbl_8055D398[4];
extern char lbl_8055D39C[4];
extern char lbl_8055D3A0[4];
extern void *igLibraryLoader_meta;
extern void *igLibraryList_meta;
extern void *igLibrary_meta;
extern void *lbl_805621F4;
void *igLibraryLoader_getMeta();
void igLibraryLoader_registerNow();
void igLibraryLoader_register();
void *igLibraryLoader_getMetaCall();
void *igLibraryList_getMeta();
void *igLibraryList_vtableRead();
void igLibraryList_registerNow();
void igLibraryList_register();
void *igLibraryList_getMetaCall();
void *igLibrary_getMeta();
void igLibrary_registerNow();
void igLibrary_register();
void *igLibrary_getMetaCall();
void igLibrary_fieldInit();
}
struct UnknownGenObject8002D8D0_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *fn_8002D734(){
 if(!igLibraryLoader_meta) igLibraryLoader_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igLibraryLoader_meta;
}
void *igLibraryLoader_getMeta(){
 if(!igLibraryLoader_meta || !(reinterpret_cast<unsigned int *>(igLibraryLoader_meta)[0x24/4]&4)) igLibraryLoader_registerNow();
 return igLibraryLoader_meta;
}
void igLibraryLoader_registerNow(){
 meta_registerNow((int)igLibraryLoader_register);
}
void igLibraryLoader_register(){
 fn_80021B94();
 meta_registerClass(1,(int)&igLibraryLoader_meta,(int)igObject_register,(int)fn_800237D0,(int)igLibraryLoader_getMetaCall,(int)igLibraryLoader_className,8,0,0,0,0);
}
void *igLibraryLoader_getMetaCall(){return igLibraryLoader_getMeta();}
void *fn_8002D858(){
 if(!igLibraryList_meta) igLibraryList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igLibraryList_meta;
}
void *igLibraryList_getMeta(){
 if(!igLibraryList_meta || !(reinterpret_cast<unsigned int *>(igLibraryList_meta)[0x24/4]&4)) igLibraryList_registerNow();
 return igLibraryList_meta;
}
void *igLibraryList_vtableRead(){
 UnknownGenObject8002D8D0_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_80475D70;
 object.unknown00=igLibraryList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igLibraryList_registerNow(){
 meta_registerNow((int)igLibraryList_register);
}
void igLibraryList_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igLibraryList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igLibraryList_getMetaCall,(int)igLibraryList_className,20,(int)igLibraryList_vtableRead,0,0,(int)lbl_8055D38C);
}
void *igLibraryList_getMetaCall(){return igLibraryList_getMeta();}
void *igLibrary_getMeta(){
 if(!igLibrary_meta || !(reinterpret_cast<unsigned int *>(igLibrary_meta)[0x24/4]&4)) igLibrary_registerNow();
 return igLibrary_meta;
}
void igLibrary_registerNow(){
 meta_registerNow((int)igLibrary_register);
}
void igLibrary_register(){
 fn_80021B94();
 meta_registerClass(1,(int)&igLibrary_meta,(int)igObject_register,(int)fn_800237D0,(int)igLibrary_getMetaCall,(int)igLibrary_className,12,0,(int)igLibrary_fieldInit,0,0);
}
void *igLibrary_getMetaCall(){return igLibrary_getMeta();}
void igLibrary_fieldInit(){
 void *value0=igLibrary_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055D394,1);
 fn_800659C0(value0,lbl_8055D398,lbl_8055D39C,lbl_8055D3A0,value1);
}
}
#pragma pop
