#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80038F58();
void fn_80058ABC(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igMemoryPool_register();
void igStackMemoryPool_fieldInit();
extern char igStackMemoryPool_className[];
extern char igStackMemoryPool_vtable[];
extern char igStackMemoryPool_dependencies[8];
extern void *igStackMemoryPool_meta;
void *igStackMemoryPool_getMeta();
void *igStackMemoryPool_vtableRead();
void igStackMemoryPool_arkRegister();
void igStackMemoryPool_register();
void *igStackMemoryPool_getMetaCall();
}
struct UnknownGenRoot80039994 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80039994(){fn_80058ABC(this);}
};
struct UnknownGenObject80039994 : UnknownGenRoot80039994 {
 char unknown04[144];
 UnknownGenRefMember unknown94;
 char unknown98[8];
 inline ~UnknownGenObject80039994(){unknown00=igStackMemoryPool_vtable;}
};
extern "C" {
void *igStackMemoryPool_create(void *object){
 igStackMemoryPool_arkRegister();
 return meta_createInstance(igStackMemoryPool_meta,object);
}
void *igStackMemoryPool_getMeta(){
 if(!igStackMemoryPool_meta || !(reinterpret_cast<unsigned int *>(igStackMemoryPool_meta)[0x24/4]&4)) igStackMemoryPool_arkRegister();
 return igStackMemoryPool_meta;
}
void *igStackMemoryPool_vtableRead(){
 UnknownGenObject80039994 object;
 object.unknown00=igStackMemoryPool_vtable;
 object.unknown94.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igStackMemoryPool_arkRegister(){
 meta_registerNow((int)igStackMemoryPool_register);
}
void igStackMemoryPool_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igStackMemoryPool_meta,(int)igMemoryPool_register,(int)fn_80038F58,(int)igStackMemoryPool_getMetaCall,(int)igStackMemoryPool_className,152,(int)igStackMemoryPool_vtableRead,(int)igStackMemoryPool_fieldInit,0,(int)igStackMemoryPool_dependencies);
}
void *igStackMemoryPool_getMetaCall(){return igStackMemoryPool_getMeta();}
}
#pragma pop
