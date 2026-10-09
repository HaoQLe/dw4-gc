#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800635C8(void *,void *,void *,int);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_801420C0();
void fn_80146C84();
void igInterfaced_register();
extern char lbl_8049BC80[];
extern char lbl_8049E8B0[];
extern char lbl_8049E934[];
extern char lbl_8049E944[];
extern char lbl_804A6460[];
extern char lbl_804AA1C0[];
extern char lbl_8055FA70[6];
extern char lbl_8055FA80[8];
extern char lbl_8055FA88[8];
extern char lbl_8055FA90[6];
extern void *lbl_80564198;
extern void *lbl_8056419C;
extern void *lbl_805641A0;
extern void *lbl_805641A4;
extern void *lbl_805641A8;
void *igInterface_getMeta();
void *igInterface_vtableRead();
void fn_80146848();
void igInterface_register();
void *igInterface_getMetaCall();
}
struct UnknownGenObject801467FC_0 {
 void *unknown00;
 char unknown04[36];
};
extern "C" {
void *igInterface_getMeta(){
 if(!lbl_80564198 || !(reinterpret_cast<unsigned int *>(lbl_80564198)[0x24/4]&4)) fn_80146848();
 return lbl_80564198;
}
void *igInterface_vtableRead(){
 UnknownGenObject801467FC_0 object;
 fn_8006665C(&object);
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AA1C0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_80146848(){
 fn_80066188((int)igInterface_register);
}
void igInterface_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564198,(int)igInterfaced_register,(int)fn_801420C0,(int)igInterface_getMetaCall,(int)lbl_8049E8B0,32,(int)igInterface_vtableRead,0,0,0);
}
void *igInterface_getMetaCall(){return igInterface_getMeta();}
void *fn_801468F8(){
 char *data=lbl_8049BC80;
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
 if(!lbl_805641A8 || !(reinterpret_cast<unsigned int *>(lbl_805641A8)[0x24/4]&4)) fn_80146C84();
 return lbl_805641A8;
}
}
#pragma pop
