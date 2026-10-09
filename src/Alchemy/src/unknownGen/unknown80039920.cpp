#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_80038F58();
void fn_80058ABC(void *);
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void igMemoryPool_register();
void igStackMemoryPool_fieldInit();
extern char lbl_80467F64[];
extern char lbl_8046F904[];
extern char lbl_8055D6B8[8];
extern void *lbl_80561F24;
void *igStackMemoryPool_getMeta();
void *igStackMemoryPool_vtableRead();
void fn_80039A1C();
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
 inline ~UnknownGenObject80039994(){unknown00=lbl_8046F904;}
};
extern "C" {
void *fn_80039920(void *object){
 fn_80039A1C();
 return fn_8006546C(lbl_80561F24,object);
}
void *igStackMemoryPool_getMeta(){
 if(!lbl_80561F24 || !(reinterpret_cast<unsigned int *>(lbl_80561F24)[0x24/4]&4)) fn_80039A1C();
 return lbl_80561F24;
}
void *igStackMemoryPool_vtableRead(){
 UnknownGenObject80039994 object;
 object.unknown00=lbl_8046F904;
 object.unknown94.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80039A1C(){
 fn_80066188((int)igStackMemoryPool_register);
}
void igStackMemoryPool_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561F24,(int)igMemoryPool_register,(int)fn_80038F58,(int)igStackMemoryPool_getMetaCall,(int)lbl_80467F64,152,(int)igStackMemoryPool_vtableRead,(int)igStackMemoryPool_fieldInit,0,(int)lbl_8055D6B8);
}
void *igStackMemoryPool_getMetaCall(){return igStackMemoryPool_getMeta();}
}
#pragma pop
