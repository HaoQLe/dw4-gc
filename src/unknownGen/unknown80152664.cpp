#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_800BB61C();
void fn_8012FC48();
void *fn_80135970();
void *fn_801420C0();
void *fn_8014C1F8();
void fn_80152CE4();
void igAttrContainer_register();
void igAttrEditForNode_register();
void igInstanceLock_register();
void igInterfaced_register();
extern char igCachedInstanceLock_className[];
extern char lbl_804A0204[];
extern char igAttrTraversal_className[];
extern char lbl_804A0220[];
extern char igAttrEditForLightStateSet_className[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char igAttrTraversal_vtable[];
extern char igAttrEditForLightStateSet_vtable[];
extern char lbl_804A8808[];
extern char lbl_804A88A4[];
extern char lbl_804AA614[];
extern char lbl_804AAF48[];
extern char lbl_8055FD48[7];
extern char lbl_8055FD50[8];
extern char lbl_8055FD58[8];
extern char lbl_8055FD60[8];
extern char lbl_8055FD68[8];
extern void *igObject_meta;
extern void *igCachedInstanceLock_meta;
extern void *igBase_meta;
extern void *igAttrTraversal_meta;
extern void *igAttrEditForLightStateSet_meta;
extern void *igAttrEditForNode_meta;
void *igCachedInstanceLock_getMeta();
void igCachedInstanceLock_registerNow();
void igCachedInstanceLock_register();
void *igCachedInstanceLock_getMetaCall();
void *igBase_getMeta();
void igBase_registerNow();
void igBase_register();
void *igBase_getMetaCall();
void *igAttrTraversal_getMeta();
void *igAttrTraversal_vtableRead();
void igAttrTraversal_registerNow();
void igAttrTraversal_register();
void *igAttrTraversal_getMetaCall();
void igAttrTraversal_fieldInit();
void *igAttrEditForLightStateSet_getMeta();
void *igAttrEditForLightStateSet_vtableRead();
void igAttrEditForLightStateSet_registerNow();
void igAttrEditForLightStateSet_register();
void *igAttrEditForLightStateSet_getMetaCall();
void *fn_80152CDC();
}
struct UnknownGenRoot8015286C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8015286C(){fn_8006665C(this);}
};
struct UnknownGenObject8015286C : UnknownGenRoot8015286C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 char unknown28[8];
 inline ~UnknownGenObject8015286C(){unknown00=igAttrTraversal_vtable;}
};
struct UnknownGenRoot80152B04 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80152B04(){fn_8006665C(this);}
};
struct UnknownGenObject80152B04_0 : UnknownGenRoot80152B04 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80152B04_0(){unknown00=lbl_804A8808;}
};
struct UnknownGenObject80152B04_1 : UnknownGenObject80152B04_0 {
 inline ~UnknownGenObject80152B04_1(){unknown00=lbl_804A88A4;}
};
struct UnknownGenObject80152B04 : UnknownGenObject80152B04_1 {
 char unknown28[8];
 inline ~UnknownGenObject80152B04(){unknown00=igAttrEditForLightStateSet_vtable;}
};
extern "C" {
void *igCachedInstanceLock_getMeta(){
 if(!igCachedInstanceLock_meta || !(reinterpret_cast<unsigned int *>(igCachedInstanceLock_meta)[0x24/4]&4)) igCachedInstanceLock_registerNow();
 return igCachedInstanceLock_meta;
}
void igCachedInstanceLock_registerNow(){
 meta_registerNow((int)igCachedInstanceLock_register);
}
void igCachedInstanceLock_register(){
 fn_8012FC48();
 meta_registerClass(1,(int)&igCachedInstanceLock_meta,(int)igInstanceLock_register,(int)fn_8014C1F8,(int)igCachedInstanceLock_getMetaCall,(int)igCachedInstanceLock_className,32,0,0,0,0);
}
void *igCachedInstanceLock_getMetaCall(){return igCachedInstanceLock_getMeta();}
void *igBase_getMeta(){
 if(!igBase_meta || !(reinterpret_cast<unsigned int *>(igBase_meta)[0x24/4]&4)) igBase_registerNow();
 return igBase_meta;
}
void igBase_registerNow(){
 meta_registerNow((int)igBase_register);
}
void igBase_register(){
 fn_8012FC48();
 meta_registerClass(1,(int)&igBase_meta,(int)igInterfaced_register,(int)fn_801420C0,(int)igBase_getMetaCall,(int)lbl_8055FD48,32,0,0,0,0);
}
void *igBase_getMetaCall(){return igBase_getMeta();}
void *igAttrTraversal_getMeta(){
 if(!igAttrTraversal_meta || !(reinterpret_cast<unsigned int *>(igAttrTraversal_meta)[0x24/4]&4)) igAttrTraversal_registerNow();
 return igAttrTraversal_meta;
}
void *igAttrTraversal_vtableRead(){
 UnknownGenObject8015286C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804AA614;
 object.unknown00=igAttrTraversal_vtable;
 object.unknown20.value=0;
 object.unknown24.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAttrTraversal_registerNow(){
 meta_registerNow((int)igAttrTraversal_register);
}
void igAttrTraversal_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igAttrTraversal_meta,(int)igAttrContainer_register,(int)fn_80135970,(int)igAttrTraversal_getMetaCall,(int)igAttrTraversal_className,40,(int)igAttrTraversal_vtableRead,(int)igAttrTraversal_fieldInit,0,(int)lbl_804A0204);
}
void *igAttrTraversal_getMetaCall(){return igAttrTraversal_getMeta();}
void igAttrTraversal_fieldInit(){
 void *value0=igAttrTraversal_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055FD50,2);
 void *value2=fn_800658E4(value0,value1);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=igObject_meta;
 void *value3=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value4=fn_800BB61C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+52)=1;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value3)+38)=0;
 fn_800659C0(value0,lbl_8055FD58,lbl_8055FD60,lbl_8055FD68,value1);
}
void *igAttrEditForLightStateSet_getMeta(){
 if(!igAttrEditForLightStateSet_meta || !(reinterpret_cast<unsigned int *>(igAttrEditForLightStateSet_meta)[0x24/4]&4)) igAttrEditForLightStateSet_registerNow();
 return igAttrEditForLightStateSet_meta;
}
void *igAttrEditForLightStateSet_vtableRead(){
 UnknownGenObject80152B04 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804AA614;
 object.unknown00=lbl_804A8808;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=lbl_804A88A4;
 object.unknown00=igAttrEditForLightStateSet_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igAttrEditForLightStateSet_registerNow(){
 meta_registerNow((int)igAttrEditForLightStateSet_register);
}
void igAttrEditForLightStateSet_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igAttrEditForLightStateSet_meta,(int)igAttrEditForNode_register,(int)fn_80152CDC,(int)igAttrEditForLightStateSet_getMetaCall,(int)igAttrEditForLightStateSet_className,40,(int)igAttrEditForLightStateSet_vtableRead,(int)fn_80152CE4,0,(int)lbl_804A0220);
}
void *igAttrEditForLightStateSet_getMetaCall(){return igAttrEditForLightStateSet_getMeta();}
void *fn_80152CDC(){return igAttrEditForNode_meta;}
}
#pragma pop
