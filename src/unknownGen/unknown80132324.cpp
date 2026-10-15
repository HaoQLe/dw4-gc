#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_801308D0();
void *fn_801A1FE8();
void fn_801A2070();
void igOptBase_register();
void igSpatialPartitionDeprecated_fieldInit();
extern char igSplitGeometries_className[];
extern char igSpatialPartitionDeprecated_className[];
extern char igSplitGeometries_vtable[];
extern char igSpatialPartitionDeprecated_vtable[];
extern char lbl_804A4A04[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F560[8];
extern void *igSplitGeometries_meta;
extern void *igSpatialPartitionDeprecated_meta;
void *igSplitGeometries_getMeta();
void *igSplitGeometries_vtableRead();
void igSplitGeometries_registerNow();
void igSplitGeometries_register();
void *igSplitGeometries_getMetaCall();
void *igSpatialPartitionDeprecated_getMeta();
void *igSpatialPartitionDeprecated_vtableRead();
void igSpatialPartitionDeprecated_registerNow();
void igSpatialPartitionDeprecated_register();
void *igSpatialPartitionDeprecated_getMetaCall();
}
struct UnknownGenRoot801323A0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801323A0(){igObject_construct(this);}
};
struct UnknownGenObject801323A0_0 : UnknownGenRoot801323A0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject801323A0_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject801323A0 : UnknownGenObject801323A0_0 {
 char unknown28[8];
 inline ~UnknownGenObject801323A0(){unknown00=igSplitGeometries_vtable;}
};
struct UnknownGenRoot8013257C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013257C(){igObject_construct(this);}
};
struct UnknownGenObject8013257C_0 : UnknownGenRoot8013257C {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject8013257C_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject8013257C : UnknownGenObject8013257C_0 {
 char unknown28[24];
 UnknownGenRefMember unknown40;
 char unknown44[4];
 inline ~UnknownGenObject8013257C(){unknown00=igSpatialPartitionDeprecated_vtable;}
};
extern "C" {
void *fn_80132324(){return fn_801A1FE8();}
void fn_80132344(){return fn_801A2070();}
void *igSplitGeometries_getMeta(){
 if(!igSplitGeometries_meta || !(reinterpret_cast<unsigned int *>(igSplitGeometries_meta)[0x24/4]&4)) igSplitGeometries_registerNow();
 return igSplitGeometries_meta;
}
void *igSplitGeometries_vtableRead(){
 UnknownGenObject801323A0 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igSplitGeometries_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igSplitGeometries_registerNow(){
 meta_registerNow((int)igSplitGeometries_register);
}
void igSplitGeometries_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igSplitGeometries_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igSplitGeometries_getMetaCall,(int)igSplitGeometries_className,40,(int)igSplitGeometries_vtableRead,0,0,0);
}
void *igSplitGeometries_getMetaCall(){return igSplitGeometries_getMeta();}
void *igSpatialPartitionDeprecated_getMeta(){
 if(!igSpatialPartitionDeprecated_meta || !(reinterpret_cast<unsigned int *>(igSpatialPartitionDeprecated_meta)[0x24/4]&4)) igSpatialPartitionDeprecated_registerNow();
 return igSpatialPartitionDeprecated_meta;
}
void *igSpatialPartitionDeprecated_vtableRead(){
 UnknownGenObject8013257C object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A4A04;
 object.unknown20.value=0;
 object.unknown24.value=0;
 object.unknown00=igSpatialPartitionDeprecated_vtable;
 object.unknown40.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
UnknownGenHolder *fn_801326AC(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) __dl__FPv(object);
 }
 return object;
}
void igSpatialPartitionDeprecated_registerNow(){
 meta_registerNow((int)igSpatialPartitionDeprecated_register);
}
void igSpatialPartitionDeprecated_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igSpatialPartitionDeprecated_meta,(int)igOptBase_register,(int)fn_801308D0,(int)igSpatialPartitionDeprecated_getMetaCall,(int)igSpatialPartitionDeprecated_className,68,(int)igSpatialPartitionDeprecated_vtableRead,(int)igSpatialPartitionDeprecated_fieldInit,0,(int)lbl_8055F560);
}
void *igSpatialPartitionDeprecated_getMetaCall(){return igSpatialPartitionDeprecated_getMeta();}
}
#pragma pop
