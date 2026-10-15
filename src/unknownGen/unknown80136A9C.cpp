#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_801308D0();
void igOptBase_register();
void igReduceWeights_fieldInit();
extern char igVertexBlending_className[];
extern char lbl_8049CB68[];
extern char igReduceWeights_className[];
extern char igReduceWeights_vtable[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F67C[8];
extern char lbl_8055F684[8];
extern char igReduceWeights_dependencies[8];
extern void *lbl_80563CE8;
extern void *lbl_80563CEC;
extern void *igReduceWeights_meta;
void *igReduceWeights_getMeta();
void *igReduceWeights_vtableRead();
void igReduceWeights_arkRegister();
void igReduceWeights_register();
void *igReduceWeights_getMetaCall();
}
struct UnknownGenRoot80136B6C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80136B6C(){igObject_construct(this);}
};
struct UnknownGenObject80136B6C_0 : UnknownGenRoot80136B6C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80136B6C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80136B6C : UnknownGenObject80136B6C_0 {
 UnknownGenRefMember unknown28;
 char unknown2C[20];
 UnknownGenString unknown40;
 char unknown44[4];
 inline ~UnknownGenObject80136B6C(){unknown00=igReduceWeights_vtable;}
};
extern "C" {
void *fn_80136A9C(){
 char *data=igVertexBlending_className;
 if(!lbl_80563CE8) lbl_80563CE8=fn_800635C8(data+0xEA4,data+0xE8C,data+0xE98,0x3);
 return lbl_80563CE8;
}
void *fn_80136AE8(){
 void *value0;
 if(!lbl_80563CEC){
  value0=fn_800635C8(lbl_8049CB68,lbl_8055F67C,lbl_8055F684,2);
  lbl_80563CEC=value0;
 }
 return lbl_80563CEC;
}
void *igReduceWeights_getMeta(){
 if(!igReduceWeights_meta || !(reinterpret_cast<unsigned int *>(igReduceWeights_meta)[0x24/4]&4)) igReduceWeights_arkRegister();
 return igReduceWeights_meta;
}
void *igReduceWeights_vtableRead(){
 UnknownGenObject80136B6C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igReduceWeights_vtable;
 object.unknown28.value=0;
 object.unknown40.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igReduceWeights_arkRegister(){
 meta_registerNow((int)igReduceWeights_register);
}
void igReduceWeights_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igReduceWeights_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igReduceWeights_getMetaCall,(int)igReduceWeights_className,68,(int)igReduceWeights_vtableRead,(int)igReduceWeights_fieldInit,0,(int)igReduceWeights_dependencies);
}
void *igReduceWeights_getMetaCall(){return igReduceWeights_getMeta();}
}
#pragma pop
