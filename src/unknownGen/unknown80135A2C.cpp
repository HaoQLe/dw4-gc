#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_801308D0();
void igOptBase_register();
void igRepairHierarchy_fieldInit();
extern char igRepairHierarchy_className[];
extern char igRepairHierarchy_vtable[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F614[8];
extern void *igRepairHierarchy_meta;
void *igRepairHierarchy_getMeta();
void *igRepairHierarchy_vtableRead();
void igRepairHierarchy_registerNow();
void igRepairHierarchy_register();
void *igRepairHierarchy_getMetaCall();
}
struct UnknownGenRoot80135AA0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80135AA0(){fn_8006665C(this);}
};
struct UnknownGenObject80135AA0_0 : UnknownGenRoot80135AA0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80135AA0_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80135AA0 : UnknownGenObject80135AA0_0 {
 UnknownGenRefMember unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject80135AA0(){unknown00=igRepairHierarchy_vtable;}
};
extern "C" {
void *igRepairHierarchy_create(void *object){
 igRepairHierarchy_registerNow();
 return meta_createInstance(igRepairHierarchy_meta,object);
}
void *igRepairHierarchy_getMeta(){
 if(!igRepairHierarchy_meta || !(reinterpret_cast<unsigned int *>(igRepairHierarchy_meta)[0x24/4]&4)) igRepairHierarchy_registerNow();
 return igRepairHierarchy_meta;
}
void *igRepairHierarchy_vtableRead(){
 UnknownGenObject80135AA0 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igRepairHierarchy_vtable;
 object.unknown28.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igRepairHierarchy_registerNow(){
 meta_registerNow((int)igRepairHierarchy_register);
}
void igRepairHierarchy_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igRepairHierarchy_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igRepairHierarchy_getMetaCall,(int)igRepairHierarchy_className,48,(int)igRepairHierarchy_vtableRead,(int)igRepairHierarchy_fieldInit,0,(int)lbl_8055F614);
}
void *igRepairHierarchy_getMetaCall(){return igRepairHierarchy_getMeta();}
}
#pragma pop
