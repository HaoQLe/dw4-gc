#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_801420C0();
void igInstanceScene_registerNow();
void igInterfaced_register();
extern char igVertexBlending_className[];
extern char igInterface_className[];
extern char lbl_8049E934[];
extern char lbl_8049E944[];
extern char lbl_804A6460[];
extern char igInterface_vtable[];
extern char lbl_8055FA70[6];
extern char lbl_8055FA80[8];
extern char lbl_8055FA88[8];
extern char lbl_8055FA90[6];
extern void *igInterface_meta;
extern void *lbl_8056419C;
extern void *lbl_805641A0;
extern void *lbl_805641A4;
extern void *igInstanceScene_meta;
void *igInterface_getMeta();
void *igInterface_vtableRead();
void igInterface_registerNow();
void igInterface_register();
void *igInterface_getMetaCall();
}
struct UnknownGenObject801467FC_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *igInterface_getMeta(){
 if(!igInterface_meta || !(reinterpret_cast<unsigned int *>(igInterface_meta)[0x24/4]&4)) igInterface_registerNow();
 return igInterface_meta;
}
void *igInterface_vtableRead(){
 UnknownGenObject801467FC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=igInterface_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igInterface_registerNow(){
 meta_registerNow((int)igInterface_register);
}
void igInterface_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igInterface_meta,(int)igInterfaced_register,(int)fn_801420C0,(int)igInterface_getMetaCall,(int)igInterface_className,32,(int)igInterface_vtableRead,0,0,0);
}
void *igInterface_getMetaCall(){return igInterface_getMeta();}
void *fn_801468F8(){
 char *data=igVertexBlending_className;
 if(!lbl_8056419C) lbl_8056419C=fn_800635C8(data+0x2C8C,data+0x2C6C,data+0x2C7C,0x4);
 return lbl_8056419C;
}
void *fn_80146944(){
 void *value0;
 if(!lbl_805641A0){
  value0=fn_800635C8(lbl_8055FA70,lbl_8049E934,lbl_8049E944,4);
  lbl_805641A0=value0;
 }
 return lbl_805641A0;
}
void *fn_80146990(){
 void *value0;
 if(!lbl_805641A4){
  value0=fn_800635C8(lbl_8055FA90,lbl_8055FA80,lbl_8055FA88,2);
  lbl_805641A4=value0;
 }
 return lbl_805641A4;
}
void *igInstanceScene_getMeta(){
 if(!igInstanceScene_meta || !(reinterpret_cast<unsigned int *>(igInstanceScene_meta)[0x24/4]&4)) igInstanceScene_registerNow();
 return igInstanceScene_meta;
}
}
#pragma pop
