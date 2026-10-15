#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void igGenericNodeStatistics_fieldInit();
void igObject_register();
extern char lbl_8049BFA8[];
extern char igGenericNodeStatistics_className[];
extern char igGenericNodeStatistics_vtable[];
extern void *igGenericNodeStatistics_meta;
void *igGenericNodeStatistics_getMeta();
void *igGenericNodeStatistics_vtableRead();
void igGenericNodeStatistics_registerNow();
void igGenericNodeStatistics_register();
void *igGenericNodeStatistics_getMetaCall();
}
struct UnknownGenRoot80131D14 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80131D14(){fn_8006665C(this);}
};
struct UnknownGenObject80131D14 : UnknownGenRoot80131D14 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject80131D14(){unknown00=igGenericNodeStatistics_vtable;}
};
extern "C" {
void *igGenericNodeStatistics_create(void *object){
 igGenericNodeStatistics_registerNow();
 return meta_createInstance(igGenericNodeStatistics_meta,object);
}
void *igGenericNodeStatistics_getMeta(){
 if(!igGenericNodeStatistics_meta || !(reinterpret_cast<unsigned int *>(igGenericNodeStatistics_meta)[0x24/4]&4)) igGenericNodeStatistics_registerNow();
 return igGenericNodeStatistics_meta;
}
void *igGenericNodeStatistics_vtableRead(){
 UnknownGenObject80131D14 object;
 object.unknown00=igGenericNodeStatistics_vtable;
 object.unknown08.value=0;
 object.unknown0C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGenericNodeStatistics_registerNow(){
 meta_registerNow((int)igGenericNodeStatistics_register);
}
void igGenericNodeStatistics_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igGenericNodeStatistics_meta,(int)igObject_register,(int)fn_800237D0,(int)igGenericNodeStatistics_getMetaCall,(int)igGenericNodeStatistics_className,24,(int)igGenericNodeStatistics_vtableRead,(int)igGenericNodeStatistics_fieldInit,0,(int)lbl_8049BFA8);
}
void *igGenericNodeStatistics_getMetaCall(){return igGenericNodeStatistics_getMeta();}
}
#pragma pop
