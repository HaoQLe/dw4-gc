#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800284EC();
void *meta_newMetaObject(void *);
void *fn_8002B558();
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void igInfo_register();
void igMemoryPool_register();
extern char igMemoryPoolContextInfo_className[];
extern char igMemoryPoolContextInfo_vtable[];
extern char igInfo_vtable[];
extern char igNamedObject_vtable[];
extern char lbl_8055D2DC[8];
extern char lbl_8055D2E4[4];
extern char lbl_8055D2E8[4];
extern char lbl_8055D2EC[4];
extern char lbl_8055D2F0[4];
extern void *igMemoryPoolContextInfo_meta;
extern void *igMemoryPool_meta;
extern void *lbl_805621F4;
void *igMemoryPoolContextInfo_getMeta();
void *igMemoryPoolContextInfo_vtableRead();
void igMemoryPoolContextInfo_registerNow();
void igMemoryPoolContextInfo_register();
void *igMemoryPoolContextInfo_getMetaCall();
void igMemoryPoolContextInfo_fieldInit();
void igMemoryPool_registerNow();
}
struct UnknownGenRoot8002BC94 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002BC94(){fn_8006665C(this);}
};
struct UnknownGenObject8002BC94_0 : UnknownGenRoot8002BC94 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8002BC94_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8002BC94_1 : UnknownGenObject8002BC94_0 {
 inline ~UnknownGenObject8002BC94_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject8002BC94 : UnknownGenObject8002BC94_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject8002BC94(){unknown00=igMemoryPoolContextInfo_vtable;}
};
extern "C" {
void *igMemoryPoolContextInfo_create(void *object){
 igMemoryPoolContextInfo_registerNow();
 return meta_createInstance(igMemoryPoolContextInfo_meta,object);
}
void *igMemoryPoolContextInfo_getMeta(){
 if(!igMemoryPoolContextInfo_meta || !(reinterpret_cast<unsigned int *>(igMemoryPoolContextInfo_meta)[0x24/4]&4)) igMemoryPoolContextInfo_registerNow();
 return igMemoryPoolContextInfo_meta;
}
void *igMemoryPoolContextInfo_vtableRead(){
 UnknownGenObject8002BC94 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igInfo_vtable;
 object.unknown00=igMemoryPoolContextInfo_vtable;
 object.unknown14.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMemoryPoolContextInfo_registerNow(){
 meta_registerNow((int)igMemoryPoolContextInfo_register);
}
void igMemoryPoolContextInfo_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igMemoryPoolContextInfo_meta,(int)igInfo_register,(int)fn_800284EC,(int)igMemoryPoolContextInfo_getMetaCall,(int)igMemoryPoolContextInfo_className,24,(int)igMemoryPoolContextInfo_vtableRead,(int)igMemoryPoolContextInfo_fieldInit,0,(int)lbl_8055D2DC);
}
void *igMemoryPoolContextInfo_getMetaCall(){return igMemoryPoolContextInfo_getMeta();}
void igMemoryPoolContextInfo_fieldInit(){
 void *value0=igMemoryPoolContextInfo_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055D2E4,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_8002B558();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 fn_800659C0(value0,lbl_8055D2E8,lbl_8055D2EC,lbl_8055D2F0,value1);
}
void *fn_8002BED0(){
 if(!igMemoryPool_meta) igMemoryPool_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMemoryPool_meta;
}
void *igMemoryPool_getMeta(){
 if(!igMemoryPool_meta || !(reinterpret_cast<unsigned int *>(igMemoryPool_meta)[0x24/4]&4)) igMemoryPool_registerNow();
 return igMemoryPool_meta;
}
void igMemoryPool_registerNow(){
 meta_registerNow((int)igMemoryPool_register);
}
}
#pragma pop
