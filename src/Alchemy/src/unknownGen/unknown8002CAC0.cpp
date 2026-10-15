#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igMemoryDictionary_fieldInit();
void igObject_register();
extern char igMemoryDictionary_className[];
extern char igMemoryDictionary_vtable[];
extern char lbl_8055D32C[8];
extern void *igMemoryDictionary_meta;
void *igMemoryDictionary_getMeta();
void *igMemoryDictionary_vtableRead();
void igMemoryDictionary_registerNow();
void igMemoryDictionary_register();
void *igMemoryDictionary_getMetaCall();
}
struct UnknownGenRoot8002CB34 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002CB34(){igObject_construct(this);}
};
struct UnknownGenObject8002CB34 : UnknownGenRoot8002CB34 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject8002CB34(){unknown00=igMemoryDictionary_vtable;}
};
extern "C" {
void *igMemoryDictionary_create(void *object){
 igMemoryDictionary_registerNow();
 return meta_createInstance(igMemoryDictionary_meta,object);
}
void *igMemoryDictionary_getMeta(){
 if(!igMemoryDictionary_meta || !(reinterpret_cast<unsigned int *>(igMemoryDictionary_meta)[0x24/4]&4)) igMemoryDictionary_registerNow();
 return igMemoryDictionary_meta;
}
void *igMemoryDictionary_vtableRead(){
 UnknownGenObject8002CB34 object;
 object.unknown00=igMemoryDictionary_vtable;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igMemoryDictionary_registerNow(){
 meta_registerNow((int)igMemoryDictionary_register);
}
void igMemoryDictionary_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igMemoryDictionary_meta,(int)igObject_register,(int)fn_800237D0,(int)igMemoryDictionary_getMetaCall,(int)igMemoryDictionary_className,24,(int)igMemoryDictionary_vtableRead,(int)igMemoryDictionary_fieldInit,0,(int)lbl_8055D32C);
}
void *igMemoryDictionary_getMetaCall(){return igMemoryDictionary_getMeta();}
}
#pragma pop
