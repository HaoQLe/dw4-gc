#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029F84();
void *fn_800635C8(void *,void *,void *,int);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void *fn_80071694(void *,void *);
void fn_8012FC48();
void *fn_801308D0();
void igCollapseGeometry_fieldInit();
void igOptBase_register();
extern char igVertexBlending_className[];
extern char igNodeTraversal_className[];
extern char igCollapseHierarchy_className[];
extern char igCollapseGeometry_className[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char igCollapseHierarchy_vtable[];
extern char igCollapseGeometry_vtable[];
extern char lbl_804AAF48[];
extern char lbl_8055FCC0[8];
extern char lbl_8055FCC8[8];
extern char lbl_8055FCD0[8];
extern char lbl_8055FCD8[8];
extern char lbl_8055FCE0[8];
extern void *lbl_805644F0;
extern void *igCollapseHierarchy_meta;
extern void *lbl_80564500;
extern void *igCollapseGeometry_meta;
void *igCollapseHierarchy_getMeta();
void *igCollapseHierarchy_vtableRead();
void igCollapseHierarchy_registerNow();
void igCollapseHierarchy_register();
void *igCollapseHierarchy_getMetaCall();
void igCollapseHierarchy_fieldInit();
void *igCollapseGeometry_getMeta();
void *igCollapseGeometry_vtableRead();
void igCollapseGeometry_registerNow();
void igCollapseGeometry_register();
void *igCollapseGeometry_getMetaCall();
}
struct UnknownGenRoot80151278 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80151278(){fn_8006665C(this);}
};
struct UnknownGenObject80151278_0 : UnknownGenRoot80151278 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80151278_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80151278 : UnknownGenObject80151278_0 {
 UnknownGenString unknown28;
 UnknownGenRefMember unknown2C;
 char unknown30[8];
 inline ~UnknownGenObject80151278(){unknown00=igCollapseHierarchy_vtable;}
};
struct UnknownGenRoot801515BC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801515BC(){fn_8006665C(this);}
};
struct UnknownGenObject801515BC_0 : UnknownGenRoot801515BC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801515BC_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801515BC : UnknownGenObject801515BC_0 {
 char unknown28[16];
 UnknownGenString unknown38;
 char unknown3C[12];
 inline ~UnknownGenObject801515BC(){unknown00=igCollapseGeometry_vtable;}
};
extern "C" {
void *fn_801511F0(){
 char *data=igVertexBlending_className;
 if(!lbl_805644F0) lbl_805644F0=fn_800635C8(data+0x430C,data+0x42EC,data+0x42FC,0x4);
 return lbl_805644F0;
}
void *igCollapseHierarchy_getMeta(){
 if(!igCollapseHierarchy_meta || !(reinterpret_cast<unsigned int *>(igCollapseHierarchy_meta)[0x24/4]&4)) igCollapseHierarchy_registerNow();
 return igCollapseHierarchy_meta;
}
void *igCollapseHierarchy_vtableRead(){
 UnknownGenObject80151278 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igCollapseHierarchy_vtable;
 object.unknown28.value=0;
 object.unknown2C.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCollapseHierarchy_registerNow(){
 meta_registerNow((int)igCollapseHierarchy_register);
}
void igCollapseHierarchy_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCollapseHierarchy_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igCollapseHierarchy_getMetaCall,(int)igCollapseHierarchy_className,48,(int)igCollapseHierarchy_vtableRead,(int)igCollapseHierarchy_fieldInit,0,(int)lbl_8055FCC0);
}
void *igCollapseHierarchy_getMetaCall(){return igCollapseHierarchy_getMeta();}
void igCollapseHierarchy_fieldInit(){
 void *value0=igCollapseHierarchy_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_8055FCC8,2);
 void *value2=fn_800658E4(value0,value1);
 void *value3=fn_80029F84();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 fn_80071694(value4,igNodeTraversal_className);
 fn_800659C0(value0,lbl_8055FCD0,lbl_8055FCD8,lbl_8055FCE0,value1);
}
void *fn_80151534(){
 char *data=igVertexBlending_className;
 if(!lbl_80564500) lbl_80564500=fn_800635C8(data+0x4388,data+0x4370,data+0x437C,0x3);
 return lbl_80564500;
}
void *igCollapseGeometry_getMeta(){
 if(!igCollapseGeometry_meta || !(reinterpret_cast<unsigned int *>(igCollapseGeometry_meta)[0x24/4]&4)) igCollapseGeometry_registerNow();
 return igCollapseGeometry_meta;
}
void *igCollapseGeometry_vtableRead(){
 UnknownGenObject801515BC object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igCollapseGeometry_vtable;
 object.unknown38.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCollapseGeometry_registerNow(){
 meta_registerNow((int)igCollapseGeometry_register);
}
void igCollapseGeometry_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igCollapseGeometry_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igCollapseGeometry_getMetaCall,(int)igCollapseGeometry_className,60,(int)igCollapseGeometry_vtableRead,(int)igCollapseGeometry_fieldInit,0,0);
}
void *igCollapseGeometry_getMetaCall(){return igCollapseGeometry_getMeta();}
}
#pragma pop
